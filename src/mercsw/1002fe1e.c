/* SPDX-License-Identifier: MIT */
/* mercsw 1002fe1e */
/* mercsw 1002fe1e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
undefined __cdecl FUN_1002fcce(int * mem);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1002fe1e(int * mem, undefined * param_2)

{
  int *piVar1;
  int *local_8;
  
  FUN_1002fcce(mem);
  local_8 = (int *)mem[1];
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    FUN_1002fe1e(local_8,param_2);
    local_8 = piVar1;
  }
  if ((mem[0x1b] != 0) && (param_2 != (undefined *)0x0)) {
    ((void (*)(int))((*(code *)param_2)))(mem[0x1b]);
  }
  if ((*(byte *)(mem + 0x1d) & 4) != 0) {
    HeapFree(DAT_100adf74,1,mem);
  }
  return;
}
