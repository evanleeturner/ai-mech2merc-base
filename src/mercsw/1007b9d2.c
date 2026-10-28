/* SPDX-License-Identifier: MIT */
/* mercsw 1007b9d2 */
/* mercsw 1007b9d2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab2d4;
int __cdecl FUN_1007b890(uint param_1, char * param_2);
undefined * __cdecl FUN_1007bac8(undefined4 param_1);
int __cdecl FUN_10070f83(int param_1, char * param_2);

int __cdecl FUN_1007b9d2(uint param_1, char * param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_84 [128];
  
  iVar2 = FUN_1007b890(param_1,param_2);
  if (iVar2 == -1) {
    if (DAT_100ab2d4 == 0) {
      iVar2 = -1;
    }
    else {
      uVar4 = 0xffffffff;
      do {
        pcVar3 = param_2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar3 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar3;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar3 + -uVar4;
      pcVar7 = local_84;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar3 = (char *)(FUN_1007bac8(param_1));
      uVar4 = 0xffffffff;
      do {
        pcVar7 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar2 = -1;
      pcVar3 = local_84;
      do {
        pcVar6 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 != '\0');
      pcVar3 = pcVar7 + -uVar4;
      pcVar7 = pcVar6 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      iVar2 = FUN_10070f83(DAT_100ab2d4,local_84);
      if (iVar2 == -1) {
        iVar2 = -1;
      }
      else {
        iVar2 = iVar2 + 0xf000;
      }
    }
  }
  return iVar2;
}
