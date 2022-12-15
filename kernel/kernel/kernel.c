#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <kernel/tty.h>
#include <drivers/output/pcspkr.h>
#include <stdio.h>
#include <gdt.h>

void kernel_main(void) {
	terminal_initialize();
	io_wait();
	printf("Hello, kernel World!\n");
	kerror("aaaa\n");
	printf("bbbb\n");
	terminal_clear();
	for(int i=0;;i++)
	{
		pow(2,64);
		printf("%l\n",i);
	}
	
	/*uint64_t num = 1;
	for(int i=0;i<40;i++)
	{
		num = pow(2,i); 
		printf("%l\n",num);
	}*/
}
