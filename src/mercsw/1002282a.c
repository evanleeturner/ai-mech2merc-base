/* SPDX-License-Identifier: MIT */
/* mercsw 1002282a */
/* mercsw 1002282a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ad6bc;
undefined4 __stdcall GetUnitSize(void);
int __cdecl FUN_100814bb(int param_1, int param_2);
undefined __cdecl FUN_100228e4(int param_1);

undefined4 __cdecl FUN_1002282a(undefined4 param_1, int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_c;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  iVar1 = GetUnitSize();
  piVar2 = (int *)FUN_100814bb(iVar1,DAT_100ad6bc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    *piVar2 = param_2;
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      piVar2[local_c + 0xe6] = 0;
    }
    *(int **)(param_2 + 0x20) = piVar2;
    *(undefined4 *)(param_2 + 0x24) = 0x4d3;
    FUN_100228e4((int)piVar2);
    uVar3 = 1;
  }
  return uVar3;
}
