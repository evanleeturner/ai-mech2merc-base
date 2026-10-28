/* SPDX-License-Identifier: MIT */
/* mercsw 1000d36f */
/* mercsw 1000d36f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100a7584;
extern undefined DAT_101f64ac[];
extern undefined DAT_101f64b0[];
extern undefined DAT_101f64b4[];
extern undefined DAT_101f64b8[];
undefined __stdcall FUN_1000d659(void);

void __cdecl FUN_1000d36f(int param_1, int param_2, short param_3)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < DAT_100a7584)) {
    iVar1 = param_1 * 0x7c;
    *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) | 0x400;
    *(uint *)(DAT_101f64b0 + iVar1) = *(uint *)(DAT_101f64b0 + iVar1) | 0x200;
    *(int *)(DAT_101f64b4 + iVar1) = (int)(short)param_2;
    *(int *)(DAT_101f64b8 + iVar1) = (int)param_3;
    if (-1 < param_2) {
      *(uint *)(DAT_101f64ac + param_2 * 0x7c) = *(uint *)(DAT_101f64ac + param_2 * 0x7c) | 0x800;
      FUN_1000d659();
    }
  }
  return;
}
