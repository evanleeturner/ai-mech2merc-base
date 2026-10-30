/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f6d0 */
/* mw2shell 1000f6d0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef unsigned long long ulonglong;
extern undefined DAT_1008da60[];
extern undefined4 DAT_1008da7c[];
extern undefined4 DAT_1008da80[];
extern undefined4 DAT_1008da84[];
extern undefined4 DAT_1008da88[];
extern undefined4 DAT_1008da8c[];
extern undefined4 DAT_1008da90[];
extern undefined4 DAT_1008da94[];
extern undefined DAT_1008daa4[];
extern undefined4 DAT_1008e3e0;
extern void * DAT_100a672c;
undefined __thiscall FUN_10012f10(void * this, int param_1, int param_2, int param_3, int param_4);
undefined __cdecl CloseSmackerSlot(int param_1);
undefined4 __cdecl FUN_1000e790(undefined4 param_1);
undefined4 __cdecl FUN_1000f3f0(int * param_1, undefined4 param_2);
undefined4 __cdecl FUN_1000f640(int param_1, undefined4 param_2);

int __cdecl FUN_1000f6d0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, uint param_5, uint param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(DAT_1008da60 + param_1 * 0x13);
  if ((-1 < param_1) && (param_1 < 0x20)) {
    if ((DAT_1008da7c[param_1 * 0x13] & 0x80000000) != 0) {
      if ((DAT_1008da7c[param_1 * 0x13] & 0x10) != 0) {
        FUN_10012f10(DAT_100a672c,DAT_1008da90[param_1 * 0x13],DAT_1008da94[param_1 * 0x13],
                     DAT_1008da88[param_1 * 0x13],DAT_1008da8c[param_1 * 0x13]);
      }
      CloseSmackerSlot(param_1);
    }
    DAT_1008da80[param_1 * 0x13] = param_3;
    DAT_1008da84[param_1 * 0x13] = param_4;
    DAT_1008da7c[param_1 * 0x13] = param_5 | 0x80000100;
    if (param_6 == 0) {
      param_6 = 10;
    }
    *(int *)(DAT_1008daa4 + param_1 * 0x4c) = (int)(1000 / (ulonglong)param_6);
    iVar2 = FUN_1000e790(param_2);
    if (iVar2 == 0) {
      iVar2 = FUN_1000f640((int)piVar1,param_2);
      if (iVar2 == 0) {
        DAT_1008e3e0 = 1;
        iVar2 = FUN_1000f640((int)piVar1,param_2);
        if (iVar2 == 0) {
          DAT_1008da7c[param_1 * 0x13] = 0;
          return -1;
        }
      }
    }
    else {
      iVar2 = FUN_1000f3f0(piVar1,param_2);
      if (iVar2 == 0) {
        DAT_1008da7c[param_1 * 0x13] = 0;
        return -1;
      }
    }
    DAT_1008da90[param_1 * 0x13] = DAT_1008da80[param_1 * 0x13];
    DAT_1008da94[param_1 * 0x13] = DAT_1008da84[param_1 * 0x13];
    return param_1;
  }
  return -1;
}
