/* SPDX-License-Identifier: MIT */
/* mercsw 100361de */
/* mercsw 100361de: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10036142(int param_1);

undefined4 __cdecl FUN_100361de(undefined4 param_1, int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_10036142(*(int *)(param_2 + 8));
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)(*(int *)(param_2 + 0xc) * 0x14 + 0x18 + param_2);
      puVar4 = (undefined4 *)(param_2 + 0x18);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = (undefined4 *)((*(int *)(param_2 + 0xc) + -1) * 0x14 + 0x18 + param_2);
      puVar4 = (undefined4 *)(param_2 + 0x2c);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 2;
    }
    uVar1 = 1;
  }
  return uVar1;
}
