/* SPDX-License-Identifier: MIT */
/* mw2shell 1001d650 */
/* mw2shell 1001d650: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1009025c;
extern undefined DAT_10090260;
extern undefined4 DAT_100a6798;
extern undefined4 DAT_100a67a4;
extern undefined4 DAT_100a67a8;
undefined __stdcall FUN_10035e90(void);
undefined __stdcall FUN_100361c0(void);
undefined __cdecl FUN_100361e0(int param_1, int param_2, int param_3, int param_4, int param_5);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_1000ad30(int param_1, int param_2);
undefined4 __cdecl FUN_1000b9a0(int param_1);
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
uint __cdecl FUN_10035f30(int param_1, char * param_2, char * param_3, char * param_4);
char * __cdecl FUN_1000ae80(char * param_1);
undefined __stdcall FUN_10036260(void);

void __stdcall FUN_1001d650(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_38 [22];
  undefined1 local_22;
  char local_20 [9];
  undefined1 local_17;
  
  (void)local_22;
  (void)local_17;
  iVar5 = 1;
  FUN_10035e90();
  FUN_100361c0();
  iVar6 = 0;
  FUN_100361e0(0,-1,3,0,-1);
  iVar4 = iVar5;
  if (0 < *(int *)(DAT_100a67a4 + 4)) {
    do {
      pcVar2 = (char *)FUN_10018060(DAT_100a67a4,iVar6);
      iVar5 = iVar4;
      if (*(int *)(pcVar2 + 0x20) != -1) {
        iVar3 = FUN_1000ad30(DAT_100a6798,*(int *)(pcVar2 + 0x20));
        FUN_1000b9a0(iVar3);
        *(undefined1 *)(iVar3 + 0x84b) = 1;
        _strncpy(local_20,(char *)(iVar3 + 0x823),8);
        local_17 = 0;
        _strncpy(local_38,pcVar2,0x15);
        local_22 = 0;
        if (pcVar2[0x2064] == '\x01') {
          iVar4 = 0;
        }
        else {
          iVar5 = iVar4 + 1;
        }
        FUN_10035f30(iVar4,local_20,local_38,(char *)0x0);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar5;
    } while (iVar6 < *(int *)(DAT_100a67a4 + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67a8 + 4)) {
    do {
      pcVar2 = (char *)FUN_10018060(DAT_100a67a8,iVar4);
      iVar6 = iVar5;
      if ((pcVar2[0x2c] == '\x01') && (iVar5 < 4)) {
        _strncpy(local_38,pcVar2,0x15);
        local_22 = 0;
        pcVar2 = FUN_1000ae80(pcVar2 + 0x4d);
        if (pcVar2 != (char *)0x0) {
          iVar6 = -1;
          pcVar2[0x828] = 'M';
          pcVar2[0x829] = 'E';
          pcVar2[0x82a] = 'R';
          pcVar7 = pcVar2 + 0x823;
          do {
            pcVar8 = pcVar7;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar8 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar8;
          } while (cVar1 != '\0');
          *(undefined4 *)(pcVar8 + -1) = DAT_1009025c;
          pcVar8[3] = DAT_10090260;
          FUN_1000b9a0((int)pcVar2);
          iVar6 = iVar5 + 1;
          FUN_10035f30(iVar5,pcVar2 + 0x823,local_38,(char *)0x0);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar6;
    } while (iVar4 < *(int *)(DAT_100a67a8 + 4));
  }
  FUN_10036260();
  return;
}
