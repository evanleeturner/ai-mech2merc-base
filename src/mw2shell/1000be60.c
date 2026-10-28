/* SPDX-License-Identifier: MIT */
/* mw2shell 1000be60 */
/* mw2shell 1000be60: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern char s__s_02d_s_1008d02c[];
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
int __cdecl _atoi(char * _Str);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __cdecl FUN_1000be60(int param_1, int param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int local_44;
  char local_40 [3];
  undefined1 local_3d;
  char local_30 [16];
  char local_20 [3];
  undefined1 local_1d;
  
  (void)local_3d;
  (void)local_1d;
  bVar3 = false;
  iVar7 = 0;
  do {
    bVar2 = false;
    iVar9 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      do {
        iVar4 = FUN_10018060(param_2,iVar9);
        _strncpy(local_20,(char *)(iVar4 + 0x826),2);
        local_1d = 0;
        iVar4 = _atoi(local_20);
        if (iVar4 == iVar7) {
          iVar7 = iVar7 + 1;
          bVar2 = true;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_2 + 4));
    }
    if (!bVar2) {
      bVar3 = true;
      local_44 = iVar7;
    }
  } while (!bVar3);
  _strncpy(local_40,(char *)(param_1 + 0x823),3);
  uVar5 = 0xffffffff;
  local_3d = 0;
  pcVar8 = (char *)(param_1 + 0x828);
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = local_30;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  _sprintf((char *)(param_1 + 0x823),s__s_02d_s_1008d02c,local_40,local_44,local_30);
  return;
}
