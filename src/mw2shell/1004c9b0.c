/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c9b0 */
/* mw2shell 1004c9b0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern char DAT_1009b750[];
extern undefined2 DAT_1009b754;
extern undefined DAT_1009b756;
extern undefined2 DAT_1009b774;
extern undefined DAT_1009b776;
extern undefined4 DAT_100a67ac;
extern undefined DAT_100bc9b8[];
extern undefined4 PTR_s_LRM_20__C__1008517c[];
extern char s__d__s_1009b758[];
extern char s__d_tons___s__ammo_1009b760[];
extern char s__nSalvaged_weapons__n_1009b738[];
extern char s__nThere_were_no_weapons_salvaged_1009b778[];
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __cdecl FUN_1004c9b0(char * param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar13;
  int local_10c;
  int local_108;
  int local_104;
  char local_100 [256];
  
  iVar8 = 0;
  bVar2 = false;
  local_108 = 0;
  if (0 < *(int *)(DAT_100a67ac + 4)) {
    do {
      iVar3 = FUN_10018060(DAT_100a67ac,iVar8);
      if (*(char *)(iVar3 + 9) == '\x01') {
        local_108 = local_108 + 1;
      }
      DAT_100bc9b8[iVar8] = *(char *)(iVar3 + 9);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(DAT_100a67ac + 4));
  }
  if (local_108 < 1) {
    _sprintf(local_100,s__nThere_were_no_weapons_salvaged_1009b778);
    uVar6 = 0xffffffff;
    pcVar12 = local_100;
    do {
      pcVar9 = pcVar12;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    do {
      pcVar12 = param_1;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar12 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar12;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -uVar6;
    pcVar12 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  else {
    _sprintf(local_100,s__nSalvaged_weapons__n_1009b738);
    uVar6 = 0xffffffff;
    pcVar12 = local_100;
    do {
      pcVar9 = pcVar12;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar12 = param_1;
    do {
      pcVar11 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar11 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar1 != '\0');
    pcVar12 = pcVar9 + -uVar6;
    pcVar9 = pcVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_104 = 0;
    local_10c = 0;
    if (0 < *(int *)(DAT_100a67ac + 4)) {
      do {
        piVar4 = (int *)FUN_10018060(DAT_100a67ac,local_10c);
        if (*(char *)((int)piVar4 + 9) != '\0') {
          iVar8 = 1;
          local_104 = local_104 + 1;
          iVar3 = local_10c + 1;
          *(undefined1 *)((int)piVar4 + 9) = 0;
          if (iVar3 < *(int *)(DAT_100a67ac + 4)) {
            do {
              piVar5 = (int *)FUN_10018060(DAT_100a67ac,iVar3);
              if ((*piVar5 == *piVar4) && (*(char *)((int)piVar5 + 9) == '\x01')) {
                *(undefined1 *)((int)piVar5 + 9) = 0;
                iVar8 = iVar8 + 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(DAT_100a67ac + 4));
          }
          if (-1 < *piVar4) {
            uVar6 = 0xffffffff;
            pcVar12 = DAT_1009b750;
            do {
              pcVar9 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar9 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar9;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar9 + -uVar6;
            pcVar9 = local_100;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar9 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar9 = pcVar9 + 1;
            }
            if (!bVar2) {
              iVar3 = -1;
              bVar2 = true;
              pcVar12 = param_1;
              do {
                pcVar9 = pcVar12;
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                pcVar9 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar9;
              } while (cVar1 != '\0');
              *(undefined2 *)(pcVar9 + -1) = DAT_1009b754;
              pcVar9[1] = DAT_1009b756;
            }
            if ((char)piVar4[2] == '\0') {
              puVar13 = (undefined *)(PTR_s_LRM_20__C__1008517c[*piVar4 * 0x10]);
              pcVar12 = s__d__s_1009b758;
LAB_1004cb6d:
              _sprintf(local_100,pcVar12,iVar8,puVar13);
            }
            else if ((char)piVar4[2] == '\x01') {
              puVar13 = (undefined *)(PTR_s_LRM_20__C__1008517c[*piVar4 * 0x10]);
              pcVar12 = s__d_tons___s__ammo_1009b760;
              goto LAB_1004cb6d;
            }
            uVar6 = 0xffffffff;
            pcVar12 = local_100;
            do {
              pcVar9 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar9 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar9;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar8 = -1;
            pcVar12 = param_1;
            do {
              pcVar11 = pcVar12;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar11 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar11;
            } while (cVar1 != '\0');
            pcVar12 = pcVar9 + -uVar6;
            pcVar9 = pcVar11 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar9 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar9 = pcVar9 + 1;
            }
            if (local_104 < local_108) {
              iVar8 = -1;
              pcVar12 = param_1;
              do {
                pcVar9 = pcVar12;
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                pcVar9 = pcVar12 + 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar9;
              } while (cVar1 != '\0');
              *(undefined2 *)(pcVar9 + -1) = DAT_1009b774;
              pcVar9[1] = DAT_1009b776;
            }
          }
        }
        local_10c = local_10c + 1;
      } while (local_10c < *(int *)(DAT_100a67ac + 4));
    }
  }
  iVar8 = 0;
  if (0 < *(int *)(DAT_100a67ac + 4)) {
    do {
      iVar10 = iVar8 + 1;
      iVar3 = FUN_10018060(DAT_100a67ac,iVar8);
      *(undefined1 *)(iVar3 + 9) = DAT_100bc9b8[iVar8];
      iVar8 = iVar10;
    } while (iVar10 < *(int *)(DAT_100a67ac + 4));
  }
  return;
}
