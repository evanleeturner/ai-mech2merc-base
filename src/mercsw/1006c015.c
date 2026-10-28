/* SPDX-License-Identifier: MIT */
/* mercsw 1006c015 */
/* mercsw 1006c015: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern int DAT_100b38d8;
extern undefined4 DAT_100b3d64;
extern undefined4 DAT_100b3d68;
extern undefined DAT_100b3d6c;
extern char DAT_100b3d70[];
extern char DAT_100b3d74[];
extern undefined4 DAT_100eef40[];
extern char * PTR_DAT_100af164;
char * __cdecl _strchr(char * _Str, int _Val);
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
int __cdecl _fclose(FILE * _File);
undefined4 __cdecl FUN_1006b810(FILE * param_1, int * param_2);

int __stdcall FUN_1006c015(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  FILE *pFVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  int local_48;
  int local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  (void)local_34;
  local_40 = 0;
  if (DAT_100b3d64 == 0) {
    local_40 = 0;
  }
  else {
    for (local_48 = 0; local_48 < DAT_100b38d8; local_48 = local_48 + 1) {
      piVar2 = *(int **)(DAT_100eef40[local_48] + 0x20);
      if ((*(ushort *)((int)piVar2 + 0x442) & 2) != 0) {
        local_38 = DAT_100b3d68;
        local_34 = DAT_100b3d6c;
        uVar5 = 0xffffffff;
        piVar8 = piVar2 + 0x11c;
        do {
          piVar9 = piVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          piVar9 = (int *)((int)piVar8 + 1);
          iVar6 = *piVar8;
          piVar8 = piVar9;
        } while ((char)iVar6 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar3 = (char *)&local_38;
        do {
          pcVar11 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = (char *)((int)piVar9 - uVar5);
        pcVar11 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar11 = pcVar11 + 1;
        }
        pcVar3 = _strchr((char *)&local_38,0x2e);
        if (pcVar3 == (char *)0x0) {
          uVar5 = 0xffffffff;
          pcVar3 = PTR_DAT_100af164;
          do {
            pcVar11 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar11 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar11;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar6 = -1;
          pcVar3 = (char *)&local_38;
          do {
            pcVar10 = pcVar3;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar10 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar10;
          } while (cVar1 != '\0');
          pcVar3 = pcVar11 + -uVar5;
          pcVar11 = pcVar10 + -1;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        pFVar4 = _fopen((char *)&local_38,DAT_100b3d70);
        if (pFVar4 != (FILE *)0x0) {
          _fclose(pFVar4);
          pFVar4 = _fopen((char *)&local_38,DAT_100b3d74);
          if ((pFVar4 != (FILE *)0x0) && (piVar2 != (int *)0x0)) {
            FUN_1006b810(pFVar4,piVar2);
            _fclose(pFVar4);
            local_40 = local_40 + 1;
          }
        }
      }
    }
  }
  return local_40;
}
