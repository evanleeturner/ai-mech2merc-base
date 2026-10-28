/* SPDX-License-Identifier: MIT */
/* mercsw 1000d59a */
/* mercsw 1000d59a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ef030[];
extern undefined DAT_101f64ac[];
extern undefined DAT_101f64b8[];
extern undefined DAT_101f64c0[];
int __cdecl FUN_1000d403(int param_1);
undefined __cdecl FUN_1007c203(int * param_1, undefined * param_2, int param_3);
undefined4 __cdecl FUN_1000e3ec(uint param_1);
undefined __stdcall FUN_1000d659(void);
undefined __cdecl FUN_1000e4a8(int * param_1);

void __cdecl FUN_1000d59a(int param_1)

{
  uint local_c;
  
  local_c = 0xffffffff;
  *(uint *)(DAT_101f64ac + *(int *)(param_1 + 4) * 0x7c) =
       *(uint *)(DAT_101f64ac + *(int *)(param_1 + 4) * 0x7c) | 0x200;
  if (*(int *)(param_1 + 4) != -1) {
    local_c = FUN_1000d403(*(int *)(param_1 + 4));
  }
  if ((local_c != 0xffffffff) &&
     (((int)*(short *)(DAT_100ef030 + *(int *)(DAT_101f64b8 + local_c * 0x7c) * 0x40) & 0x8000U)
      != 0)) {
    FUN_1007c203(*(int **)(DAT_101f64c0 + local_c * 0x7c),(undefined *)(FUN_1000e4a8),0);
    FUN_1000e3ec(local_c);
  }
  FUN_1000d659();
  return;
}
