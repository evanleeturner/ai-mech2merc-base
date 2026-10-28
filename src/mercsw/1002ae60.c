/* SPDX-License-Identifier: MIT */
/* mercsw 1002ae60 */
/* mercsw 1002ae60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100adf38;
extern undefined4 DAT_100eef40[];
int __cdecl FUN_1002ab38(int param_1);
undefined4 __cdecl FUN_1002abf3(int param_1, ushort param_2, short param_3, ushort param_4);
undefined __cdecl FUN_10008156(int param_1, int param_2);

undefined4 __cdecl FUN_1002ae60(int param_1, short param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort local_14;
  short local_c;
  
  local_c = -1;
  iVar1 = DAT_100eef40[DAT_100adf38];
  uVar2 = FUN_1002ab38(param_1);
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    local_14 = 0x1000;
    switch(param_2) {
    case 2:
      if (*(int *)(iVar1 + 0xdc) != 0) {
        local_14 = (ushort)*(undefined4 *)(iVar1 + 0xdc);
      }
      if (((local_14 & 0x200) != 0) && (((int)(short)local_14 & 0xffU) == uVar2)) {
        local_14 = 0x1000;
      }
      if ((local_14 & 0x100) != 0) {
        local_14 = 0xffff;
      }
      local_c = 1;
      break;
    case 3:
      local_14 = 0;
      break;
    case 4:
    case 6:
    case 9:
    case 10:
      break;
    case 5:
      local_14 = 0x2201;
      local_c = 2;
      break;
    case 7:
      if (*(int *)(iVar1 + 0xdc) != 0) {
        local_14 = (ushort)*(undefined4 *)(iVar1 + 0xdc);
      }
      local_c = 3;
      if (((local_14 & 0x200) != 0) && (((int)(short)local_14 & 0xffU) == uVar2)) {
        local_14 = 0x1000;
      }
      break;
    case 8:
      local_14 = 0x2100;
      local_c = 4;
      break;
    case 0xb:
      local_14 = 0;
      local_c = 9;
    }
    if ((local_14 & 0x1000) == 0) {
      if (uVar2 == DAT_100adf38) {
        FUN_1002abf3(iVar1,0x4200,param_2,local_14);
      }
      else {
        FUN_1002abf3(iVar1,(ushort)uVar2 | 0x200,param_2,local_14);
      }
      if (local_c != -1) {
        FUN_10008156((int)local_c,param_1);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
