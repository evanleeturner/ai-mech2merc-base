/* SPDX-License-Identifier: MIT */
/* mercsw 1003a0e9 */
/* mercsw 1003a0e9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10160fe8[];
extern undefined DAT_10160fec[];
extern undefined DAT_10160ff0[];
extern undefined DAT_10160ff4[];
extern undefined DAT_10160ff8[];
extern undefined DAT_10161078[];
extern undefined DAT_1016107c[];
extern undefined DAT_10161088[];
extern undefined DAT_1016108c[];
extern undefined DAT_10161090[];
extern undefined DAT_10161094[];
extern undefined DAT_10161098[];
extern undefined DAT_1016109c[];
extern undefined DAT_101610a0[];
extern undefined DAT_101610a4[];
extern undefined DAT_101610a8[];
extern undefined DAT_101610ac[];
extern undefined DAT_101610b0[];
extern undefined DAT_101610b4[];
extern undefined DAT_101610b8[];
extern undefined DAT_101610bc[];
extern undefined DAT_101610c0[];
extern undefined DAT_101610c4[];
extern undefined DAT_101610c8[];
extern undefined DAT_101610cc[];
extern undefined DAT_101610d0[];

void __cdecl FUN_1003a0e9(int param_1, int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((-1 < param_2) && (param_2 < 9)) {
    iVar2 = param_2 * 0x80c;
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(DAT_10160fe8 + iVar2) = 0;
    }
    else {
      *(undefined4 *)(DAT_10160fe8 + iVar2) = *(undefined4 *)(param_1 + 8);
    }
    if ((uVar1 & 2) != 0) {
      *(undefined4 *)(DAT_10160fec + iVar2) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(DAT_10160ff0 + iVar2) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(DAT_10160ff4 + iVar2) = *(undefined4 *)(param_1 + 0x14);
    }
    if ((uVar1 & 4) != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x18);
      puVar5 = (undefined4 *)(DAT_10160ff8 + iVar2);
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    if ((uVar1 & 8) == 0) {
      *(undefined4 *)(DAT_10161078 + iVar2) = 1;
    }
    else {
      *(undefined4 *)(DAT_10161078 + iVar2) = *(undefined4 *)(param_1 + 0x98);
    }
    if ((uVar1 & 0x10) == 0) {
      *(undefined4 *)(DAT_1016107c + iVar2) = 1;
    }
    else {
      *(undefined4 *)(DAT_1016107c + iVar2) = *(undefined4 *)(param_1 + 0x9c);
    }
    if ((uVar1 & 0x20) == 0) {
      *(undefined4 *)(DAT_10161088 + iVar2) = 0;
    }
    else {
      *(undefined4 *)(DAT_10161088 + iVar2) = *(undefined4 *)(param_1 + 0xa8);
    }
    if ((uVar1 & 0x40) != 0) {
      *(undefined4 *)(DAT_1016108c + iVar2) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(DAT_10161090 + iVar2) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(DAT_10161094 + iVar2) = *(undefined4 *)(param_1 + 0xb4);
    }
    if ((uVar1 & 0x80) != 0) {
      *(undefined4 *)(DAT_10161098 + iVar2) = *(undefined4 *)(param_1 + 0xb8);
    }
    if ((uVar1 & 0x100) != 0) {
      *(undefined4 *)(DAT_1016109c + iVar2) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(DAT_101610a0 + iVar2) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(DAT_101610a4 + iVar2) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(DAT_101610a8 + iVar2) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(DAT_101610ac + iVar2) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(DAT_101610b0 + iVar2) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(DAT_101610b4 + iVar2) = *(undefined4 *)(param_1 + 0xd4);
    }
    if ((uVar1 & 0x200) != 0) {
      *(undefined4 *)(DAT_101610b8 + iVar2) = *(undefined4 *)(param_1 + 0xd8);
      *(undefined4 *)(DAT_101610bc + iVar2) = *(undefined4 *)(param_1 + 0xdc);
      *(undefined4 *)(DAT_101610c0 + iVar2) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(DAT_101610c4 + iVar2) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(DAT_101610c8 + iVar2) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(DAT_101610cc + iVar2) = *(undefined4 *)(param_1 + 0xec);
    }
    if ((uVar1 & 0x400) == 0) {
      *(undefined4 *)(DAT_101610d0 + iVar2) = 0;
    }
    else {
      *(undefined4 *)(DAT_101610d0 + iVar2) = *(undefined4 *)(param_1 + 0xf0);
    }
  }
  return;
}
