#include <stdio.h>
#include <stdint.h>

void sleep(uint32_t mili) {
	CountDown = milis;
	while(CountDown > 0) {
		halt();
	}
}
