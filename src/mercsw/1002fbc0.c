/* SPDX-License-Identifier: MIT */
/* mercsw 1002fbc0 */
/* mercsw 1002fbc0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
undefined __cdecl FUN_1002fb55(int * param_1);
undefined __cdecl FUN_1003d8af(ushort * param_1);

void __cdecl FUN_1002fbc0(int * param_1)

{
  FUN_1002fb55(param_1);
  if ((DAT_100aefc0 != 0) && (*param_1 == 0)) {
    FUN_1003d8af((ushort *)param_1[0x1b]);
  }
  return;
}
