/* SPDX-License-Identifier: MIT */
/* mercsw 100709b2 */
/* mercsw 100709b2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab094;
extern undefined DAT_100eecb0[];
int * __cdecl FUN_100707b3(int param_1, int * param_2);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);

void __cdecl FUN_100709b2(int param_1, int param_2, uint * param_3)

{
  int local_18 [3];
  uint local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4);
  if (((*(int *)(param_1 + 0x84) != *(int *)(param_1 + 0x88)) &&
      (*(int *)(DAT_100eecb0 + local_8 * 4) != *(int *)(param_1 + 0x84))) ||
     ((*(int *)(param_1 + 0x84) == *(int *)(param_1 + 0x88) &&
      (*(int *)(DAT_100eecb0 + local_8 * 4) != -2)))) {
    if ((*(int *)(param_1 + 0x84) == 0) && (*(int *)(DAT_100eecb0 + local_8 * 4) == 2)) {
      local_c = *(uint *)(param_2 + 4);
    }
    else {
      local_c = *(uint *)((*(int *)(param_1 + 0x84) + 1) * 0x10 + 4 + *(int *)(param_1 + 0x88) * 4 +
                         param_2);
    }
    if (local_c != 0xffffffff) {
      if (param_3 == (uint *)0x0) {
        param_3 = (uint *)FUN_100707b3(param_1,local_18);
      }
      FUN_100037f0(*param_3,param_3[1],param_3[2],local_c,DAT_100ab094);
    }
    if (*(int *)(param_1 + 0x84) == *(int *)(param_1 + 0x88)) {
      *(undefined4 *)(DAT_100eecb0 + local_8 * 4) = 0xfffffffe;
    }
    else {
      *(undefined4 *)(DAT_100eecb0 + local_8 * 4) = *(undefined4 *)(param_1 + 0x84);
    }
  }
  return;
}
