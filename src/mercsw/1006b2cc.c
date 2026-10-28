/* SPDX-License-Identifier: MIT */
/* mercsw 1006b2cc */
/* mercsw 1006b2cc: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);
int __cdecl FUN_10051f43(int param_1);
undefined4 __stdcall FUN_10051f89(void);

void __cdecl FUN_1006b2cc(int * param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(*param_1 + 0x50);
  iVar2 = *(int *)(*param_1 + 0x54);
  iVar3 = *(int *)(*param_1 + 0x58);
  if (param_1[0xef] == 0) {
    FUN_1004aa97(*(undefined4 *)(*param_1 + 0x13c),0xd,iVar1,iVar2,iVar3,iVar1,iVar2,iVar3);
  }
  else {
    iVar4 = FUN_10051f43(100);
    if (iVar4 < 0x15) {
      iVar4 = FUN_10051f89();
      iVar1 = iVar1 + iVar4 / 2;
      iVar4 = FUN_10051f89();
      iVar3 = iVar3 + iVar4 / 2;
      iVar4 = FUN_10051f43(100);
      if (iVar4 < 0x3c) {
        FUN_1004aa97(*(undefined4 *)(*param_1 + 0x13c),3,iVar1,iVar2,iVar3,iVar1,iVar2,iVar3);
      }
      else {
        FUN_1004aa97(*(undefined4 *)(*param_1 + 0x13c),0x10b,iVar1,iVar2,iVar3,iVar1,iVar2,iVar3);
      }
    }
  }
  return;
}
