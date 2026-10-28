/* SPDX-License-Identifier: MIT */
/* mw2shell 1006dc00 */
/* mw2shell 1006dc00: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined * DAT_10083508;
extern undefined4 DAT_100aa6b8;
extern undefined4 DAT_100aa6bc;
extern void * DAT_100aa6c8;
extern undefined DAT_100aaa98[];
extern undefined4 DAT_100aad70;
undefined4 __cdecl FUN_1006b9c0(int param_1, char param_2, undefined4 * param_3);
undefined __cdecl FUN_1006b450(int param_1, int param_2, int param_3, int param_4, int param_5);
undefined __fastcall FUN_10010d80(void * param_1);
undefined __cdecl FUN_10063de0(int * param_1);

int __cdecl FUN_1006dc00(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iStack_4;
  
  puVar4 = &DAT_100aad70;
  iVar1 = DAT_100aad70;
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    if (puVar4[0xb] == 1) break;
    iVar1 = puVar4[0xe];
    puVar4 = puVar4 + 0xe;
  }
  iVar1 = (puVar4[9] + *(int *)(DAT_100aa6b8 + 0x364) * 0xc) * 4;
  iVar2 = *(int *)(DAT_100aa6bc + 0x368 + iVar1);
  if (iVar2 == -1) {
    return -3;
  }
  if (*(int *)(DAT_100aa6b8 + 0x368 + iVar1) == iVar2) {
    return -2;
  }
  uVar3 = FUN_1006b9c0(iVar2,'\0',(undefined4 *)(&iStack_4));
  if ((char)uVar3 == '\x01') {
    if (0 < iStack_4) {
      *(undefined1 *)(DAT_100aa6b8 + 0x84c) = 1;
      *DAT_10083508 = 1;
    }
    if (param_1 == '\0') {
      iVar1 = (puVar4[9] + *(int *)(DAT_100aa6b8 + 0x364) * 0xc) * 4;
      *(undefined4 *)(DAT_100aa6b8 + 0x368 + iVar1) = *(undefined4 *)(DAT_100aa6bc + 0x368 + iVar1);
      FUN_1006b450(DAT_100aa6b8,DAT_100aa6bc,*(int *)(DAT_100aa6b8 + 0x364),puVar4[9],iVar2);
      FUN_10010d80(DAT_100aa6c8);
      FUN_1006b9c0(iVar2,'\x01',(undefined4 *)(&iStack_4));
      if (0 < iStack_4) {
        *(undefined1 *)(DAT_100aa6b8 + 0x84c) = 1;
        *DAT_10083508 = 1;
      }
      FUN_10063de0((int *)DAT_100aaa98);
    }
    return iStack_4;
  }
  return -1;
}
