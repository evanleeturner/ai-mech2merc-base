/* SPDX-License-Identifier: MIT */
/* mercsw 1004c350 */
/* mercsw 1004c350: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_10063fbd(int param_1, int * param_2);
undefined __cdecl FUN_1002650e(int * param_1, int param_2);
undefined4 __cdecl FUN_10014768(int * param_1, int * param_2, uint param_3);

bool __cdecl FUN_1004c350(int param_1, int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int local_4c [14];
  int local_14;
  int local_10;
  
  local_10 = (((*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x60)) - *(int *)(param_1 + 0xd4)) +
             0x1680000) % 0x1680000;
  if (((param_2 == 0) || (0x10dffff < local_10)) || (local_10 < 0x5a0001)) {
    FUN_10063fbd(param_1,local_4c);
    FUN_1002650e(local_4c,*(int *)(param_1 + 0xc0));
    local_14 = 0;
    iVar2 = FUN_10014768(local_4c,&local_14,*(uint *)(param_1 + 4));
    if ((iVar2 == 0) || (local_14 == 0)) {
      bVar3 = true;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xdc);
      if (((*(ushort *)(local_14 + 2) & 0x100) == 0) || ((uVar1 & 0x200) == 0)) {
        if (((*(ushort *)(local_14 + 2) & 0x200) == 0) || ((uVar1 & 0x400) == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = (uint)*(ushort *)(local_14 + 0x14) == (uVar1 & 0xff);
        }
      }
      else {
        bVar3 = (uint)*(ushort *)(local_14 + 0x14) == (uVar1 & 0xff);
      }
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}
