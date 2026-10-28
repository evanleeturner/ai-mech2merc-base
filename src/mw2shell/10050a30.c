/* SPDX-License-Identifier: MIT */
/* mw2shell 10050a30 */
/* mw2shell 10050a30: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100bd7c8[];

void __cdecl FUN_10050a30(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  if (param_2 < 8) {
    iVar1 = param_3 + 1 + param_2 * 0xc;
    puVar2 = (undefined4 *)(DAT_100bd7c8 + iVar1);
    piVar5 = (int *)(iVar1 * 4 + 0x368 + param_1);
    local_8 = 8 - param_2;
    do {
      if (param_3 + 1 < 0xc) {
        iVar1 = 0xc - (param_3 + 1);
        puVar3 = puVar2;
        piVar4 = piVar5;
        do {
          if (*piVar4 == param_4) {
            *puVar3 = 1;
          }
          puVar3 = puVar3 + 1;
          piVar4 = piVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      piVar5 = piVar5 + 0xc;
      puVar2 = puVar2 + 0xc;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}
