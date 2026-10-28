/* SPDX-License-Identifier: MIT */
/* mw2shell 1004cc80 */
/* mw2shell 1004cc80: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined2 DAT_1009b7b0;
extern undefined DAT_1009b7b2;
extern char DAT_1009b7b4[];
extern char DAT_1009b7b8[];
extern undefined2 DAT_1009b7bc;
extern undefined DAT_1009b7be;
extern undefined2 DAT_1009b7c0;
extern undefined DAT_1009b7c2;
extern undefined4 DAT_100a67b0;
extern char s__nSalvaged_Mechs__n_1009b79c[];
extern char s__nThere_were_no_mechs_salvaged___1009b7c4[];
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined * __cdecl FUN_10009840(char * param_1);

void __cdecl FUN_1004cc80(char * param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int local_108;
  int local_104;
  char local_100 [256];
  
  iVar7 = 0;
  iVar8 = 0;
  bVar2 = false;
  local_108 = 0;
  if (0 < *(int *)(DAT_100a67b0 + 4)) {
    do {
      iVar7 = FUN_10018060(DAT_100a67b0,iVar8);
      if (*(char *)(iVar7 + 0x84e) == '\x01') {
        local_108 = local_108 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(DAT_100a67b0 + 4));
  }
  if (local_108 < 1) {
    _sprintf(local_100,s__nThere_were_no_mechs_salvaged___1009b7c4);
    uVar4 = 0xffffffff;
    pcVar3 = local_100;
    do {
      pcVar10 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar7 = -1;
    do {
      pcVar3 = param_1;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar3 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar3;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -uVar4;
    pcVar3 = pcVar3 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar3 = pcVar3 + 1;
    }
    return;
  }
  _sprintf(local_100,s__nSalvaged_Mechs__n_1009b79c);
  uVar4 = 0xffffffff;
  pcVar3 = local_100;
  do {
    pcVar10 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar8 = -1;
  pcVar3 = param_1;
  do {
    pcVar9 = pcVar3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  iVar8 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_104 = 0;
  if (0 < *(int *)(DAT_100a67b0 + 4)) {
    do {
      if (*(char *)(iVar7 + 0x84e) != '\0') {
        local_104 = local_104 + 1;
        iVar7 = FUN_10018060(DAT_100a67b0,iVar8);
        if (!bVar2) {
          iVar6 = -1;
          bVar2 = true;
          pcVar3 = param_1;
          do {
            pcVar10 = pcVar3;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar10 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar1 != '\0');
          *(undefined2 *)(pcVar10 + -1) = DAT_1009b7b0;
          pcVar10[1] = DAT_1009b7b2;
        }
        pcVar3 = (char *)(iVar7 + 0x100);
        iVar6 = -1;
        pcVar10 = pcVar3;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (iVar6 == -2) {
          pcVar3 = (char *)(FUN_10009840((char *)(iVar7 + 0x823)));
          pcVar10 = DAT_1009b7b8;
        }
        else {
          pcVar10 = DAT_1009b7b4;
        }
        _sprintf(local_100,pcVar10,pcVar3);
        uVar4 = 0xffffffff;
        pcVar3 = local_100;
        do {
          pcVar10 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar10 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar10;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar6 = -1;
        pcVar3 = param_1;
        do {
          pcVar9 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        pcVar3 = pcVar10 + -uVar4;
        pcVar10 = pcVar9 + -1;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar10 = pcVar10 + 1;
        }
        if (local_104 < local_108) {
          iVar6 = -1;
          pcVar3 = param_1;
          do {
            pcVar10 = pcVar3;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar10 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar1 != '\0');
          *(undefined2 *)(pcVar10 + -1) = DAT_1009b7bc;
          pcVar10[1] = DAT_1009b7be;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(DAT_100a67b0 + 4));
  }
  iVar7 = -1;
  do {
    pcVar3 = param_1;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  *(undefined2 *)(pcVar3 + -1) = DAT_1009b7c0;
  pcVar3[1] = DAT_1009b7c2;
  return;
}
