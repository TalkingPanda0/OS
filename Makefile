
compile:
	cd kernel; make
	cp kernel/myos.bin isodir/boot/
	grub-mkrescue -o myos.iso isodir
	
