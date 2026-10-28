/* SPDX-License-Identifier: MIT */
/* mercsw 100603ff */
/* mercsw 100603ff: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7b60;
extern int DAT_100b36d0;
extern undefined DAT_100f3040[];
extern undefined DAT_100f3044[];
extern undefined DAT_100f3048[];
extern undefined DAT_100f304c[];
extern undefined DAT_100f3050[];
extern undefined DAT_101f52e0[];
extern undefined4 PTR_DAT_100aaf68;

void __cdecl FUN_100603ff(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (((-1 < param_1) && (param_1 < 0xb)) && (DAT_100b36d0 != param_1)) {
    iVar1 = param_1 * 0x14;
    *(undefined4 *)(PTR_DAT_100aaf68 + 0x2c) = 0;
    *(undefined4 *)(PTR_DAT_100aaf68 + 0x34) = 0;
    *(int *)(PTR_DAT_100aaf68 + 0x30) =
         *(int *)(DAT_100f304c + iVar1) - *(int *)(DAT_100f3044 + iVar1);
    *(int *)(PTR_DAT_100aaf68 + 0x38) =
         *(int *)(DAT_100f3050 + iVar1) - *(int *)(DAT_100f3048 + iVar1);
    *(undefined4 *)(PTR_DAT_100aaf68 + 0x4c) = 0;
    *(undefined4 *)(PTR_DAT_100aaf68 + 0x50) = 0;
    puVar3 = (undefined4 *)(DAT_100f3040 + iVar1);
    puVar4 = (undefined4 *)(DAT_101f52e0);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_100b36d0 = param_1;
    DAT_100a7b60 = 1;
  }
  return;
}
