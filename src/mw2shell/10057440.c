/* SPDX-License-Identifier: MIT */
/* mw2shell 10057440 */
/* mw2shell 10057440: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_100a3638[];
extern undefined2 DAT_100a363c;
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

int __cdecl FUN_10057440(undefined4 param_1, int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_40 [32];
  char local_20 [32];
  
  if (param_2 == 0) {
    return 0;
  }
  _sprintf(local_20,DAT_100a3638,param_1);
  uVar2 = 0xffffffff;
  pcVar8 = local_20;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  iVar5 = 0;
  for (iVar3 = ~uVar2 - 2; (int)(uint)(local_20[0] == '-') <= iVar3; iVar3 = iVar3 + -1) {
    if (iVar6 < 3) {
      iVar6 = iVar6 + 1;
    }
    else {
      iVar6 = 1;
      local_40[iVar5] = ',';
      iVar5 = iVar5 + 1;
    }
    local_40[iVar5] = local_20[iVar3];
    iVar5 = iVar5 + 1;
  }
  local_40[iVar5] = '\0';
  if ((local_20[0] == '-') != 0) {
    iVar3 = -1;
    pcVar8 = local_40;
    do {
      pcVar7 = pcVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar7;
    } while (cVar1 != '\0');
    *(undefined2 *)(pcVar7 + -1) = DAT_100a363c;
  }
  uVar2 = 0;
  iVar3 = -1;
  pcVar8 = local_40;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    do {
      uVar4 = 0xffffffff;
      pcVar8 = local_40;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar3 = ~uVar4 - uVar2;
      uVar2 = uVar2 + 1;
      uVar4 = 0xffffffff;
      *(char *)(param_2 + -1 + uVar2) = local_40[iVar3 + -2];
      pcVar8 = local_40;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
    } while (uVar2 < ~uVar4 - 1);
  }
  *(undefined1 *)(param_2 + uVar2) = 0;
  return param_2;
}
