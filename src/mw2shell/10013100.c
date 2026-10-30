/* SPDX-License-Identifier: MIT */
/* mw2shell 10013100 */
/* mw2shell 10013100: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10098204;
extern undefined4 DAT_100a7248;
undefined4 __thiscall FUN_10012590(void * this, int param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_10065b64(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __thiscall FUN_100124d0(void * this, int param_1, int param_2, int param_3, int param_4);

void __thiscall CallGatedBetweenPrePostCalls_Likely(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
  int iVar1;
  
  iVar1 = FUN_10012590(this,param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    iVar1 = -1;
    if (DAT_10098204 != 0) {
      iVar1 = ((int (*)(void))((void (*)(void))((**(code **)(DAT_100a7248 + 0x20)))))();
    }
    if (iVar1 == 0) {
      FUN_10065b64((int *)((int)this + 0x56),param_1,param_2,param_3,param_4);
    }
    FUN_100124d0(this,param_3,param_4,param_5,param_6);
  }
  return;
}
