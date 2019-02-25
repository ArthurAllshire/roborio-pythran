#!/bin/bash -ex

PYTHON_VERSION=3.7

pushd `dirname $0`
ROOT=`pwd`
popd

BUILD=`pwd`/build
SYSROOT=/usr/local/arm-frc2019-linux-gnueabi

function unpack_download {
  FNAME=$(basename $1)
  EXT="${FNAME##*.}"

  case "$EXT" in
    "ipk")
      ar -x "$ROOT"/downloads/"$FNAME"
      echo "Unpacking $FNAME" 
      tar -xf data.tar.gz -C "$SYSROOT"
      rm data.tar.gz control.tar.gz debian-binary
      ;;
    *)
      echo "$FNAME has unknown file type '$EXT' to unpack"
      exit 1
      ;;
  esac
}

function assert_path {
  if [ ! $1 "$2" ]; then
    echo "$2 does not exist, exiting"
    exit 1
  fi
}

[ -d build ] || mkdir build
pushd build

[ ! -d sysroot ] || rm -rf sysroot
mkdir sysroot

PYTHON3_SITE_PACKAGES="$SYSROOT"/usr/local/lib/python${PYTHON_VERSION}/site-packages
PYTHON3_INCLUDE_PATH="$SYSROOT"/usr/local/include/python${PYTHON_VERSION}m
PYTHON3_LIBRARY="$SYSROOT"/usr/local/lib/libpython${PYTHON_VERSION}m.so.1.0
PYTHON3_NUMPY_INCLUDE_DIRS="$PYTHON3_SITE_PACKAGES"/numpy/core/include
# PYTHRAN_INCLUDE_DIRS=/usr/local/lib/python3.6/dist-packages/pythran
PYTHRAN_INCLUDE_DIRS=/build/pythran/pythran
GLOBAL_INCLUDE_DIR="$SYSROOT"/usr/local/include
ATLAS_INCLUDE_DIR="$GLOBAL_INCLUDE_DIR"/atlas

mkdir -p "$PYTHON3_SITE_PACKAGES"
echo "$PYTHON3_SITE_PACKAGES"

for dep in `cat "$ROOT"/deps`; do
  unpack_download "$dep"
done

assert_path -d "$PYTHON3_INCLUDE_PATH"
assert_path -f "$PYTHON3_LIBRARY"
assert_path -d "$PYTHON3_NUMPY_INCLUDE_DIRS"

echo "Running compiler..."
/usr/local/bin/arm-frc2019-linux-gnueabi-g++ "$ROOT"/src/estimator_pythran.cpp \
    -pthread -DNDEBUG -g -fwrapv -O2 -Wall -g \
    -fstack-protector-strong -Wformat \
    -Werror=format-security -Wdate-time \
    -march=armv8.1-a -mfpu=neon \
    -D_FORTIFY_SOURCE=2 -fPIC \
    -DENABLE_PYTHON_MODULE -D__PYTHRAN__=3 \
    -DENABLE_PYTHON_MODULE -D__PYTHRAN__=3 \
    -DPYTHRAN_BLAS_ATLAS -DPYTHRAN_BLAS_ATLAS \
    -I"$PYTHRAN_INCLUDE_DIRS" \
    -I"$PYTHON3_NUMPY_INCLUDE_DIRS" \
    -I"$PYTHON3_INCLUDE_PATH" \
    -I"$GLOBAL_INCLUDE_DIR" \
    -I"$ATLAS_INCLUDE_DIR" \
    -std=c++14 \
    -o "$ROOT"/src/estimator_pythran.o
