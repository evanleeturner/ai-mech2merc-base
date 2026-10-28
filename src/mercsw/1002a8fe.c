/* SPDX-License-Identifier: MIT */
/* mercsw 1002a8fe */
/* mercsw 1002a8fe: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10215678[];
extern undefined DAT_10215694[];
undefined __cdecl FUN_1002a5d4(int param_1);
undefined4 __cdecl FUN_1004d34a(uint param_1, int * param_2, int * param_3, undefined4 * param_4);
int __cdecl FUN_10082490(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);

void __cdecl FUN_1002a8fe(int param_1)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_1002a5d4(param_1);
  iVar1 = FUN_1004d34a(*(uint *)(param_1 + 4),&local_8,&local_10,&local_c);
  if (iVar1 != 0) {
    iVar1 = FUN_10082490(*(uint *)(param_1 + 4),local_8,local_c,local_10);
    if (iVar1 != -1) {
      *(ushort *)(DAT_10215694 + iVar1 * 0x54) = *(ushort *)(DAT_10215694 + iVar1 * 0x54) | 1;
      *(uint *)(DAT_10215678 + iVar1 * 0x54) = *(uint *)(param_1 + 4) | 0x200;
      *(ushort *)(param_1 + 0x178) = (ushort)iVar1 | 0x100;
    }
  }
  return;
}
