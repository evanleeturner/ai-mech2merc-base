/* SPDX-License-Identifier: MIT */
/* mw2shell 10010ae0 */
/* mw2shell 10010ae0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_10098224;
undefined4 __thiscall FUN_10054f20(void * this, int param_1, undefined4 * param_2, long * param_3);
int __fastcall FUN_100107a0(char * param_1);
undefined4 __stdcall _AIL_allocate_sample_handle_4(undefined4);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined4 __stdcall _AIL_init_sample_4(undefined4);
undefined4 __stdcall _AIL_set_sample_file_12(undefined4, undefined4, undefined4);
undefined __thiscall FUN_10010890(void * this, undefined4 param_1);

int * __thiscall FUN_10010ae0(void * this, char * param_1, void * param_2, int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  long local_4;
  
  local_8 = 0;
  local_4 = -1;
  FUN_10054f20(param_2,param_3,(undefined4 *)(&local_8),&local_4);
  *(char **)this = param_1;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(int *)((int)this + 4) = local_8;
  *(long *)((int)this + 8) = local_4;
  *(undefined4 *)((int)this + 0x29) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x24) = 1;
  if (((param_1 != (char *)0x0) && (local_8 != 0)) && (local_4 != 0)) {
    iVar1 = FUN_100107a0(param_1);
    uVar2 = _AIL_allocate_sample_handle_4(iVar1);
    *(undefined4 *)((int)this + 0x29) = uVar2;
    if (*(int *)(*(int *)this + 5) == 0) {
      if (*(LPVOID *)((int)this + 4) != (LPVOID)0x0) {
        HeapFree(DAT_10098224,1,*(LPVOID *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
    else if (*(int *)((int)this + 0x29) != 0) {
      _AIL_init_sample_4(*(int *)((int)this + 0x29));
      _AIL_set_sample_file_12
                (*(undefined4 *)((int)this + 0x29),*(undefined4 *)((int)this + 4),0xffffffff);
      FUN_10010890(*(void **)this,(undefined4)(this));
    }
  }
  return this;
}
