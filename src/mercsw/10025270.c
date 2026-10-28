/* SPDX-License-Identifier: MIT */
/* mercsw 10025270 */
/* mercsw 10025270: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aca24;
undefined4 * __cdecl FUN_10025799(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, uint param_7);
undefined4 * __cdecl FUN_10025417(int * param_1, byte param_2, int param_3);

void __cdecl FUN_10025270(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((DAT_100aca24 == 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) {
    piVar2 = (int *)(FUN_10025799(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x24),
                          *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x28),
                          *(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x2c),0));
    *(int **)(param_1 + 0x4c) = piVar2;
    if (piVar2 != (int *)0x0) {
      local_14 = iVar1 + 0x18;
      for (local_18 = 1; local_18 < *(short *)(iVar1 + 4); local_18 = local_18 + 1) {
        if (piVar2[1] < *(int *)(local_14 + 0x50)) {
          piVar2[1] = *(int *)(local_14 + 0x50);
        }
        if (*(int *)(local_14 + 0x50) < *piVar2) {
          *piVar2 = *(int *)(local_14 + 0x50);
        }
        if (piVar2[5] < *(int *)(local_14 + 0x58)) {
          piVar2[5] = *(int *)(local_14 + 0x58);
        }
        if (*(int *)(local_14 + 0x58) < piVar2[4]) {
          piVar2[4] = *(int *)(local_14 + 0x58);
        }
        if (piVar2[3] < *(int *)(local_14 + 0x54)) {
          piVar2[3] = *(int *)(local_14 + 0x54);
        }
        if (*(int *)(local_14 + 0x54) < piVar2[2]) {
          piVar2[2] = *(int *)(local_14 + 0x54);
        }
        local_14 = local_14 + 0x44;
      }
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        puVar3 = FUN_10025417(piVar2,(byte)local_1c,iVar1);
        piVar2[local_1c + 7] = (int)puVar3;
      }
    }
  }
  return;
}
