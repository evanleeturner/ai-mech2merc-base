/* SPDX-License-Identifier: MIT */
/* mercsw 1001be70 */
/* mercsw 1001be70: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined __cdecl FUN_1001bf60(int param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6, int * param_7);

int * __cdecl FUN_1001be70(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = HeapAlloc(DAT_100adf74,1,0x78);
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    FUN_1001bf60(param_1,piVar1,piVar1 + 1,piVar1 + 2,piVar1 + 3,piVar1 + 4,piVar1 + 5);
  }
  return piVar1;
}
