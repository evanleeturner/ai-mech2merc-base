/* SPDX-License-Identifier: MIT */
/* mercsw 10044933 */
/* mercsw 10044933: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined4 __cdecl FUN_10023898(int param_1, int param_2);

undefined4 __cdecl FUN_10044933(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_8;
  
  bVar1 = false;
  if (param_1 != 0) {
    for (local_8 = 0; (int)local_8 < *(int *)(param_1 + 0x3dc); local_8 = local_8 + 1) {
      iVar2 = local_8 * 0x40 + *(int *)(param_1 + 0x54);
      if ((*(int *)(iVar2 + 8) != -1) && (iVar2 = FUN_10023898(param_1,iVar2), iVar2 != 0)) {
        bVar1 = true;
        break;
      }
    }
  }
  if ((bVar1) || (*(int *)(param_1 + 0x3dc) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
