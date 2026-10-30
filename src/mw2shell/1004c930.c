/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c930 */
/* mw2shell 1004c930: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a678c;
extern int * DAT_100a6798;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FindListEntryByKey_Likely(int param_1, int param_2);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
undefined __cdecl FUN_1000be30(undefined4 * param_1);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);

void __stdcall FUN_1004c930(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a678c + 4)) {
    do {
      iVar4 = iVar2 + 1;
      puVar1 = (undefined4 *)FUN_10018060(DAT_100a678c,iVar2);
      iVar2 = FindListEntryByKey_Likely((int)DAT_100a6798,puVar1[0x204]);
      puVar1[0x203] = *(undefined4 *)(iVar2 + 0x80c);
      FUN_10017ec0((int)DAT_100a6798,iVar2,'\x01');
      uVar3 = FUN_1000be30(puVar1);
      AppendToCollection(DAT_100a6798,uVar3);
      iVar2 = iVar4;
    } while (iVar4 < *(int *)(DAT_100a678c + 4));
  }
  return;
}
