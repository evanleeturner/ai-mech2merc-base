/* SPDX-License-Identifier: MIT */
/* mercsw 1003a783 */
/* mercsw 1003a783: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_1002f3a7(int param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_100399ec(int param_1, int param_2);

bool __cdecl FUN_1003a783(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  local_c = *(int **)(param_1 + 0x1f6);
  FUN_1002f322(*(int *)(param_1 + 0x1d2),&local_10,(undefined4 *)(&local_14),&local_18);
  if (local_14 < 1) {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfffe;
    FUN_1002f727(*(int *)(param_1 + 0x1d2));
    FUN_100399ec(local_c[8],*local_c);
  }
  else {
    iVar2 = (local_c[5] + *(int *)(param_1 + 0x1ea)) * DAT_100b3904;
    iVar1 = *(int *)(param_1 + 0x1ee);
    iVar3 = FUN_10051f43(10);
    local_8 = ((*(int *)(param_1 + 0x1f2) + local_c[7]) * DAT_100b3904) / 0xb5;
    FUN_1002f3a7(*(int *)(param_1 + 0x1d2),iVar2 / 0xb5,
                 (((iVar1 - iVar3) + local_c[6]) * DAT_100b3904) / 0xb5,local_8);
    FUN_1002fbc0(*(int **)(param_1 + 0x1d2));
    *(undefined4 *)(param_1 + 0x1e6) = 0x5e;
  }
  return 0 < local_14;
}
