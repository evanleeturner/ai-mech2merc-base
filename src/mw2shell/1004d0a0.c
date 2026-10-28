/* SPDX-License-Identifier: MIT */
/* mw2shell 1004d0a0 */
/* mw2shell 1004d0a0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a678c;
extern undefined4 DAT_100a6798;
int __cdecl FUN_1000ce60(int param_1);
int __cdecl FUN_1000ad30(int param_1, int param_2);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
int __stdcall FUN_1000ce20(void);

void __stdcall FUN_1004d0a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1000ce60(DAT_100a6798);
  iVar2 = FUN_1000ad30(DAT_100a678c,*(int *)(iVar1 + 0x810));
  FUN_10017ec0(DAT_100a6798,iVar1,'\x01');
  FUN_10017ec0(DAT_100a678c,iVar2,'\x01');
  iVar1 = FUN_1000ce20();
  *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
  return;
}
