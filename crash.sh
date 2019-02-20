ROOT=`pwd`
git clone https://github.com/QuantStack/xsimd
XSIMD_INCLUDE_DIR=/build/xsimd/include
/usr/local/bin/arm-frc2019-linux-gnueabi-g++ "$ROOT"/src/crash.cpp \
    -pthread -DNDEBUG -g -fwrapv -O2 -Wall -g \
    -fstack-protector-strong -Wformat \
    -Werror=format-security -Wdate-time \
    -D_FORTIFY_SOURCE=2 -fPIC \
    -I"$XSIMD_INCLUDE_DIR" \
    -std=c++14 \
    -o src/crash.o \
