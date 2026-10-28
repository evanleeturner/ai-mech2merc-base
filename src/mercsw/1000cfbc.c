/* SPDX-License-Identifier: MIT */
/* mercsw 1000cfbc */
/* mercsw 1000cfbc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7590;
extern undefined4 DAT_100a7594;
extern undefined DAT_102155a0[];
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

void __stdcall FUN_1000cfbc(void)

{
  DAT_100a7594 = DAT_100a7594 - 1;
  if (DAT_100a7594 < 0x80000000) {
    DAT_100a7590 = *(undefined4 *)(DAT_102155a0 + DAT_100a7594 * 4);
  }
  else {
    FUN_100108a0(0x22,(char *)0x0);
  }
  return;
}
