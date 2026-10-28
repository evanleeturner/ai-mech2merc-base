/* SPDX-License-Identifier: MIT */
/* mercsw 1007d0d3 */
/* mercsw 1007d0d3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100c96b4;
extern undefined DAT_100c9ed8[];
extern undefined DAT_100c9ee0[];
extern undefined DAT_100c9ee4[];
extern undefined DAT_100c9ee8[];
extern undefined DAT_100c9eec[];
extern undefined DAT_100c9ef0[];
extern undefined DAT_100c9ef4[];
extern undefined DAT_100c9ef8[];
extern undefined DAT_100c9efc[];
extern undefined DAT_100c9f00[];
extern undefined DAT_100c9f04[];
extern undefined DAT_100c9f08[];

void __cdecl FUN_1007d0d3(int param_1, byte param_2, undefined4 * param_3)

{
  int iVar1;
  
  if (((param_3 != (undefined4 *)0x0) && (-1 < param_1)) && (param_1 < DAT_100c96b4)) {
    iVar1 = param_1 * 0x40;
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(DAT_100c9ee4 + iVar1) = param_3[1];
      *(undefined4 *)(DAT_100c9ee8 + iVar1) = param_3[2];
      *(undefined4 *)(DAT_100c9eec + iVar1) = param_3[3];
    }
    if ((param_2 & 2) != 0) {
      *(undefined4 *)(DAT_100c9ee0 + iVar1) = *param_3;
    }
    if ((param_2 & 4) != 0) {
      *(undefined4 *)(DAT_100c9f00 + iVar1) = param_3[8];
    }
    if ((param_2 & 8) == 0) {
      *(undefined4 *)(DAT_100c9f08 + iVar1) = 0xffffffff;
    }
    else {
      *(undefined4 *)(DAT_100c9f08 + iVar1) = param_3[10];
    }
    if ((param_2 & 0x10) != 0) {
      *(undefined4 *)(DAT_100c9f04 + iVar1) = param_3[9];
    }
    if ((param_2 & 0x20) != 0) {
      *(undefined4 *)(DAT_100c9ef0 + iVar1) = param_3[4];
      *(undefined4 *)(DAT_100c9ef4 + iVar1) = param_3[5];
      *(undefined4 *)(DAT_100c9ef8 + iVar1) = param_3[6];
    }
    if ((param_2 & 0x40) != 0) {
      *(undefined4 *)(DAT_100c9efc + iVar1) = param_3[7];
    }
    if ((param_2 & 0x80) == 0) {
      *(undefined4 *)(DAT_100c9ed8 + iVar1) = 0;
    }
    else {
      *(undefined4 *)(DAT_100c9ed8 + iVar1) = 1;
    }
  }
  return;
}
