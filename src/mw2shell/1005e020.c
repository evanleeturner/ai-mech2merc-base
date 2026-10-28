/* SPDX-License-Identifier: MIT */
/* mw2shell 1005e020 */
/* mw2shell 1005e020: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100986b4;
extern undefined4 PTR_DAT_1009860c;
ushort * __cdecl FUN_100425b0(int param_1, uint param_2, int * param_3);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
undefined __cdecl FUN_10042590(int param_1, int * param_2);

int __cdecl FUN_1005e020(uint param_1, char * param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int local_10;
  char local_c [12];
  
  local_10 = -1;
  puVar1 = FUN_100425b0(DAT_100986b4,param_1,(int *)PTR_DAT_1009860c);
  if (puVar1 != (ushort *)0x0) {
    puVar5 = puVar1 + 6;
    iVar4 = 0;
    do {
      iVar2 = iVar4 + 1;
      local_c[iVar4] = -*(char *)((int)puVar5 + iVar4);
      iVar4 = iVar2;
    } while (iVar2 < 10);
    iVar4 = 0;
    if (0 < (short)puVar1[4]) {
      do {
        iVar2 = __strcmpi(local_c,param_2);
        if (iVar2 == 0) break;
        puVar5 = puVar5 + 6;
        iVar4 = iVar4 + 1;
        iVar2 = 0;
        do {
          iVar3 = iVar2 + 1;
          local_c[iVar2] = -*(char *)((int)puVar5 + iVar2);
          iVar2 = iVar3;
        } while (iVar3 < 10);
      } while (iVar4 < (short)puVar1[4]);
    }
    iVar4 = __strcmpi(local_c,param_2);
    if (iVar4 == 0) {
      local_10 = (int)(short)puVar5[5];
    }
    FUN_10042590(param_1,(int *)PTR_DAT_1009860c);
  }
  return local_10;
}
