/* SPDX-License-Identifier: MIT */
/* mw2shell 10010e30 */
/* mw2shell 10010e30: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall FUN_10010930(void);
undefined4 __stdcall _AIL_set_sample_volume_8(undefined4, undefined4);

void __thiscall FUN_10010e30(void * this, int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x29);
  if (iVar1 != 0) {
    if (param_1 < 0x80) {
      if (param_1 < 0) {
        *(int *)((int)this + 0xc) = 0;
      }
      else {
        *(int *)((int)this + 0xc) = param_1;
      }
    }
    else {
      *(undefined4 *)((int)this + 0xc) = 0x7f;
    }
    iVar2 = FUN_10010930();
    _AIL_set_sample_volume_8(iVar1,(int)((unsigned int)(iVar2) * (unsigned int)(*(int *)((int)this + 0xc))) >> 0x10);
  }
  return;
}
