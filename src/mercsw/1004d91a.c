/* SPDX-License-Identifier: MIT */
/* mercsw 1004d91a */
/* mercsw 1004d91a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];

ushort __cdecl FUN_1004d91a(byte * param_1)

{
  byte bVar1;
  ushort uVar2;
  uint local_8;
  
  local_8 = (uint)*param_1;
  bVar1 = param_1[1];
  if (bVar1 == 1) {
    uVar2 = 0;
  }
  else if (bVar1 == 2) {
    uVar2 = *(ushort *)(DAT_100eef40[local_8] + 0x14) & 0xe;
  }
  else if (bVar1 == 4) {
    uVar2 = *(ushort *)(DAT_100ef030 + local_8 * 0x40) & 0xe;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
