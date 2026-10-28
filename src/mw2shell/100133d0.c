/* SPDX-License-Identifier: MIT */
/* mw2shell 100133d0 */
/* mw2shell 100133d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10098204;
extern undefined4 DAT_100a7248;
extern undefined4 DAT_100a724c;
undefined4 __cdecl FUN_10067a14(int * param_1, undefined1 param_2);

void __fastcall FUN_100133d0(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (DAT_10098204 != 0) {
    iVar1 = ((int (*)(void))((void (*)(void))((**(code **)(DAT_100a7248 + 0x20)))))();
  }
  if (iVar1 == 0) {
    FUN_10067a14((int *)(param_1 + 0x56),0);
  }
  (**(code **)(DAT_100a724c + 0x18))();
  return;
}
