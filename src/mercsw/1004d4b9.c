/* SPDX-License-Identifier: MIT */
/* mercsw 1004d4b9 */
/* mercsw 1004d4b9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_101600e4[];
extern undefined DAT_101600e8[];
extern undefined DAT_101600fc[];
extern undefined DAT_1016010c[];
undefined4 __cdecl FUN_1004d47f(int param_1);
int __cdecl FUN_10027fed(int param_1);

undefined4 __cdecl FUN_1004d4b9(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short local_18;
  short local_14;
  short local_10;
  
  iVar2 = param_1 * 0x3c;
  uVar3 = FUN_1004d47f(param_1);
  local_18 = (short)uVar3;
  if (local_18 == -1) {
    iVar4 = FUN_10027fed(param_1);
    local_18 = (short)iVar4;
    if (local_18 == -1) {
      return 0;
    }
  }
  local_14 = 1;
  for (local_10 = 0; (int)local_10 < *(int *)(DAT_101600e4 + iVar2); local_10 = local_10 + 1) {
    piVar1 = (int *)DAT_100eef40[*(int *)(DAT_101600fc + local_10 * 4 + iVar2)];
    if ((*piVar1 == 1) && ((*(ushort *)(piVar1 + 5) & 6) == 0)) {
      if (piVar1[1] == (int)local_18) {
        piVar1[3] = 0;
      }
      else {
        piVar1[3] = (int)local_14;
        local_14 = local_14 + 1;
      }
    }
  }
  if ((*(int *)(DAT_101600e8 + iVar2) != 0) &&
     ((*(ushort *)(DAT_100eef40[*(int *)(DAT_1016010c + iVar2)] + 0x14) & 6) == 0)) {
    *(undefined4 *)(DAT_100eef40[*(int *)(DAT_1016010c + iVar2)] + 0xc) = 4;
  }
  return 1;
}
