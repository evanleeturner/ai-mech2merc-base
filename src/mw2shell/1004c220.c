/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c220 */
/* mw2shell 1004c220: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a67a4;
int __stdcall FUN_1000ce20(void);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
undefined4 __cdecl FUN_10017d70(int * param_1);
undefined4 __cdecl FUN_10017c90(undefined4 * param_1, int param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5);
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);

void __stdcall FUN_1004c220(void)

{
  int iVar1;
  
  iVar1 = FUN_1000ce20();
  if (iVar1 != 0) {
    FUN_10017ec0((int)DAT_100a67a4,iVar1,'\0');
    *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
    FUN_10017d70(DAT_100a67a4);
    FUN_10017c90((undefined4 *)(&DAT_100a67a4),10,0,4,0);
    FUN_10017df0(DAT_100a67a4,iVar1);
  }
  return;
}
