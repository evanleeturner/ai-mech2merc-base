/* SPDX-License-Identifier: MIT */
/* mercsw 1004d01b */
/* mercsw 1004d01b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0710;
extern undefined DAT_1015f2e0[];
extern undefined DAT_101600f8[];
extern undefined DAT_101604c0[];
undefined __stdcall FUN_100082ad(void);

void __cdecl FUN_1004d01b(int param_1, int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1 < 0x10) && (param_2 < 0x20)) {
    if (param_1 == DAT_100b0710) {
      FUN_100082ad();
    }
    *(int *)(DAT_101600f8 + param_1 * 0x3c) = param_2;
    puVar2 = (undefined4 *)(DAT_1015f2e0 + param_2 * 0x1c);
    puVar3 = (undefined4 *)(DAT_101604c0 + param_1 * 0x70);
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}
