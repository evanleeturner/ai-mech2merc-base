/* SPDX-License-Identifier: MIT */
/* mercsw 1003c41d */
/* mercsw 1003c41d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefb0;
extern undefined4 DAT_100aefb8;
extern undefined4 DAT_100b3c54;
extern undefined DAT_10160e80[];
extern undefined DAT_10160e90[];
undefined4 __stdcall _AIL_set_preference_8(undefined4, undefined4);
undefined4 __stdcall FUN_1006af3b(void);
int __cdecl FixedMul16(int param_1, int param_2);
undefined __cdecl FUN_1003c756(short param_1);

undefined4 __stdcall FUN_1003c41d(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  if (DAT_100aefb8 == 0) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      *(undefined4 *)(DAT_10160e90 + local_8 * 4) = 0xffffffff;
      *(undefined2 *)(DAT_10160e80 + local_8 * 2) = 0;
    }
    _AIL_set_preference_8(9,0xc);
    DAT_100aefb0 = FUN_1006af3b();
    if (DAT_100aefb0 == 0) {
      uVar1 = 0xfffffffb;
    }
    else {
      iVar2 = FixedMul16(DAT_100b3c54,0x7f);
      FUN_1003c756((short)iVar2);
      DAT_100aefb8 = 1;
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
