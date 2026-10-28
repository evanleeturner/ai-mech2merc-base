/* SPDX-License-Identifier: MIT */
/* mercsw 1008276d */
/* mercsw 1008276d: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b38d8;
extern undefined4 DAT_100b38dc;
extern undefined4 DAT_100b9f60;
extern undefined4 DAT_100b9f68;
undefined4 __cdecl FUN_10082adc(uint param_1, int param_2, uint param_3);
undefined4 __cdecl FUN_10082d2f(int param_1, int param_2, uint param_3);
undefined4 __cdecl FUN_1008304a(int param_1, int param_2, uint param_3);

void __cdecl FUN_1008276d(int param_1, int param_2, uint param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  uint local_14;
  
  bVar2 = false;
  if ((undefined4)(*(int *)(param_1 + 4)) == DAT_100adf38) {
    DAT_100b9f68 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xdc);
  local_20 = uVar1 & 0xf00;
  if ((param_2 == 0) || ((uVar1 & 0x1000) != 0)) {
    local_20 = 0x200;
    local_14 = 0;
    param_2 = 1;
  }
  else {
    local_14 = (uVar1 & 0xff) + param_2;
  }
  iVar3 = DAT_100b9f60 + DAT_100b38dc + DAT_100b38d8;
  local_1c = 0;
  while ((iVar4 = local_1c + 1, local_1c < iVar3 + 3 && (!bVar2))) {
    local_1c = iVar4;
    if (local_20 == 0x100) {
      iVar4 = FUN_10082adc(*(uint *)(param_1 + 4),local_14,param_3);
      if (iVar4 == -2) {
        local_14 = 0;
        local_20 = 0x200;
      }
      else if (iVar4 == -1) {
        local_14 = DAT_100b38dc - 1;
        local_20 = 0x400;
      }
      else if (iVar4 == 1) {
        bVar2 = true;
      }
      else {
        local_14 = local_14 + param_2;
      }
    }
    else if (local_20 == 0x200) {
      iVar4 = FUN_10082d2f(*(int *)(param_1 + 4),local_14,param_3);
      if (iVar4 == -2) {
        local_14 = 0;
        local_20 = 0x400;
      }
      else if (iVar4 == -1) {
        local_14 = DAT_100b9f60 - 1;
        local_20 = 0x100;
      }
      else if (iVar4 == 1) {
        bVar2 = true;
      }
      else {
        local_14 = local_14 + param_2;
      }
    }
    else if (local_20 == 0x400) {
      iVar4 = FUN_1008304a(*(int *)(param_1 + 4),local_14,param_3);
      if (iVar4 == -2) {
        local_14 = 0;
        local_20 = 0x100;
      }
      else if (iVar4 == -1) {
        local_14 = DAT_100b38d8 - 1;
        local_20 = 0x200;
      }
      else if (iVar4 == 1) {
        bVar2 = true;
      }
      else {
        local_14 = local_14 + param_2;
      }
    }
    else {
      local_14 = 0;
      local_20 = 0x200;
    }
  }
  if (bVar2) {
    *(uint *)(param_1 + 0xdc) = local_14 | local_20;
    if (local_20 == 0x100) {
      *(uint *)(param_1 + 0x104) = local_14 | 0x100;
    }
  }
  else {
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 0x1000;
  }
  if (((*(byte *)(param_1 + 0x105) & 1) == 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x3f0) != 0))
  {
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x43) = 1;
  }
  return;
}
