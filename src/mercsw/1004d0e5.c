/* SPDX-License-Identifier: MIT */
/* mercsw 1004d0e5 */
/* mercsw 1004d0e5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];
extern undefined DAT_101600e0[];
extern undefined DAT_101604d0[];
extern undefined DAT_101604f0[];

undefined4 __cdecl FUN_1004d0e5(int param_1, int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2 == -1) {
    *(undefined4 *)(DAT_101600e0 + param_1 * 0x3c) = 0xffffffff;
  }
  else if ((param_2 < DAT_100b38d8) && (param_1 < 0x10)) {
    *(int *)(DAT_101600e0 + param_1 * 0x3c) = param_2;
    iVar2 = *(int *)(DAT_101604d0 + *(int *)(DAT_100eef40[param_2] + 0xc) * 4 + param_1 * 0x70);
    iVar3 = *(int *)(DAT_101604f0 + *(int *)(DAT_100eef40[param_2] + 0xc) * 4 + param_1 * 0x70);
    for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
      *(int *)(DAT_101604d0 + (uint)uVar1 * 4 + param_1 * 0x70) =
           *(int *)(DAT_101604d0 + (uint)uVar1 * 4 + param_1 * 0x70) - iVar2;
      *(int *)(DAT_101604f0 + (uint)uVar1 * 4 + param_1 * 0x70) =
           *(int *)(DAT_101604f0 + (uint)uVar1 * 4 + param_1 * 0x70) - iVar3;
    }
    local_8 = 1;
  }
  return local_8;
}
