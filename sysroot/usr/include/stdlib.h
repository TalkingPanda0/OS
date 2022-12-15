#ifndef _STDLIB_H
#define _STDLIB_H 1

#include <sys/cdefs.h>
#include <stdint.h>

__attribute__((__noreturn__))
void abort(void);
char* itoa(int val);
uint64_t atoi(char *number,uint8_t size);
	

#endif
