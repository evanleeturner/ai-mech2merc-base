/* SPDX-License-Identifier: MIT */
/* mw2shell 10050a10 */
/* mw2shell 10050a10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100bd7c8[];
extern undefined DAT_100bd948[];

void __stdcall FUN_10050a10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(DAT_100bd7c8);
  do {
    puVar3 = puVar2 + 0xc;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = puVar3;
  } while (puVar3 < (undefined4 *)(DAT_100bd948));
  return;
}
