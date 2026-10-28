/* SPDX-License-Identifier: MIT */
/* mw2shell 100362a0 */
/* mw2shell 100362a0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef const void *LPCSTR;
extern undefined LAB_10036300[];
extern undefined LAB_10036320[];
extern undefined4 DAT_100986b4;
undefined __cdecl FUN_10059e60(undefined4 param_1, undefined4 param_2);
undefined __stdcall FUN_10042340(void);
undefined4 __cdecl FUN_10059f60(LPCSTR param_1, char param_2);
undefined4 __cdecl FUN_1005a2d0(int param_1);

int * __thiscall FUN_100362a0(void * this, LPCSTR param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_10059e60((undefined4)(LAB_10036300),(undefined4)(LAB_10036320));
  FUN_10042340();
  iVar1 = FUN_10059f60(param_1,'\0');
  *(int *)this = iVar1;
  if (-1 < iVar1) {
    DAT_100986b4 = iVar1;
    FUN_1005a2d0(iVar1);
  }
  return this;
}
