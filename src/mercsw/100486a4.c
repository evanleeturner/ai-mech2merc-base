/* SPDX-License-Identifier: MIT */
/* mercsw 100486a4 */
/* mercsw 100486a4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b4;
extern undefined4 PTR_DAT_100af0b8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);

void __cdecl FUN_100486a4(int param_1)

{
  ushort *puVar1;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    puVar1 = FUN_1008668b(DAT_100af17c,*(int *)(param_1 + 0x10) + DAT_101686f0,
                          (int *)PTR_DAT_100af0b4);
    *(ushort **)(param_1 + 0x14) = puVar1;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    puVar1 = FUN_1008668b(DAT_100af17c,*(int *)(param_1 + 0x1c) + DAT_101686f0,
                          (int *)PTR_DAT_100af0b4);
    *(ushort **)(param_1 + 0x20) = puVar1;
  }
  puVar1 = FUN_1008668b(DAT_100af17c,*(int *)(param_1 + 0x2c) + DAT_101686f0,(int *)PTR_DAT_100af0b8
                       );
  *(ushort **)(param_1 + 0x30) = puVar1;
  return;
}
