/* SPDX-License-Identifier: MIT */
/* mercsw 100605d6 */
/* mercsw 100605d6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b36d4;
extern undefined4 DAT_100b36d8;
extern undefined4 DAT_100b36e4;
extern undefined4 DAT_100b36e8;
extern undefined4 DAT_100b36ec;
extern undefined4 DAT_100b36f0;
extern undefined4 DAT_100b36f4;
extern undefined DAT_100c7e40[];
undefined __cdecl FUN_10071a19(int * param_1);
undefined4 __cdecl FUN_1006065d(int param_1, uint param_2, int param_3);
undefined __cdecl FUN_100717ee(int param_1);

void __stdcall FUN_100605d6(void)

{
  if (DAT_100b36f0 != 0) {
    FUN_10071a19((int *)(DAT_100c7e40));
    DAT_100b36f0 = DAT_100b36f0 + -1;
    if (DAT_100b36f0 == 0) {
      DAT_100b36d4 = DAT_100b36e4;
      if (DAT_100b36ec == 0) {
        DAT_100b36d8 = 1;
      }
      else {
        FUN_1006065d(DAT_100b36e8,DAT_100b36ec,0);
      }
    }
  }
  if (DAT_100b36f4 != 0) {
    FUN_100717ee(0x100c7e60);
  }
  return;
}
