/* SPDX-License-Identifier: MIT */
/* mercsw 100082c4 */
/* mercsw 100082c4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a5160[];
extern undefined DAT_100a5188[];
bool __cdecl FUN_10007440(int * param_1, int * param_2, int param_3);

void __cdecl FUN_100082c4(int param_1, int param_2)

{
  int *local_8;
  
  if (param_2 != 0) {
    if (param_2 == -1) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)(DAT_100a5160 + param_2 * 0xc);
    }
    FUN_10007440((int *)(DAT_100a5188 + param_1 * 0xc),local_8,-1);
  }
  return;
}
