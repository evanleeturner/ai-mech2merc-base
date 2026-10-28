/* SPDX-License-Identifier: MIT */
/* mw2shell 10013270 */
/* mw2shell 10013270: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008eb64;
extern undefined4 DAT_10098204;
extern undefined4 DAT_100a7248;
extern undefined DAT_100b0e38[];
undefined4 __cdecl FUN_10069697(int param_1, int param_2);
undefined4 __thiscall FUN_10012590(void * this, int param_1, int param_2, int param_3, int param_4);
int __cdecl FUN_100696b7(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
undefined __thiscall FUN_100124d0(void * this, int param_1, int param_2, int param_3, int param_4);

int __thiscall FUN_10013270(void * this, int param_1, int param_2, int param_3, char param_4, undefined * param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10069697(param_3,(int)param_4);
  if (DAT_1008eb64 != 0) {
    iVar2 = FUN_10012590(this,param_1,param_2,iVar1,*(int *)(param_3 + 8));
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  if (param_5 == (undefined *)0x0) {
    param_5 = DAT_100b0e38;
  }
  iVar2 = -1;
  if (DAT_10098204 != 0) {
    iVar2 = ((int (*)(void))((void (*)(void))((**(code **)(DAT_100a7248 + 0x20)))))();
  }
  if (iVar2 == 0) {
    FUN_100696b7((int *)((int)this + 0x56),param_1,param_2,param_3,(int)param_4,(int)param_5);
  }
  FUN_100124d0(this,param_1,param_2,iVar1,*(int *)(param_3 + 8));
  return iVar1;
}
