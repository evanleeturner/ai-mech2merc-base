/* SPDX-License-Identifier: MIT */
/* mw2shell 1006d140 */
/* mw2shell 1006d140: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a67b4;
extern int * DAT_100a67b8;
extern undefined4 * DAT_100aa6b8;
extern undefined4 * DAT_100aa6c0;
extern int * DAT_100aa6e0;
extern int * DAT_100aa6e4;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);

void __stdcall FUN_1006d140(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_100aa6e0[1];
  while (0 < iVar1) {
    iVar1 = FUN_10018060((int)DAT_100aa6e0,0);
    FUN_10017ec0((int)DAT_100aa6e0,iVar1,'\0');
    AppendToCollection(DAT_100a67b4,iVar1);
    iVar1 = DAT_100aa6e0[1];
  }
  FUN_100180f0(DAT_100aa6e0,'\0');
  iVar1 = DAT_100aa6e4[1];
  while (0 < iVar1) {
    iVar1 = FUN_10018060((int)DAT_100aa6e4,0);
    FUN_10017ec0((int)DAT_100aa6e4,iVar1,'\0');
    AppendToCollection(DAT_100a67b8,iVar1);
    iVar1 = DAT_100aa6e4[1];
  }
  FUN_100180f0(DAT_100aa6e4,'\0');
  puVar2 = DAT_100aa6c0;
  puVar3 = DAT_100aa6b8;
  for (iVar1 = 0x214; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar2 + 2);
  return;
}
