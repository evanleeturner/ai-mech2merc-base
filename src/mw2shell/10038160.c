/* SPDX-License-Identifier: MIT */
/* mw2shell 10038160 */
/* mw2shell 10038160: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10094438[];
extern HANDLE DAT_10098224;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);

char * __cdecl FUN_10038160(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *_Dest;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int local_8;
  
  _Dest = (char *)0x0;
  if (param_1 == 0) {
    return (char *)0x0;
  }
  local_8 = 0xc;
  iVar2 = *(int *)(param_1 + 4);
  piVar9 = (int *)(param_1 + 0xc);
  if (0xc < iVar2) {
    do {
      iVar4 = *piVar9;
      if (iVar4 == 0x48434554) {
LAB_100381ba:
        _Dest = HeapAlloc(DAT_10098224,1,0x205e);
        pcVar5 = _Dest;
        for (iVar4 = 0x817; iVar4 != 0; iVar4 = iVar4 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + 4;
        }
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        _strncpy(_Dest,(char *)(piVar9 + 2),0x1f);
        piVar8 = piVar9 + 10;
        pcVar5 = _Dest + 0x2d;
        iVar4 = 8;
        _Dest[0x20] = '\0';
        _Dest[0x2c] = '\0';
        _Dest[0x20] = -1;
        _Dest[0x21] = -1;
        _Dest[0x22] = -1;
        _Dest[0x23] = -1;
        do {
          iVar3 = *piVar8;
          piVar8 = (int *)((int)piVar8 + 2);
          *(short *)pcVar5 = (short)iVar3;
          pcVar5 = pcVar5 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar6 = 0xffffffff;
        piVar8 = piVar9 + 0xf;
        do {
          piVar10 = piVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          piVar10 = (int *)((int)piVar8 + 1);
          iVar4 = *piVar8;
          piVar8 = piVar10;
        } while ((char)iVar4 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = (char *)((int)piVar10 - uVar6);
        pcVar11 = _Dest + 0x3d;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        piVar8 = piVar9 + 0x13;
        do {
          piVar10 = piVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          piVar10 = (int *)((int)piVar8 + 1);
          iVar4 = *piVar8;
          piVar8 = piVar10;
        } while ((char)iVar4 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = (char *)((int)piVar10 - uVar6);
        pcVar11 = _Dest + 0x4d;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        *(int *)(_Dest + 0x24) = piVar9[0xe];
        _Dest[0x28] = '\0';
        _Dest[0x29] = '\0';
        _Dest[0x2a] = '\0';
        _Dest[0x2b] = '\0';
        _Dest[0x5d] = '\0';
        pcVar5 = (char *)DAT_10094438;
        do {
          pcVar11 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = pcVar11 + -uVar6;
        pcVar11 = _Dest + 0x5e;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar11 = pcVar11 + 1;
        }
        local_8 = local_8 + 0x5c;
      }
      else {
        if (iVar4 == 0x52535344) {
          _strncpy(_Dest + 0x5e,(char *)(piVar9 + 2),piVar9[1] - 1);
          _Dest[piVar9[1] + 0x5e] = '\0';
        }
        else if (iVar4 == 0x544c4950) goto LAB_100381ba;
        local_8 = local_8 + piVar9[1];
      }
      piVar9 = (int *)(param_1 + local_8);
    } while (local_8 < iVar2);
  }
  return _Dest;
}
