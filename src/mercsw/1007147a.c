/* SPDX-License-Identifier: MIT */
/* mercsw 1007147a */
/* mercsw 1007147a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b4840[];
extern undefined DAT_100b4844[];
extern undefined DAT_100b484d[];

void __cdecl FUN_1007147a(int * param_1, char * param_2, undefined4 param_3, char * param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (iVar2 = *(int *)(*param_1 + 4), iVar2 < 0x3d)
     ) {
    *(undefined4 *)(DAT_100b4840 + iVar2 * 0x16) = param_3;
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar6 = (char *)(DAT_100b4844 + iVar2 * 0x16);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_4;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar6 = (char *)(DAT_100b484d + iVar2 * 0x16);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  return;
}
