/* SPDX-License-Identifier: MIT */
/* mercsw 1007c8c6 */
/* mercsw 1007c8c6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b6800[];
extern undefined DAT_100cf0d0[];
extern undefined DAT_100cf0d4[];
extern undefined DAT_100cf0e0[];
undefined __cdecl FUN_1007c97d(int param_1);

void __stdcall FUN_1007c8c6(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    if ((*(int *)(DAT_100cf0d4 + local_8 * 0x14) != 0) &&
       (*(int *)(DAT_100cf0e0 + local_8 * 0x14) != 0)) {
      ((void (*)(int))((**(code **)(DAT_100cf0e0 + local_8 * 0x14))))(*(int *)(DAT_100cf0d4 + local_8 * 0x14));
    }
    puVar2 = (undefined4 *)(DAT_100b6800);
    puVar3 = (undefined4 *)(DAT_100cf0d0 + local_8 * 0x14);
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  for (local_8 = 0; local_8 < 0x80; local_8 = local_8 + 1) {
    FUN_1007c97d(local_8);
  }
  return;
}
