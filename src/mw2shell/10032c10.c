/* SPDX-License-Identifier: MIT */
/* mw2shell 10032c10 */
/* mw2shell 10032c10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10082bf0[];
extern undefined4 DAT_10092000;
extern HANDLE DAT_10098224;
extern int * DAT_100a67c8;
extern char s_Upgraded_heat_sinks_have_been_pl_10093634[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);
undefined __cdecl ShowMessageDialog(char * param_1);

void __stdcall FUN_10032c10(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = 8;
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar4 = 0xc;
    do {
      if (*(int *)(DAT_10092000 + 0x368 + iVar2) / 100 == 0x50) {
        iVar3 = iVar3 + 1;
        *(undefined4 *)(DAT_10092000 + 0x368 + iVar2) = 0;
      }
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(DAT_10092000 + 0x228) = 1;
  if (0 < iVar3) {
    do {
      piVar1 = HeapAlloc(DAT_10098224,1,0x16);
      *piVar1 = 2;
      *(undefined1 *)(piVar1 + 2) = 2;
      piVar1[1] = *(int *)(DAT_10082bf0 + *piVar1 * 0xc);
      *(undefined4 *)((int)piVar1 + 10) = 0xffffffff;
      *(undefined4 *)((int)piVar1 + 0xe) = 0xffffffff;
      *(undefined4 *)((int)piVar1 + 0x12) = 0xffffffff;
      AppendToCollection(DAT_100a67c8,(undefined4)(piVar1));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  ShowMessageDialog(s_Upgraded_heat_sinks_have_been_pl_10093634);
  return;
}
