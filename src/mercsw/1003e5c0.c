/* SPDX-License-Identifier: MIT */
/* mercsw 1003e5c0 */
/* mercsw 1003e5c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af0a0;
extern undefined4 DAT_100af0a4;
extern undefined4 DAT_100b3904;
extern undefined DAT_100c7b60[];
extern undefined4 DAT_100c7b70;
extern undefined DAT_100c7b78[];
extern undefined4 DAT_100c7b88;
extern undefined DAT_100c7b90[];
extern undefined DAT_100c7ba0[];
extern undefined DAT_100c7bb0[];
extern undefined DAT_100c7bd8[];
extern undefined DAT_100c7cd8[];
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1003e768(int param_1);
undefined __cdecl FUN_1001b024(int * param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6);
int __cdecl FUN_10067af1(int * param_1);

undefined4 __stdcall FUN_1003e5c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((DAT_100c7b70 < 0) || (DAT_100af0a0 <= DAT_100c7b70)) {
    DAT_100af0a4 = 0;
  }
  if (DAT_100af0a4 == 0) {
    uVar1 = 0;
  }
  else {
    DAT_100c7b88 = DAT_100c7b88 + DAT_100b3904;
    if (*(int *)(DAT_100c7bd8 + DAT_100c7b70 * 0x1c) <= (int)DAT_100c7b88) {
      DAT_100c7b88 = 0;
      DAT_100c7b70 = DAT_100c7b70 + 1;
      if (DAT_100c7b70 < DAT_100af0a0) {
        FUN_1003e768(DAT_100c7b70);
      }
    }
    FUN_1001b024(&local_10,&local_14,&local_18,&local_1c,&local_8,&local_c);
    iVar2 = FUN_10067af1((int *)DAT_100c7ba0);
    *(int *)PTR_DAT_100aaf68 = local_1c + iVar2;
    iVar2 = FUN_10067af1((int *)(DAT_100c7cd8));
    *(int *)(PTR_DAT_100aaf68 + 4) = local_8 + iVar2;
    iVar2 = FUN_10067af1((int *)DAT_100c7b78);
    *(int *)(PTR_DAT_100aaf68 + 8) = local_c + iVar2;
    iVar2 = FUN_10067af1((int *)DAT_100c7bb0);
    *(int *)(PTR_DAT_100aaf68 + 0x10) = local_10 + iVar2;
    iVar2 = FUN_10067af1((int *)DAT_100c7b60);
    *(int *)(PTR_DAT_100aaf68 + 0xc) = local_14 + iVar2;
    iVar2 = FUN_10067af1((int *)DAT_100c7b90);
    *(int *)(PTR_DAT_100aaf68 + 0x14) = local_18 + iVar2;
    uVar1 = 1;
  }
  return uVar1;
}
