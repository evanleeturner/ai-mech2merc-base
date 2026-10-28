/* SPDX-License-Identifier: MIT */
/* mercsw 1007c2eb */
/* mercsw 1007c2eb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100b38fc;
extern undefined DAT_100b6800[];
extern undefined DAT_100cf0d0[];
extern undefined DAT_100cf0d4[];
extern undefined DAT_100cf0d8[];
extern undefined DAT_100cf0e0[];
undefined __cdecl FUN_1007c4d2(int param_1);
undefined __cdecl FUN_1007c28e(int * param_1, undefined * param_2);

void __stdcall FUN_1007c2eb(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    FUN_1007c4d2(local_8);
  }
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    if (((*(int *)(DAT_100cf0d0 + local_8 * 0x14) == 1) &&
        (0xe24 < DAT_100b38fc - *(int *)(DAT_100cf0d8 + local_8 * 0x14))) && (DAT_100ab318 == 0)) {
      FUN_1007c28e(*(int **)(DAT_100cf0d4 + local_8 * 0x14),
                   *(undefined **)(DAT_100cf0e0 + local_8 * 0x14));
      puVar2 = (undefined4 *)(DAT_100b6800);
      puVar3 = (undefined4 *)(DAT_100cf0d0 + local_8 * 0x14);
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return;
}
