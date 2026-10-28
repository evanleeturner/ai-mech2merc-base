/* SPDX-License-Identifier: MIT */
/* mw2shell 10017ec0 */
/* mw2shell 10017ec0: Ghidra's C, repaired by tools/ghidra_repair.py */
uint __cdecl FUN_10017f30(int param_1, int param_2);

void __cdecl FUN_10017ec0(int param_1, int param_2, char param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_10017f30(param_1,param_2);
    if (uVar1 != 0xffffffff) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      if (param_3 == '\x01') {
        if (*(code **)(param_1 + 0x15) != (code *)0x0) {
          ((void (*)(undefined4))((**(code **)(param_1 + 0x15))))(*(undefined4 *)(*(int *)(param_1 + 0x11) + uVar1 * 4));
        }
      }
      if ((int)uVar1 < *(int *)(param_1 + 4)) {
        iVar3 = uVar1 * 4;
        do {
          uVar1 = uVar1 + 1;
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0x11) + iVar3);
          iVar3 = iVar3 + 4;
          *puVar2 = puVar2[1];
        } while ((int)uVar1 < *(int *)(param_1 + 4));
      }
    }
  }
  return;
}
