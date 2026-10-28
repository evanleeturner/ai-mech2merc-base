/* SPDX-License-Identifier: MIT */
/* mercsw 10042f22 */
/* mercsw 10042f22: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10215678[];
extern undefined DAT_10215694[];
undefined __cdecl FUN_10042fcf(uint param_1, short param_2, int * param_3, int * param_4, undefined4 * param_5, short param_6);
int __cdecl FUN_10082490(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002a89b(int param_1, short param_2);

void __cdecl FUN_10042f22(int param_1, uint param_2, short param_3, short param_4)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_10042fcf(param_2,param_3,&local_8,&local_10,&local_c,param_4);
  iVar1 = FUN_10082490(*(uint *)(param_1 + 4),local_8,local_c,local_10);
  if (iVar1 != -1) {
    *(ushort *)(DAT_10215694 + iVar1 * 0x54) = *(ushort *)(DAT_10215694 + iVar1 * 0x54) | 1;
    *(uint *)(DAT_10215678 + iVar1 * 0x54) = *(uint *)(param_1 + 4) | 0x200;
    FUN_1002a89b(param_1,0x100);
  }
  return;
}
