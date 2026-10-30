/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c110 */
/* mw2shell 1004c110: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a678c;
extern int * DAT_100a6798;
undefined4 __cdecl FUN_10017c90(undefined4 * param_1, int param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);
int __cdecl FindListEntryByKey_Likely(int param_1, int param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);
undefined __cdecl FUN_10018090(int * param_1, int * param_2);
undefined4 __cdecl FUN_10017d70(int * param_1);

void __stdcall FUN_1004c110(void)

{
  int iVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = 0;
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  FUN_10017c90((undefined4 *)(&local_8),10,0,4,0);
  FUN_10017c90((undefined4 *)(&local_4),10,0,4,0);
  if (0 < DAT_100a6798[1]) {
    do {
      iVar1 = FUN_10018060((int)DAT_100a6798,iVar2);
      if (0 < *(int *)(iVar1 + 0x814)) {
        AppendToCollection(local_8,iVar1);
        iVar1 = FindListEntryByKey_Likely((int)DAT_100a678c,*(int *)(iVar1 + 0x810));
        AppendToCollection(local_4,iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_100a6798[1]);
  }
  FUN_100180f0(DAT_100a6798,'\0');
  FUN_100180f0(DAT_100a678c,'\0');
  FUN_10018090(DAT_100a6798,local_8);
  FUN_10018090(DAT_100a678c,local_4);
  FUN_10017d70(local_8);
  FUN_10017d70(local_4);
  return;
}
