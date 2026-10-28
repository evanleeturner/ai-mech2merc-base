/* SPDX-License-Identifier: MIT */
/* mw2shell 1000be30 */
/* mw2shell 1000be30: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

void __cdecl FUN_1000be30(undefined4 * param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = HeapAlloc(DAT_10098224,1,0x853);
  if (puVar1 != (undefined4 *)0x0) {
    for (iVar2 = 0x214; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)param_1;
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_1 + 2);
  }
  return;
}
