/* SPDX-License-Identifier: MIT */
/* mercsw 100838c2 */
/* mercsw 100838c2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b3788;
extern undefined4 DAT_100b9f68;
extern undefined4 DAT_100eef40[];
undefined4 __cdecl FUN_10082d2f(int param_1, int param_2, uint param_3);
undefined4 __cdecl FUN_1008304a(int param_1, int param_2, uint param_3);
undefined4 __cdecl FUN_100832d4(int param_1);

void __stdcall FUN_100838c2(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  
  iVar5 = DAT_100b3788;
  local_10 = 0xffffffff;
  iVar1 = DAT_100eef40[DAT_100adf38];
  uVar2 = *(undefined4 *)(iVar1 + 0xdc);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x20) + 0x3f0);
  if (DAT_100b3788 != 0) {
    if ((*(ushort *)(DAT_100b3788 + 2) & 0x100) == 0) {
      if (((*(ushort *)(DAT_100b3788 + 2) & 0x200) != 0) &&
         (iVar4 = FUN_1008304a(DAT_100adf38,(uint)*(ushort *)(DAT_100b3788 + 0x14),0), -1 < iVar4))
      {
        local_10 = *(ushort *)(iVar5 + 0x14) | 0x400;
      }
    }
    else {
      iVar4 = FUN_10082d2f(DAT_100adf38,(uint)*(ushort *)(DAT_100b3788 + 0x14),0);
      if (-1 < iVar4) {
        local_10 = *(ushort *)(iVar5 + 0x14) | 0x200;
      }
    }
    if ((local_10 != 0xffffffff) && (*(uint *)(iVar1 + 0xdc) != local_10)) {
      *(uint *)(iVar1 + 0xdc) = local_10;
      if (((*(byte *)(iVar1 + 0x105) & 1) == 0) && (*(int *)(*(int *)(iVar1 + 0x20) + 0x3f0) != 0))
      {
        *(undefined1 *)(*(int *)(iVar1 + 0x4c) + 0x43) = 1;
      }
      iVar5 = FUN_100832d4(iVar1);
      if ((iVar5 == 0) && (*(undefined4 *)(iVar1 + 0xdc) = uVar2, iVar3 == 1)) {
        *(undefined1 *)(*(int *)(iVar1 + 0x4c) + 0x43) = 0;
        *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x3f0) = 1;
      }
    }
  }
  DAT_100b9f68 = 1;
  return;
}
