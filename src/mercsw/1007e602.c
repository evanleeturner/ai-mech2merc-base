/* SPDX-License-Identifier: MIT */
/* mercsw 1007e602 */
extern void *PTR_FUN_100b9424;
extern void *DAT_100aafc4;
extern int DAT_100c823c;

void __stdcall FUN_1007dd4c(void);

void __stdcall FUN_1007e602(void)
{
    PTR_FUN_100b9424 = DAT_100aafc4;
    DAT_100aafc4 = (void *)FUN_1007dd4c;
    DAT_100c823c = 0;
    return;
}
