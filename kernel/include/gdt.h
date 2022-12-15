#ifndef _GDT_H
#define _GDT_H

#include <stdint.h>
#include <kernel/tty.h>

void create_descriptor(uint32_t base, uint32_t limit, uint16_t flag);

#endif
