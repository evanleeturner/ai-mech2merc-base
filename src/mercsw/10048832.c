/* SPDX-License-Identifier: MIT */
/* mercsw 10048832 */
/* mercsw 10048832: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10160bd8;
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b4;
extern undefined4 PTR_DAT_100af0b8;
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined __stdcall FUN_10088e93(void);

void __cdecl FUN_10048832(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      FUN_1008664f(*(int *)(iVar1 + 0x10) + DAT_101686f0,(int *)PTR_DAT_100af0b4);
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      FUN_1008664f(*(int *)(iVar1 + 0x1c) + DAT_101686f0,(int *)PTR_DAT_100af0b4);
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    if (*(int *)(iVar1 + 0x30) != 0) {
      FUN_1008664f(*(int *)(iVar1 + 0x2c) + DAT_101686f0,(int *)PTR_DAT_100af0b8);
      *(undefined4 *)(iVar1 + 0x30) = 0;
    }
    if ((*(byte *)(iVar1 + 4) & 1) != 0) {
      FUN_10088e93();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  DAT_10160bd8 = DAT_10160bd8 + -1;
  return;
}
