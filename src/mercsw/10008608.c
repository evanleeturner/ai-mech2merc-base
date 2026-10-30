/* SPDX-License-Identifier: MIT */
/* mercsw 10008608 */
/* mercsw 10008608: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7178;
extern undefined4 DAT_100a717c;
extern undefined4 DAT_100a7180;
extern undefined DAT_100a7b30[];
extern undefined4 DAT_10215650;
extern undefined4 DAT_10215658;
extern undefined4 DAT_10215660;
extern undefined4 PTR_DAT_100a761c;
undefined __cdecl FUN_100083d0(int param_1, undefined4 * param_2);
int * __cdecl ScalePointBySize(int param_1, int * param_2, int * param_3);

void __stdcall FUN_10008608(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    FUN_100083d0(local_8,*(undefined4 **)(DAT_100a7b30 + local_8 * 4));
  }
  DAT_10215658 = 0;
  DAT_10215660 = 1;
  DAT_10215650 = 0;
  ScalePointBySize(0x101f52e0,(int *)(PTR_DAT_100a761c + 0x14),(int *)(PTR_DAT_100a761c + 0x14));
  DAT_100a7178 = DAT_100a7178 + -1000;
  DAT_100a7180 = DAT_100a717c - DAT_100a7178;
  return;
}
