#!/bin/bash -e

cd `dirname $0`

function download {
  URI="$1"
  FNAME=$(basename $1)

  if [ ! -f "$FNAME" ]; then
    wget $URI
  fi
}


# for some reason this is needed to get pythran to install...
function localefix {
  export DEBIAN_FRONTEND=noninteractive DEBCONF_NONINTERACTIVE_SEEN=true
  apt install locales
  locale-gen "en_US.UTF-8"
  debconf-set-selections preseed.txt
  dpkg-reconfigure locales
  export LC_ALL=en_US.UTF-8
  update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
}

apt update
localefix

apt install -y python3 python3-pip
pip3 install -r requirements.txt

DEPS=`cat deps`

[ -d downloads ] || mkdir downloads
pushd downloads

for dep in $DEPS; do
  download "$dep"
done

popd

cp pythranrc ~/.pythranrc
