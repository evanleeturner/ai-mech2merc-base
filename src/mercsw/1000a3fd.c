/* SPDX-License-Identifier: MIT */
/* mercsw 1000a3fd */
/* mercsw 1000a3fd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_101f52d0;
extern undefined DAT_101f52e0[];
undefined4 * __cdecl FUN_10003ea2(int param_1, int * param_2);
undefined __stdcall FUN_1000898c(void);

undefined4 __cdecl FUN_1000a3fd(int param_1, undefined4 * param_2, int * param_3, int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_c;
  undefined4 local_8;
  
  puVar4 = (undefined4 *)*param_2;
  local_8 = 1;
  local_c = FUN_10003ea2(param_1,param_3);
  if ((local_c == (undefined4 *)0x0) && (local_8 = 0, param_4 != 0)) {
    if (param_1 == 0) {
      local_c = *(undefined4 **)(param_3[1] + 8);
    }
    else {
      local_c = *(undefined4 **)(param_3[1] + 4);
    }
  }
  if (local_c != (undefined4 *)0x0) {
    puVar2 = puVar4;
    puVar3 = (undefined4 *)param_2[1];
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = local_c;
    puVar3 = puVar4;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1000898c();
    puVar2 = (undefined4 *)param_2[1];
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    if (param_4 != 0) {
      puVar4 = (undefined4 *)(DAT_101f52e0);
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *local_c;
        local_c = local_c + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_101f52d0 = 1;
    }
  }
  return local_8;
}
