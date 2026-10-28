/* SPDX-License-Identifier: MIT */
/* mercsw 1003109e */
/* mercsw 1003109e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100ada50;
extern undefined DAT_10168914[];
extern undefined DAT_10168918[];
extern undefined DAT_1016891c[];
extern undefined DAT_10168920[];
extern undefined DAT_10168924[];
extern undefined DAT_10168928[];
extern undefined DAT_1016892c[];
extern undefined DAT_10168930[];
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);

void __cdecl FUN_1003109e(int param_1, byte param_2, undefined4 * param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < DAT_100ada50)) {
    iVar1 = param_1 * 0x34;
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(DAT_10168914 + iVar1) = *param_3;
      *(undefined4 *)(DAT_10168918 + iVar1) = param_3[1];
      *(undefined4 *)(DAT_1016891c + iVar1) = param_3[2];
      piVar2 = *(int **)(DAT_10168930 + iVar1);
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[0x1b];
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x34) = *param_3;
          *(undefined4 *)(iVar3 + 0x38) = param_3[1];
          *(undefined4 *)(iVar3 + 0x3c) = param_3[2];
        }
        FUN_1002f37a((int)piVar2,*(undefined4 *)(DAT_10168914 + iVar1),
                     *(undefined4 *)(DAT_10168918 + iVar1),*(undefined4 *)(DAT_1016891c + iVar1));
        FUN_1002fbc0(piVar2);
      }
    }
    if ((param_2 & 2) != 0) {
      *(undefined4 *)(DAT_10168920 + iVar1) = param_3[3];
      *(undefined4 *)(DAT_10168928 + iVar1) = 0;
    }
    if ((param_2 & 4) != 0) {
      *(undefined4 *)(DAT_10168924 + iVar1) = param_3[4];
      *(undefined4 *)(DAT_1016892c + iVar1) = 1;
    }
  }
  return;
}
