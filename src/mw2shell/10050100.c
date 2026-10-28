/* SPDX-License-Identifier: MIT */
/* mw2shell 10050100 */
/* mw2shell 10050100: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __fastcall FUN_1003b4b0(int * param_1);
uint __fastcall FUN_10010e00(int param_1);
undefined __thiscall FUN_10010e30(void * this, int param_1);
undefined __fastcall FUN_10010d80(void * param_1);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __thiscall FUN_100402a0(void * this, undefined4 param_1);

void __fastcall FUN_10050100(int * param_1)

{
  uint uVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  if ((int *)param_1[8] != (int *)0x0) {
    FUN_1003b4b0((int *)param_1[8]);
  }
  if ((param_1[0xc] != 0) && (uVar1 = FUN_10010e00(param_1[0xc]), (char)uVar1 == '\0')) {
    FUN_10010e30((void *)param_1[0xc],10);
    FUN_10010d80((void *)param_1[0xc]);
  }
  iVar2 = 0;
  if (0 < *(int *)(*param_1 + 4)) {
    do {
      iVar3 = iVar2 + 1;
      this = (void *)FUN_10018060(*param_1,iVar2);
      *(undefined1 *)((int)this + 0x35) = 0;
      *(undefined4 *)((int)this + 0x36) = 0xffffffff;
      *(undefined4 *)((int)this + 0x3a) = 0xffffffff;
      FUN_100402a0(this,1);
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(*param_1 + 4));
  }
  return;
}
