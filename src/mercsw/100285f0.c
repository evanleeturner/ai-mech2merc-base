/* SPDX-License-Identifier: MIT */
/* mercsw 100285f0 */
/* mercsw 100285f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];

void __cdecl FUN_100285f0(int param_1, uint param_2, ushort param_3)

{
  int iVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < DAT_100b38d8; local_8 = local_8 + 1) {
    iVar1 = DAT_100eef40[local_8];
    if ((((*(int *)(iVar1 + 8) == param_1) && ((*(ushort *)(iVar1 + 0x17a) & 0xf000) == 0)) &&
        ((*(ushort *)(iVar1 + 0x17a) & 0x200) != 0)) &&
       ((*(ushort *)(iVar1 + 0x17a) & 0xff) == param_2)) {
      *(ushort *)(iVar1 + 0x17a) = param_3 | 0x200;
    }
  }
  return;
}
