#!/bin/sh
set -e
. ./build.sh

doas cp sysroot/boot/myos.kernel /boot/myos.bin

