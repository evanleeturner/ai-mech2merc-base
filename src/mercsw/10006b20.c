/* SPDX-License-Identifier: MIT */
/* mercsw 10006b20 */
/* mercsw 10006b20: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef long long longlong;
typedef unsigned long long ulonglong;
extern undefined DAT_10167250[];
extern undefined DAT_10167254[];

int __cdecl FUN_10006b20(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)((longlong)param_1 * 0x5b05b05b);
  uVar3 = (uVar2 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)param_1 * 0x5b05b05b) >> 0x20)) << (3))) +
          (uint)((uVar2 >> 0x1c & 1) != 0);
  uVar5 = uVar3 >> 0xe & 0x3fc;
  uVar2 = uVar3;
  if ((uVar3 & 0x1000000) != 0) {
    uVar2 = ~uVar3;
    uVar5 = uVar5 ^ 0x3fc;
  }
  lVar1 = (ulonglong)(uint)(*(int *)(DAT_10167254 + uVar5) - *(int *)(DAT_10167250 + uVar5)) *
          (ulonglong)(uVar2 & 0xffff);
  uVar2 = (uint)lVar1;
  iVar4 = *(int *)(DAT_10167250 + uVar5) +
          (uVar2 >> 0x10 | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (0x10))) +
          (uint)((uVar2 >> 0xf & 1) != 0);
  if ((uVar3 & 0x2000000) != 0) {
    iVar4 = -iVar4;
  }
  return iVar4;
}
