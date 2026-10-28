/* SPDX-License-Identifier: MIT */
/* mercsw 1007153a */
/* mercsw 1007153a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b4d68[];
undefined4 * __cdecl FUN_10071674(undefined4 * param_1);

void __cdecl FUN_1007153a(int * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (iVar1 = *(int *)(*param_1 + 4), iVar1 < 0x3d)
     ) {
    puVar2 = FUN_10071674(*(undefined4 **)(*param_1 + 0x40));
    *(undefined4 **)(DAT_100b4d68 + iVar1 * 4) = puVar2;
  }
  return;
}
