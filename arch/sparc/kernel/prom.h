#ifndef __PROM_H
#define __PROM_H

#include <linux/spinlock.h>
#include <asm/prom.h>

extern void of_console_init(void);

extern unsigned int prom_early_allocated;

#endif 
