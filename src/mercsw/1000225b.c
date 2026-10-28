/* SPDX-License-Identifier: MIT */
/* mercsw 1000225b */
/* mercsw 1000225b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40b4;
extern undefined4 DAT_100a40b8;
extern undefined4 DAT_100a40bc;
extern int DAT_100a40c0;
extern undefined4 DAT_100a40c4;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100c4c70;
extern undefined DAT_100c4c78[];
extern undefined4 DAT_10114db0;
extern undefined4 DAT_10218070;
extern undefined4 DAT_10218074;
undefined __cdecl FUN_1000242a(undefined4 param_1, int param_2);
undefined __cdecl FUN_10002383(int param_1);

void __stdcall FUN_1000225b(void)

{
  int iVar1;
  int local_14;
  int local_8;
  
  local_14 = 3;
  if ((0 < *(short *)(DAT_10114db0 + 6)) && (DAT_10218074 == 1)) {
    FUN_1000242a(0,0);
    DAT_10218074 = 0;
  }
  if (DAT_100c4c70 < 2) {
    DAT_100c4c70 = DAT_100c4c70 + 1;
    DAT_10218070 = 0;
  }
  else if (DAT_10218070 <= DAT_100b38fc) {
    DAT_10218070 = DAT_100b38fc + 0x712;
    iVar1 = (DAT_100a40c4 + DAT_100b38fc / 0xb5) % DAT_100a40b4;
    if (iVar1 < DAT_100a40c0) {
      DAT_100a40bc = DAT_100a40bc + 1;
      DAT_100a40bc = DAT_100a40bc % DAT_100a40b8;
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if (*(int *)(DAT_100c4c78 + local_8 * 4) <= iVar1) {
        local_14 = local_8;
      }
    }
    DAT_100a40c0 = iVar1;
    FUN_10002383(local_14);
  }
  return;
}
