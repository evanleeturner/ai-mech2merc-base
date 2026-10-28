/* SPDX-License-Identifier: MIT */
/* mercsw 1003545c */
/* mercsw 1003545c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7b60;
extern undefined DAT_100aaf70[];
extern undefined4 DAT_100b36d8;
extern undefined4 DAT_10168290;
extern undefined DAT_101682a0[];
extern undefined DAT_101683a0[];
extern undefined * PTR_DAT_100aaf68;
undefined __stdcall FUN_1000ec6b(void);
undefined __cdecl FUN_1003b59a(int param_1);
undefined __cdecl FUN_1003b954(int * param_1);
undefined __cdecl FUN_1003b2f0(undefined * param_1);

void __stdcall FUN_1003545c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(DAT_101683a0);
  puVar3 = (undefined4 *)(DAT_100aaf70);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(DAT_101682a0);
  puVar3 = (undefined4 *)PTR_DAT_100aaf68;
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_100b36d8 = DAT_10168290;
  FUN_1000ec6b();
  FUN_1003b59a((int)PTR_DAT_100aaf68);
  FUN_1003b954((int *)PTR_DAT_100aaf68);
  FUN_1003b2f0(PTR_DAT_100aaf68);
  DAT_100a7b60 = 0;
  return;
}
