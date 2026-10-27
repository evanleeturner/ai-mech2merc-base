/* SPDX-License-Identifier: MIT */
/* mercsw 1005200d */
extern undefined4 DAT_100b09ec;
extern undefined4 DAT_101151c0;

undefined4 __stdcall FUN_1005200d(void)
{
    int iVar1;
    undefined4 uVar2;
    
    iVar1 = DAT_100b09ec * 4;
    uVar2 = *(undefined4 *)(&DAT_101151c0 + iVar1);
    DAT_100b09ec = DAT_100b09ec + 1;
    DAT_100b09ec = DAT_100b09ec % 0x7f;
    return uVar2;
}
