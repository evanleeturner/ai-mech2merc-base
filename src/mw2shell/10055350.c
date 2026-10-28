/* SPDX-License-Identifier: MIT */
/* mw2shell 10055350 */
/* mw2shell 10055350: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern char DAT_100c11d8[];
int __stdcall FUN_1000ce20(void);
char * __cdecl FUN_1005bb20(char * param_1);

void __cdecl FUN_10055350(char * param_1, char * param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  
  uVar4 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar8 = 0;
  iVar5 = 0;
  if (0 < (int)(~uVar4 - 1)) {
    do {
      iVar1 = DAT_10083508;
      cVar2 = param_1[iVar8];
      iVar9 = iVar8;
      if (cVar2 == '\\') {
        iVar9 = iVar8 + 1;
        switch(param_1[iVar8 + 1]) {
        case 'M':
        case 'm':
          iVar8 = iVar8 + 2;
          DAT_100c11d8[iVar5] = 0;
          uVar6 = 0xffffffff;
          pcVar3 = (char *)(iVar1 + 0x102);
          do {
            pcVar11 = pcVar3;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar11 = pcVar3 + 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar3 = DAT_100c11d8;
          do {
            pcVar10 = pcVar3;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar10 = pcVar3 + 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar2 != '\0');
          pcVar3 = pcVar11 + -uVar6;
          pcVar11 = pcVar10 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar3 = DAT_100c11d8;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          iVar5 = ~uVar6 - 1;
          break;
        default:
          DAT_100c11d8[iVar5] = 0x5c;
          iVar5 = iVar5 + 1;
          cVar2 = param_1[iVar9];
          goto LAB_100554b7;
        case 'P':
        case 'p':
          DAT_100c11d8[iVar5] = 0;
          iVar8 = iVar8 + 2;
          pcVar3 = (char *)FUN_1000ce20();
          if (pcVar3 != (char *)0x0) {
            uVar6 = 0xffffffff;
            do {
              pcVar11 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar11 = pcVar3 + 1;
              cVar2 = *pcVar3;
              pcVar3 = pcVar11;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            iVar5 = -1;
            pcVar3 = DAT_100c11d8;
            do {
              pcVar10 = pcVar3;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar10 = pcVar3 + 1;
              cVar2 = *pcVar3;
              pcVar3 = pcVar10;
            } while (cVar2 != '\0');
            pcVar3 = pcVar11 + -uVar6;
            pcVar11 = pcVar10 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar11 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
          uVar6 = 0xffffffff;
          pcVar3 = DAT_100c11d8;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          iVar5 = ~uVar6 - 1;
          break;
        case 'Q':
        case 'q':
          iVar8 = iVar8 + 2;
          DAT_100c11d8[iVar5] = 0;
          uVar6 = 0xffffffff;
          pcVar3 = param_2;
          do {
            pcVar11 = pcVar3;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar11 = pcVar3 + 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar3 = DAT_100c11d8;
          do {
            pcVar10 = pcVar3;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar10 = pcVar3 + 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar2 != '\0');
          pcVar3 = pcVar11 + -uVar6;
          pcVar11 = pcVar10 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar3 = DAT_100c11d8;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          iVar5 = ~uVar6 - 1;
          break;
        case 'R':
        case 'r':
          DAT_100c11d8[iVar5] = 0;
          iVar8 = iVar8 + 2;
        }
      }
      else {
LAB_100554b7:
        DAT_100c11d8[iVar5] = cVar2;
        iVar8 = iVar9 + 1;
        iVar5 = iVar5 + 1;
      }
    } while (iVar8 < (int)(~uVar4 - 1));
  }
  DAT_100c11d8[iVar5] = 0;
  FUN_1005bb20(DAT_100c11d8);
  return;
}
