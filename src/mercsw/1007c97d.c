/* SPDX-License-Identifier: MIT */
/* mercsw 1007c97d */
/* mercsw 1007c97d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100cded0[];
extern undefined DAT_100cded4[];
extern undefined DAT_100cded8[];
extern undefined DAT_100cdedc[];
extern undefined DAT_100cdee0[];
extern undefined DAT_100cdee4[];
extern undefined DAT_100cdee8[];
extern undefined DAT_100cdeec[];
extern undefined DAT_100cdef0[];

void __cdecl FUN_1007c97d(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x24;
  *(undefined4 *)(DAT_100cded0 + iVar1) = 0;
  *(undefined4 *)(DAT_100cded4 + iVar1) = 0;
  *(undefined4 *)(DAT_100cdee0 + iVar1) = 0;
  *(undefined4 *)(DAT_100cdedc + iVar1) = *(undefined4 *)(DAT_100cdee0 + iVar1);
  *(undefined4 *)(DAT_100cded8 + iVar1) = *(undefined4 *)(DAT_100cdedc + iVar1);
  *(undefined4 *)(DAT_100cdeec + iVar1) = 0;
  *(undefined4 *)(DAT_100cdee8 + iVar1) = *(undefined4 *)(DAT_100cdeec + iVar1);
  *(undefined4 *)(DAT_100cdee4 + iVar1) = *(undefined4 *)(DAT_100cdee8 + iVar1);
  *(undefined4 *)(DAT_100cdef0 + iVar1) = 0;
  return;
}
