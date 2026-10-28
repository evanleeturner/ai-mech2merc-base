/* SPDX-License-Identifier: MIT */
/* mercsw 10051d99 */
/* mercsw 10051d99: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b09dc;
extern undefined4 DAT_101155bc;
int __cdecl FUN_10064f77(int param_1, int param_2, int param_3, int param_4, undefined4 param_5);
undefined8 __fastcall FUN_10051e44(undefined4 param_1, undefined4 param_2, int param_3, int param_4);

int __cdecl FUN_10051d99(int param_1)

{
  int local_c;
  
  local_c = 2;
  if ((param_1 != 0) && (DAT_100b09dc == 1)) {
    DAT_101155bc = param_1;
    local_c = FUN_10064f77(*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                           (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) + 1,
                           (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)) + 1,(undefined4)(FUN_10051e44));
    DAT_100b09dc = 2;
  }
  return local_c;
}
