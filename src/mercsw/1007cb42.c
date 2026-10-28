/* SPDX-License-Identifier: MIT */
/* mercsw 1007cb42 */
/* mercsw 1007cb42: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100b6800[];
extern undefined DAT_100cf0d0[];
extern undefined DAT_100cf0d4[];
undefined __cdecl FUN_1007c28e(int * param_1, undefined * param_2);

void __cdecl FUN_1007cb42(int * param_1, undefined * param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  local_8 = 0;
  while( true ) {
    if (0x7f < local_8) goto LAB_1007cbaf;
    if (*(int **)(DAT_100cf0d4 + local_8 * 0x14) == param_1) break;
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined4 *)(DAT_100b6800);
  puVar3 = (undefined4 *)(DAT_100cf0d0 + local_8 * 0x14);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
LAB_1007cbaf:
  FUN_1007c28e(param_1,param_2);
  return;
}
