/* SPDX-License-Identifier: MIT */
/* mercsw 1005d6f3 */
/* mercsw 1005d6f3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100b3218;
extern undefined4 DAT_100b32a8;
extern undefined4 DAT_100b32ac;
extern undefined4 DAT_100b32b0;
extern undefined4 DAT_100b32b4;
undefined __cdecl FUN_1006b1f5(uint param_1);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);

void __cdecl FUN_1005d6f3(int param_1)

{
  int iVar1;
  
  if (DAT_100b3218 != 0) {
    DAT_100b32b4 = DAT_100b32b4 + 1;
    FUN_1006b1f5(DAT_100b32b4 * 3);
    DAT_100b3218 = 0;
  }
  if (DAT_100ab094 != 0) {
    if ((*(ushort *)(param_1 + 0x440) & 0x80) == 0) {
      DAT_100b32ac = 0;
      if ((*(ushort *)(param_1 + 0x440) & 0x40) == 0) {
        DAT_100b32b0 = 0;
      }
      else if ((DAT_100b32b0 == 0) && (*(int *)(param_1 + 0x3d4) == 2)) {
        DAT_100b32b0 = 1;
        FUN_10003742(0xe0,100,0x1f,5,0x32);
      }
    }
    else if (((DAT_100b32ac == 0) &&
             (*(int *)(*(int *)(param_1 + 0x3e0) * 0x40 + 8 + *(int *)(param_1 + 0x54)) == 1)) &&
            (*(int *)(param_1 + 0x3d4) == 2)) {
      DAT_100b32ac = 1;
      FUN_10003742(0x113,100,0x5f,5,0x32);
    }
    if ((undefined4)(*(int *)(param_1 + 0x3d4)) != DAT_100b32a8) {
      iVar1 = *(int *)(param_1 + 0x3d4);
      if (iVar1 != 0) {
        if (iVar1 == 2) {
          FUN_10003742(0xdf,100,0x2f,5,0x32);
          goto LAB_1005d89b;
        }
        if (iVar1 != 4) goto LAB_1005d89b;
      }
      FUN_10003742(0x10b,100,0x40,5,0x32);
    }
  }
LAB_1005d89b:
  DAT_100b32a8 = *(undefined4 *)(param_1 + 0x3d4);
  return;
}
