// SPDX-License-Identifier: GPL-2.0-only

#include <common.h>
#include <debug_ll.h>
#include <asm/barebox-riscv.h>
#include <asm/riscv_nmon.h>

ENTRY_FUNCTION(start_starfive_visionfive2, a0, a1, a2)
{
	extern char __dtb_z_jh7110_starfive_visionfive_2_v1_2a_start[];
	extern char __dtb_z_jh7110_starfive_visionfive_2_v1_3b_start[];
	void *fdt;

	debug_ll_init();
	barebox_nmon_entry();
	putc_ll('>');

	fdt = __dtb_z_jh7110_starfive_visionfive_2_v1_3b_start + get_runtime_offset();

	barebox_riscv_machine_entry(0x80000000, SZ_512M, fdt);
}
