
#include <stdint.h>
#include <stdio.h>

void play_sound(uint32_t nFreq)
{
	uint32_t Div;
	uint8_t tmp;

	Div = 1193180 / nFreq;
	outb(0x43, 0xb6);
	outb(0x42,(uint8_t) (Div));
	outb(0x42,(uint8_t) (Div >> 8));

	tmp = inb(0x61);
	if (tmp != (tmp | 3) ) 
	{
		outb(0x61, tmp | 3);
	}
}

void stop_sound()
{
	uint8_t tmp = inb(0x61) & 0xFC;
	outb(0x61, tmp);
}

void beep(uint32_t freq) {
	play_sound(freq);
	printf("playing");
	for(int i=0;i<100000;i++)
	{
		io_wait();
	}
	printf("stopping");
	//stop_sound();
}
