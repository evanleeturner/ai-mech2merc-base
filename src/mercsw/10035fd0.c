/* SPDX-License-Identifier: MIT */
/* mercsw 10035fd0 */
/* mercsw 10035fd0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100b38d8;
extern undefined4 DAT_100eef40[];
undefined4 __stdcall FUN_1002c39a(void);
int __cdecl FUN_1002ab38(int param_1);

undefined4 __cdecl FUN_10035fd0(undefined4 param_1, int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_14;
  int local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_1002c39a();
    if (iVar2 != 1) {
      puVar5 = (undefined4 *)(param_2 + 0x7c);
      puVar6 = (undefined4 *)(iVar2 * 0x14 + 0x18 + param_2);
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)(param_2 + 0x90);
      puVar6 = (undefined4 *)((iVar2 + 1) * 0x14 + 0x18 + param_2);
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(int *)(param_2 + 0xc) = iVar2 + 2;
      for (local_14 = 0; local_14 < iVar2 + -1; local_14 = local_14 + 1) {
        uVar3 = FUN_1002ab38(local_14 + 1);
        if ((uVar3 < DAT_100b38d8) && (*(short *)(DAT_100eef40[uVar3] + 0x176) == 0xc)) {
          *(undefined4 *)((local_14 * 4 + 4) * 5 + 0x18 + param_2) = 1;
          local_8 = local_8 + 1;
        }
      }
    }
    if ((iVar2 == 1) || (iVar2 + -1 == local_8)) {
      puVar5 = (undefined4 *)(param_2 + 0xa4);
      puVar6 = (undefined4 *)(param_2 + 0x18);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)(param_2 + 0x90);
      puVar6 = (undefined4 *)(param_2 + 0x2c);
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 2;
    }
    uVar1 = 1;
  }
  return uVar1;
}
