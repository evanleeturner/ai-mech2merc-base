/* SPDX-License-Identifier: MIT */
/* mercsw 1005f8da */
/* mercsw 1005f8da: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b351c;
extern undefined DAT_100f3170[];
extern undefined DAT_100f3172[];
extern undefined DAT_100f3174[];
extern undefined DAT_10113170[];
extern undefined DAT_10113172[];
extern undefined DAT_10113174[];
extern undefined DAT_10113176[];
extern undefined DAT_10113178[];
extern undefined DAT_1011317a[];
extern undefined4 PTR_DAT_100af0ac;
extern undefined4 PTR_DAT_100af100;
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __stdcall FUN_1005f8da(void)

{
  int iVar1;
  int local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 0x200; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
      iVar1 = local_10 * 0x100 + local_14 * 8;
      if (*(int *)(DAT_100f3174 + iVar1) != 0) {
        FUN_1008664f((int)*(short *)(DAT_100f3170 + iVar1),(int *)PTR_DAT_100af0ac);
        *(undefined4 *)(DAT_100f3174 + iVar1) = 0;
      }
      *(short *)(DAT_100f3170 + iVar1) = 0;
      *(undefined2 *)(DAT_100f3172 + iVar1) = 0;
    }
  }
  FUN_1008664f(DAT_100b351c,(int *)PTR_DAT_100af100);
  for (local_10 = 0; local_10 < 0x200; local_10 = local_10 + 1) {
    iVar1 = local_10 * 0xe;
    *(undefined2 *)(DAT_10113170 + iVar1) = 0xffff;
    *(undefined2 *)(DAT_10113172 + iVar1) = 0;
    *(undefined2 *)(DAT_10113174 + iVar1) = 0;
    *(undefined2 *)(DAT_10113176 + iVar1) = 0;
    *(undefined2 *)(DAT_10113178 + iVar1) = 0xfffe;
    *(undefined4 *)(DAT_1011317a + iVar1) = 0xffffffff;
  }
  return;
}
