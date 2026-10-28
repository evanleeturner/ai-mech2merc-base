/* SPDX-License-Identifier: MIT */
/* mercsw 10002383 */
/* mercsw 10002383: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a4080[];
extern undefined DAT_100a4084[];
extern int DAT_100a40a0;
extern undefined4 DAT_100c4c70;
extern undefined4 DAT_100c4c88;
extern undefined4 DAT_10218074;
undefined __cdecl FUN_100609fa(int param_1, uint param_2);

void __cdecl FUN_10002383(int param_1)

{
  uint local_8;
  
  if ((DAT_100c4c88 == 1) && (param_1 != DAT_100a40a0)) {
    if (DAT_10218074 == 1) {
      local_8 = 0xb5;
      DAT_10218074 = 0;
    }
    else {
      local_8 = *(uint *)(DAT_100a4084 + param_1 * 8);
    }
    if (DAT_100c4c70 == 2) {
      DAT_100c4c70 = 3;
      local_8 = 0x16a;
    }
    FUN_100609fa(*(int *)(DAT_100a4080 + param_1 * 8),local_8);
    DAT_100a40a0 = param_1;
  }
  return;
}
