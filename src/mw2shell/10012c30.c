/* SPDX-License-Identifier: MIT */
/* mw2shell 10012c30 */
/* mw2shell 10012c30: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10098204;
extern undefined4 DAT_100a7248;
uint __cdecl FUN_10065029(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __thiscall FUN_10012470(void * this, int param_1, int param_2, int param_3, int param_4);

void __thiscall FUN_10012c30(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)

{
  int iVar1;
  
  iVar1 = -1;
  if (DAT_10098204 != 0) {
    iVar1 = ((int (*)(void))((void (*)(void))((**(code **)(DAT_100a7248 + 0x20)))))();
  }
  if (iVar1 == 0) {
    FUN_10065029((int *)((int)this + 0x56),param_1,param_2,param_3,param_4,0,param_5);
  }
  FUN_10012470(this,param_1,param_2,param_3,param_4);
  return;
}
