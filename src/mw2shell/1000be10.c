/* SPDX-License-Identifier: MIT */
/* mw2shell 1000be10 */
extern void *DAT_10083508;

void __stdcall FUN_1000be10(void)
{
    int local_val;
    __builtin_memcpy(&local_val, (void *)(DAT_10083508 + 0x15e), 4);
    local_val = local_val + 1;
    __builtin_memcpy((void *)(DAT_10083508 + 0x15e), &local_val, 4);
    return;
}
