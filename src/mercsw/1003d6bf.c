/* SPDX-License-Identifier: MIT */
/* mercsw 1003d6bf */
/* mercsw 1003d6bf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc4;
extern undefined DAT_100c6d5c[];

undefined4 __cdecl FUN_1003d6bf(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (param_1 + 150000) / 25000;
  iVar2 = (param_2 + 150000) / 25000;
  uVar3 = DAT_100aefc4;
  if ((((-1 < iVar1) && (iVar1 < 0xc)) && (-1 < iVar2)) && (iVar2 < 0xc)) {
    uVar3 = *(undefined4 *)(DAT_100c6d5c + iVar2 * 0x18 + iVar1 * 0x120);
  }
  return uVar3;
}
