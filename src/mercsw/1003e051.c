/* SPDX-License-Identifier: MIT */
/* mercsw 1003e051 */
/* mercsw 1003e051: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
extern undefined DAT_100c6d48[];
undefined __cdecl FUN_1003e369(int param_1);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_1003e3e3(int param_1, int param_2);

void __cdecl FUN_1003e051(ushort * param_1)

{
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((((param_1 != (ushort *)0x0) && ((*param_1 & 0x1000) != 0)) &&
      (((byte)param_1[1] & 0xf0) != 0x70)) &&
     (*param_1 = *param_1 & 0xefff, *(int *)(param_1 + 2) != 0)) {
    FUN_1003e369((int)param_1);
    if (DAT_100aefc0 == 0) {
      FUN_1003e3e3((int)param_1,0x100c6d00);
    }
    else {
      FUN_1002f322(*(int *)(param_1 + 0xc),(undefined4 *)(&local_14),&local_18,(undefined4 *)(&local_10));
      local_8 = (local_14 + 150000) / 25000;
      local_c = (local_10 + 150000) / 25000;
      if (((local_8 < 0) || (0xb < local_8)) || ((local_c < 0 || (0xb < local_c)))) {
        param_1[0x22] = 9999;
        param_1[0x23] = 0;
        param_1[0x24] = 9999;
        param_1[0x25] = 0;
        FUN_1003e3e3((int)param_1,0x100c6d18);
      }
      else {
        *(int *)(param_1 + 0x22) = local_8;
        *(int *)(param_1 + 0x24) = local_c;
        FUN_1003e3e3((int)param_1,(int)(DAT_100c6d48 + local_8 * 0x120 + local_c * 0x18));
      }
    }
  }
  return;
}
