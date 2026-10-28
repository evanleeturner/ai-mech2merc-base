/* SPDX-License-Identifier: MIT */
/* mercsw 100134c7 */
/* mercsw 100134c7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100f2fb0[];
undefined __cdecl FUN_100635ce(int * param_1);

void __cdecl FUN_100134c7(int param_1, int param_2)

{
  int *piVar1;
  ushort uVar2;
  int local_18;
  
  if (*(byte *)(param_1 + 2) != DAT_100adf38) {
    piVar1 = *(int **)(DAT_100eef40[param_2] + 0x20);
    uVar2 = 1;
    for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
      if ((uVar2 & *(ushort *)(param_1 + 3)) != 0) {
        *(undefined4 *)(DAT_100f2fb0 + local_18 * 4) = 1;
      }
      uVar2 = (int)((unsigned int)(uVar2) << (1));
    }
    FUN_100635ce(piVar1);
  }
  return;
}
