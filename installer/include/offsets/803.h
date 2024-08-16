#ifndef __OFFSETS_H__
#define __OFFSETS_H__
#pragma once

// 8.03
#define	XFAST_SYSCALL_addr              0x000001C0

// Names - Data
#define PRISON0_addr                    0x0111A7D0
#define ROOTVNODE_addr                  0x01B8C730
#define PMAP_STORE_addr                 0x02245C40
#define DT_HASH_SEGMENT_addr            0x00CE68A8

// Functions
#define pmap_protect_addr               0x00383600
#define pmap_protect_p_addr             0x00383647

// Patches
// debug menu error
#define debug_menu_error_patch1         0x004E45D8
#define debug_menu_error_patch2         0x004E584C

// disable signature check
#define disable_signature_check_patch   0x00681DD0

// enable debug RIFs
#define enable_debug_rifs_patch1        0x0064DF00
#define enable_debug_rifs_patch2        0x0064DF30

// allow sys_dynlib_dlsym in all processes
#define sys_dynlib_dlsym_patch1         0x0031953F
#define sys_dynlib_dlsym_patch2         0x000951C0

// patch sys_mmap to allow rwx mappings
#define sys_mmap_patch                  0x000FD03A

// disable some check for mmap
#define vm_map_protect_check            0x003EC68B

// enable debug log
#define enable_debug_log_patch          0x00430BC7

// enable uart output
#define enable_uart_patch               0x0155D190

#endif