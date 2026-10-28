/* SPDX-License-Identifier: MIT */
/* mw2shell 1004cec0 */
/* mw2shell 1004cec0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1009b808;
extern undefined DAT_1009b80c;
extern undefined4 DAT_100a6798;
extern undefined4 DAT_100a67a4;
extern undefined4 DAT_100a67a8;
extern char s__s_died_in_battle_losing_a__s_ae_1009b810[];
extern char s__s_died_in_battle_losing_a__s_n_1009b7e8[];
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_1000ad70(int param_1, int param_2);
undefined4 __cdecl FUN_1000cf10(int param_1);
undefined * __cdecl FUN_10009840(char * param_1);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
char * __cdecl FUN_1000ae80(char * param_1);

void __cdecl FUN_1004cec0(char * param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char local_120 [5];
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  char local_100 [256];
  
  (void)local_11b;
  (void)local_11a;
  (void)local_119;
  iVar9 = 0;
  if (0 < *(int *)(DAT_100a67a4 + 4)) {
    do {
      iVar2 = FUN_10018060(DAT_100a67a4,iVar9);
      if (*(char *)(iVar2 + 0x2064) == '\0') {
        iVar3 = FUN_1000ad70(DAT_100a6798,*(int *)(iVar2 + 0x24));
        if (iVar3 != 0) {
          uVar4 = FUN_1000cf10(iVar3);
          if ((char)uVar4 == '\x01') {
            puVar5 = FUN_10009840((char *)(iVar3 + 0x81c));
            _sprintf(local_100,s__s_died_in_battle_losing_a__s_n_1009b7e8,iVar2,puVar5);
            uVar7 = 0xffffffff;
            pcVar6 = local_100;
            do {
              pcVar11 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar11 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar11;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar2 = -1;
            pcVar6 = param_1;
            do {
              pcVar10 = pcVar6;
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              pcVar10 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar10;
            } while (cVar1 != '\0');
            pcVar6 = pcVar11 + -uVar7;
            pcVar11 = pcVar10 + -1;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar11 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(DAT_100a67a4 + 4));
  }
  iVar9 = 0;
  if (0 < *(int *)(DAT_100a67a8 + 4)) {
    do {
      iVar2 = FUN_10018060(DAT_100a67a8,iVar9);
      if (*(char *)(iVar2 + 0x2c) == '\x01') {
        uVar7 = 0xffffffff;
        pcVar6 = (char *)(iVar2 + 0x4d);
        do {
          pcVar11 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar11;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar6 = pcVar11 + -uVar7;
        pcVar11 = local_120;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar11 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar3 = -1;
        local_11b = 0x4d;
        local_11a = 0x45;
        local_119 = 0x52;
        pcVar6 = local_120;
        do {
          pcVar11 = pcVar6;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar11 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar11;
        } while (cVar1 != '\0');
        *(undefined4 *)(pcVar11 + -1) = DAT_1009b808;
        pcVar11[3] = DAT_1009b80c;
        pcVar6 = FUN_1000ae80(local_120);
        uVar4 = FUN_1000cf10((int)pcVar6);
        if ((char)uVar4 == '\x01') {
          *(undefined1 *)(iVar2 + 0x5d) = 1;
          puVar5 = FUN_10009840(pcVar6 + 0x81c);
          _sprintf(local_100,s__s_died_in_battle_losing_a__s_ae_1009b810,iVar2,puVar5);
          uVar7 = 0xffffffff;
          pcVar6 = local_100;
          do {
            pcVar11 = pcVar6;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar11 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar11;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar2 = -1;
          pcVar6 = param_1;
          do {
            pcVar10 = pcVar6;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar10 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar10;
          } while (cVar1 != '\0');
          pcVar6 = pcVar11 + -uVar7;
          pcVar11 = pcVar10 + -1;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(DAT_100a67a8 + 4));
  }
  return;
}
