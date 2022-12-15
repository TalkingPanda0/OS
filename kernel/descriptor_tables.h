#include <stdint.h>
struct __attribute__((__packed__)) GDT
{
	uint32_t limit;
	uint32_t base;	
	uint32_t access_byte;
	uint32_t flags;
} ;
