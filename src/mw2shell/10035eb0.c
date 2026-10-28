/* SPDX-License-Identifier: MIT */
/* mw2shell 10035eb0 */
/* mw2shell 10035eb0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10093900[];
extern undefined DAT_10093a18[];
extern undefined4 DAT_100b07fc;
extern undefined DAT_100b0800[];
extern undefined DAT_100b0914[];
extern undefined4 PTR_DAT_10093b2c;

void __stdcall FUN_10035eb0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_100b07fc = (uint)((undefined4 *)PTR_DAT_10093b2c == (undefined4 *)(DAT_10093900));
  puVar2 = (undefined4 *)(DAT_10093900);
  puVar3 = (undefined4 *)(DAT_100b0800);
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(DAT_10093a18);
  puVar3 = (undefined4 *)(DAT_100b0914);
  for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}
