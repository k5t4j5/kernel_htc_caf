/*
 * Copyright 2010 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 *
 * based on kexec.h from other architectures in linux-2.6.18
 */

#ifndef _ASM_TILE_KEXEC_H
#define _ASM_TILE_KEXEC_H

#include <asm/page.h>

#define KEXEC_SOURCE_MEMORY_LIMIT TASK_SIZE
#define KEXEC_DESTINATION_MEMORY_LIMIT TASK_SIZE
#define KEXEC_CONTROL_MEMORY_LIMIT TASK_SIZE

#define KEXEC_CONTROL_PAGE_SIZE	PAGE_SIZE

#define KEXEC_ARCH KEXEC_ARCH_DEFAULT

struct page *kimage_alloc_pages_arch(gfp_t gfp_mask, unsigned int order);
#define kimage_alloc_pages_arch kimage_alloc_pages_arch

#define MAX_NOTE_BYTES 1024

extern const unsigned char relocate_new_kernel[];
extern const unsigned long relocate_new_kernel_size;
extern void relocate_new_kernel_end(void);

static inline void crash_setup_regs(struct pt_regs *n, struct pt_regs *o)
{
}

#endif 
