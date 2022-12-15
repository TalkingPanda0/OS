#ifndef _STDIO_H
#define _STDIO_H 1

#include <sys/cdefs.h>
#include <stdint.h>

#define EOF (-1)


int printf(const char* __restrict, ...);
int putchar(int);
int puts(const char*);
void io_wait(void);
void outb(uint16_t port, uint8_t val);
uint8_t inb(uint16_t port);

#endif
