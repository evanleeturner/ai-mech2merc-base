/* SPDX-License-Identifier: MIT */
/* mercsw 10082490 */
/* mercsw 10082490: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b9f60;
extern undefined4 DAT_100eef40[];
extern undefined DAT_10215670[];
extern undefined DAT_10215674[];
extern undefined DAT_10215678[];
extern undefined DAT_1021567c[];
extern undefined DAT_10215680[];
extern undefined DAT_10215688[];
extern undefined DAT_1021568c[];
extern undefined DAT_10215690[];
extern undefined DAT_10215694[];
extern undefined DAT_10215698[];
extern undefined DAT_10215699[];

int __cdecl FUN_10082490(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{
  int iVar1;
  int local_8;
  
  local_8 = -1;
  if ((DAT_100b9f60 < 0x80) && (DAT_100b9f60 != (undefined4)(-1))) {
    iVar1 = DAT_100b9f60 * 0x54;
    *(undefined4 *)(DAT_10215688 + iVar1) = param_2;
    *(undefined4 *)(DAT_1021568c + iVar1) = param_3;
    *(undefined4 *)(DAT_10215690 + iVar1) = param_4;
    *(undefined4 *)(DAT_10215670 + iVar1) = 1;
    *(undefined2 *)(DAT_10215694 + iVar1) = 0x401;
    *(uint *)(DAT_10215678 + iVar1) = param_1 | 0x200;
    *(undefined4 *)(DAT_1021567c + iVar1) = *(undefined4 *)(DAT_100eef40[param_1] + 8);
    *(undefined4 *)(DAT_10215680 + iVar1) = 3000;
    *(undefined4 *)(DAT_10215674 + iVar1) = 0;
    DAT_10215698[iVar1] = 0x21;
    DAT_10215699[iVar1] = 0;
    local_8 = DAT_100b9f60;
    DAT_100b9f60 = DAT_100b9f60 + 1;
  }
  return local_8;
}
