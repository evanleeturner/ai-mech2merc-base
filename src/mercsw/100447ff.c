/* SPDX-License-Identifier: MIT */
/* mercsw 100447ff */
/* mercsw 100447ff: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_100261f0(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl EnsureSegmentDirection(int param_1);
undefined4 __cdecl FUN_10014768(int * param_1, int * param_2, uint param_3);

bool __cdecl FUN_100447ff(int param_1, int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_48 [14];
  int local_10 [3];
  
  local_10[0] = 0;
  FUN_100261f0(local_48,*(int *)(param_1 + 0x50),param_2,*(int *)(param_1 + 0x58),
               *(int *)(param_1 + 200),*(int *)(param_1 + 0xcc),*(int *)(param_1 + 0xd0));
  EnsureSegmentDirection((int)local_48);
  iVar2 = FUN_10014768(local_48,local_10,*(uint *)(param_1 + 4));
  if ((iVar2 == 0) || (local_10[0] == 0)) {
    bVar3 = true;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xdc);
    if (((*(ushort *)(local_10[0] + 2) & 0x100) == 0) || ((uVar1 & 0x200) == 0)) {
      if (((*(ushort *)(local_10[0] + 2) & 0x200) == 0) || ((uVar1 & 0x400) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = (uint)*(ushort *)(local_10[0] + 0x14) == (uVar1 & 0xff);
      }
    }
    else {
      bVar3 = (uint)*(ushort *)(local_10[0] + 0x14) == (uVar1 & 0xff);
    }
  }
  return bVar3;
}
