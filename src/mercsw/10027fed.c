/* SPDX-License-Identifier: MIT */
/* mercsw 10027fed */
/* mercsw 10027fed: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1004d47f(int param_1);
int __cdecl FUN_1002b6fe(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_1004d0e5(int param_1, int param_2);

int __cdecl FUN_10027fed(int param_1)

{
  int iVar1;
  int iVar2;
  int local_34;
  int local_2c [8];
  int local_c;
  int local_8;
  
  local_8 = FUN_1004d47f(param_1);
  local_34 = -1;
  iVar2 = FUN_1002b6fe(param_1,(int)local_2c,1);
  if (iVar2 != 0) {
    for (local_c = 0; local_c < iVar2; local_c = local_c + 1) {
      iVar1 = local_2c[local_c];
      if ((*(int *)(iVar1 + 4) != local_8) && ((*(ushort *)(iVar1 + 0x14) & 6) == 0)) {
        local_34 = *(int *)(iVar1 + 4);
        break;
      }
    }
    FUN_1004d0e5(param_1,local_34);
  }
  return local_34;
}
