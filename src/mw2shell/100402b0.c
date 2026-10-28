/* SPDX-License-Identifier: MIT */
/* mw2shell 100402b0 */
/* mw2shell 100402b0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __fastcall FUN_10040300(undefined4 * param_1);
undefined __thiscall FUN_10050d90(void * this, int param_1, int param_2, byte * param_3, undefined * param_4);

void __fastcall FUN_100402b0(undefined4 * param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(char **)((int)param_1 + 0x19) != (char *)0x0) {
    iVar2 = -1;
    pcVar3 = *(char **)((int)param_1 + 0x19);
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      if (param_1[4] == 1) {
        FUN_10040300(param_1);
        return;
      }
      FUN_10050d90((void *)*param_1,*(int *)((int)param_1 + 0x25),*(int *)((int)param_1 + 0x29),
                   *(byte **)((int)param_1 + 0x19),(undefined *)param_1[1]);
      *(undefined1 *)((int)param_1 + 0x35) = 1;
    }
  }
  return;
}
