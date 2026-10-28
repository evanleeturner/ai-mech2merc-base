/* SPDX-License-Identifier: MIT */
/* mercsw 10060197 */
/* mercsw 10060197: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aa540;
extern undefined4 DAT_100aa544;
extern undefined4 DAT_100aa548;
undefined4 __cdecl FUN_100150df(int param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_1001b82d(int param_1, int param_2, int param_3, uint param_4, int param_5, int param_6);

undefined4 __cdecl FUN_10060197(int param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x20) + 0x18;
  while( true ) {
    if (bVar1) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 8) + *(int *)(param_1 + 0x20) + local_8 * 0x24;
    if ((*(int *)(iVar3 + 0x18) < 0) &&
       (iVar4 = FUN_100150df(iVar3,iVar2,param_2,param_4), iVar4 != 0)) break;
    local_8 = local_8 + 1;
    if (*(short *)(*(int *)(param_1 + 0x20) + 6) == local_8) {
      bVar1 = true;
    }
  }
  iVar2 = (uint)*(byte *)(*(int *)(iVar3 + 4) + iVar3) * 0x44 + iVar2;
  iVar4 = *(int *)(iVar2 + 0x10);
  iVar2 = FUN_1001b82d(*(int *)(iVar3 + 0x14),*(int *)(iVar3 + 0x18),*(int *)(iVar3 + 0x1c),0,
                       param_2 - *(int *)(iVar2 + 0xc),param_4 - *(int *)(iVar2 + 0x14));
  DAT_100aa540 = *(int *)(iVar3 + 0x14) >> 0xd;
  DAT_100aa544 = *(int *)(iVar3 + 0x18) >> 0xd;
  DAT_100aa548 = *(int *)(iVar3 + 0x1c) >> 0xd;
  if (iVar4 - iVar2 < param_3) {
    return 1;
  }
  return 0;
}
