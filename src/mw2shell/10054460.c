/* SPDX-License-Identifier: MIT */
/* mw2shell 10054460 */
/* mw2shell 10054460: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1009c558;
extern char DAT_100bd950[];
extern undefined4 DAT_100bfd98[];
extern char s_Default_Config_1009ff50[];
undefined __stdcall FUN_10054000(void);
undefined __stdcall FUN_100540d0(void);

void __stdcall FUN_10054460(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  uVar2 = DAT_1009c558;
  iVar6 = 0;
  FUN_10054000();
  do {
    DAT_1009c558 = iVar6;
    if (DAT_100bfd98[iVar6] != 0) {
      FUN_100540d0();
    }
    iVar6 = DAT_1009c558 + 1;
  } while (iVar6 < 0x10);
  uVar3 = 0xffffffff;
  pcVar5 = s_Default_Config_1009ff50;
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = DAT_100bd950;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  DAT_1009c558 = uVar2;
  return;
}
