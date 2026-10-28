/* SPDX-License-Identifier: MIT */
/* mercsw 10071750 */
/* mercsw 10071750: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

undefined4 __cdecl FUN_10071750(int * param_1, int param_2, undefined1 param_3, int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *local_10;
  int local_c;
  
  puVar1 = HeapAlloc(DAT_100adf74,1,param_4 * 3);
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10 = puVar1;
    for (local_c = 0; local_c < param_4 * 3; local_c = local_c + 1) {
      *local_10 = *(undefined1 *)(local_c + param_2);
      local_10 = local_10 + 1;
    }
    *param_1 = param_2;
    param_1[1] = (int)puVar1;
    *(undefined1 *)(param_1 + 2) = param_3;
    *(int *)((int)param_1 + 9) = param_4;
    uVar2 = 1;
  }
  return uVar2;
}
