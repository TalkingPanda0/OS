#!/bin/sh
set -e
. ./iso.sh

qemu-system-$(./target-triplet-to-arch.sh $HOST)  -audiodev pa,id=snd0 -machine pcspk-audiodev=snd0  -cdrom myos.iso 
