
#include <config.h>
#include <init.h>
#include <asm/global_data.h>
#include <asm/arch/misc.h>

DECLARE_GLOBAL_DATA_PTR;

int print_cpuinfo(void) {
	puts("SoC:	MediaTek MT6582!!!");
	return 0;
}
