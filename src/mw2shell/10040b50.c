/* SPDX-License-Identifier: MIT */
/* mw2shell 10040b50 */
/* mw2shell 10040b50: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100982a8;
extern undefined4 DAT_100982ac;
extern undefined4 DAT_100982b0;
extern undefined4 DAT_100982b4;
extern undefined4 DAT_100982b8;
extern undefined DAT_100982bc;
extern undefined4 DAT_100982c0;
extern undefined4 DAT_100982c4;
extern undefined4 DAT_100982c8;
extern undefined4 DAT_100982cc;
extern undefined4 DAT_100982d0;
extern undefined DAT_1009831c[];
extern undefined4 DAT_100ba008;
extern undefined4 DAT_100ba00c;
extern undefined DAT_100ba010[];

void __stdcall FUN_10040b50(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  DAT_100982a8 = 0;
  DAT_100982ac = 0;
  DAT_100982b0 = 0;
  DAT_100982b4 = 0;
  DAT_100982b8 = 0;
  DAT_100982bc = 0;
  DAT_100982c0 = 0;
  DAT_100982c4 = 0;
  DAT_100982c8 = 0;
  puVar4 = (undefined4 *)(DAT_100ba010);
  DAT_100ba008 = 0;
  DAT_100ba00c = 0;
  DAT_100982cc = 0;
  DAT_100982d0 = 0;
  do {
    uVar2 = 0xffffffff;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0xffffffff;
    pcVar6 = (char *)DAT_1009831c;
    do {
      pcVar5 = pcVar6;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar6 = (char *)(puVar4 + 3);
    puVar4 = puVar4 + 0xb;
    pcVar5 = pcVar5 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if ((undefined4 *)0x100ba1c7 < puVar4) {
      return;
    }
  } while( true );
}
