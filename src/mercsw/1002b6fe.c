/* SPDX-License-Identifier: MIT */
/* mercsw 1002b6fe */
/* mercsw 1002b6fe: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_101600e4[];
extern undefined DAT_101600e8[];
extern undefined DAT_101600fc[];
extern undefined DAT_1016010c[];

int __cdecl FUN_1002b6fe(int param_1, int param_2, int param_3)

{
  int iVar1;
  ushort uVar2;
  int local_14;
  int local_10;
  
  uVar2 = 6;
  if (param_3 == 0) {
    uVar2 = 0x16;
  }
  iVar1 = param_1 * 0x3c;
  local_14 = 0;
  for (local_10 = 0; local_10 < *(int *)(DAT_101600e4 + iVar1); local_10 = local_10 + 1) {
    if ((uVar2 & *(ushort *)(DAT_100eef40[*(int *)(DAT_101600fc + local_10 * 4 + iVar1)] + 0x14)
        ) == 0) {
      *(undefined4 *)(param_2 + local_14 * 4) =
           DAT_100eef40[*(int *)(DAT_101600fc + local_10 * 4 + iVar1)];
      local_14 = local_14 + 1;
    }
  }
  if (*(int *)(DAT_101600e8 + iVar1) != 0) {
    if ((uVar2 & *(ushort *)(DAT_100eef40[*(int *)(DAT_1016010c + iVar1)] + 0x14)) == 0) {
      *(undefined4 *)(param_2 + 0x10) = DAT_100eef40[*(int *)(DAT_1016010c + iVar1)];
    }
  }
  return local_14;
}
