/* SPDX-License-Identifier: MIT */
/* mercsw 100024d1 */
extern int DAT_100b38d8;
extern int DAT_100eef40[];

void __stdcall FUN_100024d1(void)
{
    int *piVar1;
    int local_8;

    for (local_8 = 0; local_8 < DAT_100b38d8; local_8 = local_8 + 1) {
        piVar1 = (int *)(*(int *)(DAT_100eef40[local_8] + 0x20) + 0x3d0);
        *piVar1 = (int)((unsigned int)*piVar1 << 2);
    }
    return;
}
