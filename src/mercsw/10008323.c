/* SPDX-License-Identifier: MIT */
/* mercsw 10008323 */
/* mercsw 10008323: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a520c[];
extern undefined DAT_100a5360[];
bool __cdecl FUN_10007440(int * param_1, int * param_2, int param_3);

void __cdecl FUN_10008323(int param_1)

{
  FUN_10007440((int *)DAT_100a520c,(int *)(DAT_100a5360 + param_1 * 0xc),-1);
  return;
}
