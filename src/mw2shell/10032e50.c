/* SPDX-License-Identifier: MIT */
/* mw2shell 10032e50 */
/* mw2shell 10032e50: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined DAT_10092020;
extern undefined DAT_10092024;
extern undefined DAT_10092298[];
extern undefined DAT_10092618[];
extern undefined DAT_10092dc0[];
undefined __cdecl FUN_10063ea0(int * param_1);
undefined __cdecl FUN_10063d30(int * param_1);
undefined4 __cdecl FUN_10031e40(int param_1);

void __cdecl FUN_10032e50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    DAT_10092024 = 1;
    DAT_10092020 = 0;
    FUN_10063ea0((int *)DAT_10092618);
    FUN_10063d30((int *)DAT_10092298);
    FUN_10063ea0((int *)DAT_10092dc0);
    FUN_10063d30((int *)DAT_10092dc0);
    return;
  }
  if (*(int *)(param_1 + 0x24) == 9) {
    DAT_10092020 = 1;
    DAT_10092024 = 0;
    FUN_10063ea0((int *)DAT_10092298);
    FUN_10063ea0((int *)DAT_10092dc0);
    FUN_10063ea0((int *)DAT_10092618);
    FUN_10063d30((int *)DAT_10092618);
  }
  else {
    DAT_10092020 = 0;
    DAT_10092024 = 0;
    FUN_10063ea0((int *)DAT_10092618);
    FUN_10063ea0((int *)DAT_10092298);
    FUN_10063ea0((int *)DAT_10092dc0);
    FUN_10063d30((int *)DAT_10092dc0);
    uVar1 = FUN_10031e40(param_1);
    if (((char)uVar1 == '\x01') && (*(int *)(DAT_10083508 + 0x23bb) == 1)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      return;
    }
  }
  return;
}
