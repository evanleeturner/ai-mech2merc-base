/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f410 */
/* mw2shell 1005f410: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a6780;
extern char s__ssmk__s_shp_100a71e8[];
extern char s_smk__s_shp_100a71f8[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __stdcall _FILE_read_8(undefined4, undefined4);
undefined4 __cdecl FUN_1006a267(int param_1);
undefined4 __cdecl FUN_1006a0e7(int param_1, int param_2);

undefined4 __thiscall FUN_1005f410(void * this, int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char local_20 [32];
  
  if ((param_1 == 1) && (DAT_100a6780 != '\0')) {
    _sprintf(local_20,s__ssmk__s_shp_100a71e8,&DAT_100a6780,this);
  }
  else {
    _sprintf(local_20,s_smk__s_shp_100a71f8,this);
  }
  iVar1 = _FILE_read_8((undefined4)(local_20),0);
  *(int *)((int)this + 0x104) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = -1;
  uVar4 = 0xffffffff;
  iVar1 = FUN_1006a267(iVar1);
  iVar5 = 0;
  *(int *)((int)this + 0x130) = iVar1;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_1006a0e7(*(int *)((int)this + 0x104),iVar5);
      if (iVar3 < (int)uVar2 >> 0x10) {
        iVar3 = (int)uVar2 >> 0x10;
      }
      if ((int)uVar4 < (int)(uVar2 & 0xffff)) {
        uVar4 = uVar2 & 0xffff;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0x130));
  }
  *(int *)((int)this + 0x118) = iVar3 + 1;
  *(uint *)((int)this + 0x11c) = uVar4 + 1;
  if ((*(uint *)((int)this + 0x10c) & 0x80) != 0) {
    *(int *)((int)this + 0x110) = *(int *)((int)this + 0x110) - (iVar3 + 1) / 2;
    *(uint *)((int)this + 0x114) = *(int *)((int)this + 0x114) - (uVar4 + 1);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  return 1;
}
