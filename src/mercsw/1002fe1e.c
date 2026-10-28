/* SPDX-License-Identifier: MIT */
/* mercsw 1002fe1e */
/* mercsw 1002fe1e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
undefined __cdecl FUN_1002fcce(int * param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1002fe1e(int * param_1, undefined * param_2)

{
  int *piVar1;
  int *local_8;
  
  FUN_1002fcce(param_1);
  local_8 = (int *)param_1[1];
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    FUN_1002fe1e(local_8,param_2);
    local_8 = piVar1;
  }
  if ((param_1[0x1b] != 0) && (param_2 != (undefined *)0x0)) {
    ((void (*)(int))((*(code *)param_2)))(param_1[0x1b]);
  }
  if ((*(byte *)(param_1 + 0x1d) & 4) != 0) {
    HeapFree(DAT_100adf74,1,param_1);
  }
  return;
}
