/* SPDX-License-Identifier: MIT */
/* mw2shell 10037fc0 */
/* mw2shell 10037fc0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10094434[];
extern HANDLE DAT_10098224;
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

char * __cdecl FUN_10037fc0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *_Dest;
  int *piVar8;
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
      if (*piVar9 == 0x52535344) {
        _strncpy(_Dest + 100,(char *)(piVar9 + 2),piVar9[1] - 1);
        _Dest[piVar9[1] + 100] = '\0';
        local_8 = local_8 + piVar9[1];
      }
      else if (*piVar9 == 0x544c4950) {
        _Dest = HeapAlloc(DAT_10098224,1,0x2066);
        pcVar7 = _Dest;
        for (iVar4 = 0x819; iVar4 != 0; iVar4 = iVar4 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        _strncpy(_Dest,(char *)(piVar9 + 2),0x1f);
        uVar5 = 0xffffffff;
        _Dest[0x20] = '\0';
        pcVar7 = (char *)DAT_10094434;
        do {
          pcVar11 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar11;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar11 + -uVar5;
        pcVar11 = _Dest + 100;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar5 = 0xffffffff;
        _Dest[0x20] = -1;
        _Dest[0x21] = -1;
        _Dest[0x22] = -1;
        _Dest[0x23] = -1;
        _Dest[0x24] = -1;
        _Dest[0x25] = -1;
        _Dest[0x26] = -1;
        _Dest[0x27] = -1;
        piVar8 = piVar9 + 0xf;
        do {
          piVar10 = piVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          piVar10 = (int *)((int)piVar8 + 1);
          iVar4 = *piVar8;
          piVar8 = piVar10;
        } while ((char)iVar4 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = (char *)((int)piVar10 - uVar5);
        pcVar11 = _Dest + 0x44;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar5 = 0xffffffff;
        piVar8 = piVar9 + 0x13;
        do {
          piVar10 = piVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          piVar10 = (int *)((int)piVar8 + 1);
          iVar4 = *piVar8;
          piVar8 = piVar10;
        } while ((char)iVar4 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = (char *)((int)piVar10 - uVar5);
        pcVar11 = _Dest + 0x54;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar11 = pcVar11 + 1;
        }
        _Dest[0x38] = '\0';
        _Dest[0x39] = '\0';
        _Dest[0x3a] = '\0';
        _Dest[0x3b] = '\0';
        piVar8 = piVar9 + 10;
        iVar4 = 8;
        *(int *)(_Dest + 0x3c) = piVar9[0xe];
        _Dest[0x40] = '\0';
        _Dest[0x41] = '\0';
        _Dest[0x42] = '\0';
        _Dest[0x43] = '\0';
        _Dest[0x2064] = '\0';
        pcVar7 = _Dest + 0x28;
        do {
          iVar3 = *piVar8;
          piVar8 = (int *)((int)piVar8 + 2);
          *(short *)pcVar7 = (short)iVar3;
          pcVar7 = pcVar7 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        local_8 = local_8 + 0x5c;
      }
      else {
        local_8 = local_8 + piVar9[1];
      }
      piVar9 = (int *)(param_1 + local_8);
    } while (local_8 < iVar2);
  }
  return _Dest;
}
