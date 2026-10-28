/* SPDX-License-Identifier: MIT */
/* mw2shell 1000c2b0 */
/* mw2shell 1000c2b0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a678c;
extern int * DAT_100a6798;
extern int * DAT_100a679c;
extern int * DAT_100a67a0;
undefined4 __cdecl FUN_10017c90(undefined4 * param_1, int param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);
int __cdecl FUN_1000ad30(int param_1, int param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);
undefined __cdecl FUN_10018090(int * param_1, int * param_2);
undefined __cdecl FUN_1000be30(undefined4 * param_1);

void __stdcall FUN_1000c2b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_8;
  int *local_4;
  
  iVar4 = 0;
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  FUN_10017c90((undefined4 *)(&local_8),10,0,4,0);
  FUN_10017c90((undefined4 *)(&local_4),10,0,4,0);
  if (0 < DAT_100a6798[1]) {
    do {
      iVar1 = FUN_10018060((int)DAT_100a6798,iVar4);
      if (0 < *(int *)(iVar1 + 0x814)) {
        FUN_10017df0(local_8,iVar1);
        iVar1 = FUN_1000ad30((int)DAT_100a678c,*(int *)(iVar1 + 0x810));
        FUN_10017df0(local_4,iVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100a6798[1]);
  }
  FUN_100180f0(DAT_100a6798,'\0');
  FUN_100180f0(DAT_100a678c,'\0');
  FUN_10018090(DAT_100a6798,local_8);
  FUN_10018090(DAT_100a678c,local_4);
  iVar4 = 0;
  if (0 < DAT_100a679c[1]) {
    do {
      iVar1 = iVar4 + 1;
      puVar2 = (undefined4 *)FUN_10018060((int)DAT_100a679c,iVar4);
      FUN_10017df0(DAT_100a6798,(undefined4)(puVar2));
      uVar3 = FUN_1000be30(puVar2);
      FUN_10017df0(DAT_100a678c,uVar3);
      iVar4 = iVar1;
    } while (iVar1 < DAT_100a679c[1]);
  }
  FUN_100180f0(DAT_100a679c,'\0');
  FUN_100180f0(DAT_100a67a0,'\0');
  return;
}
