/* SPDX-License-Identifier: MIT */
/* mw2shell 10064a90 */
/* mw2shell 10064a90: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __thiscall FUN_10013330(void * this, undefined4 param_1, int param_2);
undefined __fastcall FUN_100402b0(undefined4 * param_1);

void __thiscall FUN_10064a90(void * this, int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(*(int *)this + 4)) {
    do {
      iVar1 = FUN_10018060(*(int *)this,iVar2);
      if ((*(int *)(iVar1 + 0x24) == param_1) && (*(char *)(iVar1 + 0x29) == '\0')) {
        *(undefined1 *)(iVar1 + 0x29) = 1;
        if (*(int *)(iVar1 + 0x20) != 0) {
          FUN_10013330(*(void **)((int)this + 4),*(int *)(iVar1 + 0x20),1);
          FUN_100402b0(*(undefined4 **)(iVar1 + 0x20));
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)this + 4));
  }
  return;
}
