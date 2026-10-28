/* SPDX-License-Identifier: MIT */
/* mercsw 10083c70 */
/* mercsw 10083c70: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_10083c3e(int param_1);
undefined4 __cdecl FUN_100832d4(int param_1);

void __stdcall FUN_10083c70(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_20;
  uint local_14;
  uint local_c;
  
  local_c = 0;
  local_14 = 0xffffffff;
  local_20 = 0x7fffffff;
  iVar1 = DAT_100eef40[DAT_100adf38];
  uVar2 = *(undefined4 *)(iVar1 + 0xdc);
  bVar5 = *(int *)(*(int *)(iVar1 + 0x20) + 0x3f0) == 1;
  FUN_10083c3e(0);
  while ((local_14 != local_c && (uVar3 = *(uint *)(iVar1 + 0xdc), (uVar3 & 0x1000) == 0))) {
    local_c = uVar3;
    if (*(int *)(iVar1 + 0xc4) < local_20) {
      local_c = 0;
      local_20 = *(int *)(iVar1 + 0xc4);
      local_14 = uVar3;
    }
    FUN_10083c3e(1);
  }
  if ((local_14 == 0xffffffff) || (0x2ab98 < local_20)) {
    *(undefined4 *)(iVar1 + 0xdc) = uVar2;
    if (bVar5) {
      *(undefined1 *)(*(int *)(iVar1 + 0x4c) + 0x43) = 0;
    }
  }
  else {
    *(uint *)(iVar1 + 0xdc) = local_14;
    iVar4 = FUN_100832d4(iVar1);
    if ((iVar4 == 0) && (*(undefined4 *)(iVar1 + 0xdc) = uVar2, bVar5)) {
      *(undefined1 *)(*(int *)(iVar1 + 0x4c) + 0x43) = 0;
    }
  }
  return;
}
