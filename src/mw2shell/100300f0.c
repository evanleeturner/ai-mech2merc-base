/* SPDX-License-Identifier: MIT */
/* mw2shell 100300f0 */
/* mw2shell 100300f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a678c;
int __cdecl FUN_1000ad30(int param_1, int param_2);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
undefined __cdecl FUN_1000be30(undefined4 * param_1);
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);

void __cdecl FUN_100300f0(undefined4 * param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ad30((int)DAT_100a678c,param_1[0x204]);
  FUN_10017ec0((int)DAT_100a678c,iVar1,'\x01');
  iVar1 = FUN_1000be30(param_1);
  FUN_10017df0(DAT_100a678c,iVar1);
  param_1[0x205] = 1;
  *(undefined4 *)(iVar1 + 0x814) = 1;
  return;
}
