/* SPDX-License-Identifier: MIT */
/* mercsw 1002d4f1 */
/* mercsw 1002d4f1: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100b0710;
extern undefined DAT_100eebbe;
extern undefined DAT_10123240[];
extern undefined DAT_1012327a[];
extern undefined DAT_1012327b[];
extern undefined DAT_101232ee[];
extern char s_BOunty__100ad748[];
extern char s_Bonus__100ad728[];
extern char s_Bounty__100ad730[];
extern char s_Complete_100ad760[];
extern char s_InComplete_100ad76c[];
extern char s_In_progress_100ad778[];
extern char s_Return__100ad73c[];
extern char s_Secondary__100ad754[];
extern char s_Target__100ad710[];
extern char s_Target__100ad71c[];
undefined4 __cdecl FUN_1005aae4(int param_1);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
int __cdecl FUN_1002d49d(char * param_1, int param_2);
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __cdecl FUN_1002d4f1(int param_1, int * param_2, int param_3, char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  int local_12c;
  int local_118;
  byte local_110 [32];
  undefined1 local_f0;
  int local_10;
  char *local_c;
  byte *local_8;
  
  (void)local_f0;
  iVar2 = *(int *)(param_1 + 0xa4);
  iVar4 = DAT_100b0710 * 0x3c0a;
  iVar7 = FUN_1005aae4(param_3);
  bVar5 = false;
  if ((DAT_100aa1ac != 0) && (*(char *)(DAT_100adf34 + 10) == '\0')) {
    local_12c = 0;
    bVar6 = false;
    for (local_118 = 0; local_118 < *(int *)(DAT_10123240 + iVar4); local_118 = local_118 + 1) {
      iVar8 = local_118 * 0x13f + DAT_100b0710 * 0x3c0a;
      local_12c = local_12c + (uint)(byte)DAT_101232ee[iVar8];
      if ((DAT_101232ee[iVar8] != '\0') && (DAT_1012327b[iVar8] == '\x02')) {
        bVar6 = true;
      }
    }
    if ((bVar6) && (local_12c == 1)) {
      bVar5 = true;
    }
  }
  local_118 = 0;
  do {
    if (*(int *)(DAT_10123240 + iVar4) <= local_118) {
      return;
    }
    iVar8 = local_118 * 0x13f + DAT_100b0710 * 0x3c0a;
    local_c = (char *)(DAT_1012327a + iVar8);
    if ((DAT_101232ee[iVar8] != '\0') && (DAT_1012327b[iVar8] == param_4)) {
      *param_2 = **(int **)(param_1 + 0xa8);
      local_10 = 0;
      switch(param_4) {
      case '\x01':
        local_8 = (byte *)s_Target__100ad710;
        break;
      case '\x02':
        if (bVar5) {
          local_8 = (byte *)s_Target__100ad71c;
        }
        else {
          local_8 = (byte *)s_Bonus__100ad728;
        }
        break;
      default:
        local_8 = (byte *)s_BOunty__100ad748;
        break;
      case '\x04':
        local_8 = (byte *)s_Bounty__100ad730;
        break;
      case '\b':
        local_8 = (byte *)s_Return__100ad73c;
      }
      DAT_100eebbe = 6;
      FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,local_8,0x100eebb0);
      DAT_100eebbe = 0xe;
      iVar8 = FUN_1002d49d(s_Secondary__100ad754,param_3);
      *param_2 = *param_2 + iVar8;
      uVar10 = 0xffffffff;
      pcVar13 = local_c + 0xad;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      if (~uVar10 - 1 < 0x20) {
        DAT_100eebbe = 0xe;
        FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,(byte *)(local_c + 0xad),
                     0x100eebb0);
        DAT_100eebbe = 0xe;
      }
      else {
        iVar8 = *param_2;
        iVar3 = param_2[1];
        _strncpy((char *)local_110,local_c + 0xad,0x20);
        local_f0 = 0;
        DAT_100eebbe = 0xe;
        FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,local_110,0x100eebb0);
        *param_2 = iVar8;
        param_2[1] = param_2[1] + iVar7;
        uVar10 = 0xffffffff;
        pcVar13 = local_c + 0xcd;
        do {
          pcVar14 = pcVar13;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar14 = pcVar13 + 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar14;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pbVar12 = (byte *)(pcVar14 + -uVar10);
        pbVar15 = local_110;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar15 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar15 = pbVar15 + 1;
        }
        DAT_100eebbe = 0xe;
        FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,local_110,0x100eebb0);
        DAT_100eebbe = 0xe;
        *param_2 = iVar8;
        param_2[1] = iVar3;
        local_10 = 1;
      }
      if (*local_c == '\x05') {
        _sprintf((char *)local_110,s_Complete_100ad760);
        iVar8 = *(int *)(iVar2 + 0xc);
        iVar3 = *(int *)(iVar2 + 4);
        iVar9 = FUN_1002d49d((char *)local_110,param_3);
        *param_2 = (iVar8 - iVar3) - iVar9;
        DAT_100eebbe = 7;
        FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,local_110,0x100eebb0);
      }
      else if (*local_c == '\x06') {
        _sprintf((char *)local_110,s_InComplete_100ad76c);
        iVar8 = *(int *)(iVar2 + 0xc);
        iVar3 = *(int *)(iVar2 + 4);
        iVar9 = FUN_1002d49d((char *)local_110,param_3);
        *param_2 = (iVar8 - iVar3) - iVar9;
        DAT_100eebbe = 0xb;
        FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,local_110,0x100eebb0);
      }
      else {
        _sprintf((char *)local_110,s_In_progress_100ad778);
        iVar8 = *(int *)(iVar2 + 0xc);
        iVar3 = *(int *)(iVar2 + 4);
        iVar9 = FUN_1002d49d((char *)local_110,param_3);
        *param_2 = (iVar8 - iVar3) - iVar9;
        DAT_100eebbe = 0xe;
        FUN_1005acaa(*(int **)(param_1 + 0xa4),*param_2,param_2[1],param_3,local_110,0x100eebb0);
      }
      DAT_100eebbe = 0xe;
      param_2[1] = param_2[1] + iVar7;
      if (local_10 != 0) {
        param_2[1] = param_2[1] + iVar7;
      }
    }
    local_118 = local_118 + 1;
  } while( true );
}
