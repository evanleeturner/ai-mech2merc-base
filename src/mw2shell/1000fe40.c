/* SPDX-License-Identifier: MIT */
/* mw2shell 1000fe40 */
/* mw2shell 1000fe40: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
int __stdcall FUN_1000ce20(void);
int __stdcall FUN_1000d440(void);
undefined __cdecl FUN_1000fdb0(undefined4 * param_1);

void __stdcall FUN_1000fe40(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_48 [32];
  char local_28 [32];
  int local_8;
  
  pcVar2 = (char *)FUN_1000ce20();
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = local_48;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = (char *)(DAT_10083508 + 0x102);
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_8 = FUN_1000d440();
    local_8 = *(int *)(DAT_10083508 + 0x12a) + local_8;
    FUN_1000fdb0((undefined4 *)local_48);
  }
  return;
}
