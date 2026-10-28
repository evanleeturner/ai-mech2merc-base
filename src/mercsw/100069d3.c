/* SPDX-License-Identifier: MIT */
/* mercsw 100069d3 */
/* mercsw 100069d3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40cc;
extern undefined4 DAT_100adf38;
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100082c4(int param_1, int param_2);
undefined __cdecl FUN_10004b19(int param_1, int * param_2);

void __cdecl FUN_100069d3(int * param_1, int param_2)

{
  if ((param_1[0xf5] != 4) && (param_1[0xf5] != 5)) {
    if ((param_2 == 0) || ((undefined4)(*(int *)(*param_1 + 4)) != DAT_100adf38)) {
      if ((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38) {
        FUN_100082c4(4,-1);
      }
    }
    else if (DAT_100a40cc == 0) {
      param_1[0xf5] = 5;
      FUN_10003742(0xd6,100,0x40,5,0x32);
    }
    else {
      FUN_100082c4(0x20,-1);
    }
    FUN_10004b19(*(int *)(*param_1 + 4),param_1);
  }
  return;
}
