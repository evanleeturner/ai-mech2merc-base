/* SPDX-License-Identifier: MIT */
/* mw2shell 100648b0 */
/* mw2shell 100648b0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __thiscall FUN_10064ca0(void * this, int param_1, int param_2);

undefined4 __thiscall FUN_100648b0(void * this, int param_1, int param_2)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  iVar3 = 0;
  if (0 < *(int *)(*(int *)this + 4)) {
    do {
      this_00 = (void *)FUN_10018060(*(int *)this,iVar3);
      uVar1 = FUN_10064ca0(this_00,param_1,param_2);
      if (((char)uVar1 == '\x01') && (*(char *)((int)this_00 + 0x29) == '\x01')) {
        uVar2 = *(undefined4 *)((int)this_00 + 0x24);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)this + 4));
  }
  return uVar2;
}
