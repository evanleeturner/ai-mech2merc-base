/* SPDX-License-Identifier: MIT */
/* mercsw 10071905 */
/* mercsw 10071905: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

undefined4 __cdecl FUN_10071905(undefined4 * param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  char *local_14;
  int local_10;
  undefined2 *local_c;
  undefined1 *local_8;
  
  pvVar1 = HeapAlloc(DAT_100adf74,1,param_5 * 0xc);
  if (pvVar1 == (LPVOID)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_1 = (undefined4)(pvVar1);
    param_1[1] = (int)pvVar1 + 0x300;
    param_1[2] = (int)pvVar1 + 0x600;
    local_14 = (char *)param_1[1];
    local_8 = (undefined1 *)*param_1;
    local_c = (undefined2 *)param_1[2];
    for (local_10 = param_4 * 3; local_10 < param_4 * 3 + param_5 * 3; local_10 = local_10 + 1) {
      *local_8 = *(undefined1 *)(local_10 + param_2);
      local_8 = local_8 + 1;
      *local_14 = *(char *)(local_10 + param_3) - *(char *)(local_10 + param_2);
      local_14 = local_14 + 1;
      *local_c = 0;
      local_c = local_c + 1;
    }
    param_1[3] = param_6;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = (undefined1)param_4;
    *(int *)((int)param_1 + 0x15) = param_5;
    uVar2 = 1;
  }
  return uVar2;
}
