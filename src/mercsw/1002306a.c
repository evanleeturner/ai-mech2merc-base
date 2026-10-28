/* SPDX-License-Identifier: MIT */
/* mercsw 1002306a */
/* mercsw 1002306a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7ba0[];
undefined4 __cdecl FUN_1004c610(int param_1, int param_2);
undefined4 __cdecl FUN_10063287(int param_1);
undefined4 __cdecl FUN_10023898(int param_1, int param_2);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_10062d5f(int param_1, int param_2);

int __cdecl FUN_1002306a(int param_1, undefined4 * param_2)

{
  int iVar1;
  int iVar2;
  undefined *local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *param_2 = 0;
  local_14 = 0;
  local_8 = 0;
  while ((local_14 < *(int *)(iVar1 + 0x3dc) && (local_8 == 0))) {
    local_8 = 0;
    if (*(int *)(iVar1 + 0x3e0) != -1) {
      local_18 = *(int *)(iVar1 + 0x3e0) * 0x40 + *(int *)(iVar1 + 0x54);
      local_c = *(int *)(local_18 + 4);
      local_1c = DAT_100a7ba0 + local_c * 0x68;
      iVar2 = FUN_1004c610(param_1,(int)local_1c);
      if ((0 < iVar2) && (iVar2 < 3)) {
        local_8 = 1;
      }
    }
    if ((((local_8 != 0) &&
         (local_8 = 0,
         ((int)((unsigned int)(*(int *)(iVar1 + 0x3cc)) + (unsigned int)(*(int *)(local_1c + 0x44)))) >> 0x10 < *(int *)(param_1 + 0x1b0)))
        && (iVar2 = FUN_10063287(iVar1), iVar2 == 1)) &&
       ((iVar2 = FUN_10023898(iVar1,local_18), iVar2 != 0 &&
        (iVar2 = FUN_10051f43(*(int *)(local_1c + 0x54) / 0x5a + 1), iVar2 == 0)))) {
      local_8 = 1;
    }
    if (local_8 == 0) {
      FUN_10062d5f(iVar1,1);
    }
    local_14 = local_14 + 1;
  }
  if (local_8 != 0) {
    if (local_c == 0) {
      **(int **)(param_1 + 0x4c) = **(int **)(param_1 + 0x4c) + 0x1e000;
    }
    else if (local_c == 4) {
      **(int **)(param_1 + 0x4c) = **(int **)(param_1 + 0x4c) + 0x3c000;
    }
    if (*(int *)(local_1c + 0x28) != 0) {
      *param_2 = 1;
    }
  }
  return local_8;
}
