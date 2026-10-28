/* SPDX-License-Identifier: MIT */
/* mw2shell 1006cf90 */
/* mw2shell 1006cf90: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa6b8;
extern undefined4 DAT_100aa6bc;
extern undefined4 DAT_100aa6c0;
int __cdecl FUN_1006b230(int param_1, int param_2, char param_3);

int __stdcall FUN_1006cf90(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1006b230(DAT_100aa6c0,DAT_100aa6bc,'\x01');
  iVar2 = FUN_1006b230(DAT_100aa6b8,DAT_100aa6bc,'\x01');
  return iVar1 - iVar2;
}
