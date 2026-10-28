/* SPDX-License-Identifier: MIT */
/* mercsw 10007dc0 */
/* mercsw 10007dc0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char s_RemoveBettyQueue__bug_100a7148[];
undefined __cdecl FUN_1006af90(undefined4 param_1);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

undefined4 __cdecl FUN_10007dc0(undefined4 * param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x4f);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0x4f) = 0;
  if (param_1[3] != 0) {
    FUN_1006af90(param_1[3]);
  }
  if (param_1[4] != 0) {
    FUN_100108a0(0x20,s_RemoveBettyQueue__bug_100a7148);
  }
  return uVar1;
}
