/* SPDX-License-Identifier: MIT */
/* mw2shell 1004b200 */
/* mw2shell 1004b200: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern char DAT_1009b3e0[];
extern char DAT_1009b3fc[];
extern char DAT_1009b428[];
extern char DAT_1009b44c[];
extern char DAT_1009b498[];
extern void * DAT_100a6744;
extern undefined4 DAT_100bacc4;
extern undefined4 DAT_100baccc;
extern char s_Balance___g_03d_b_03d_s_n_1009b49c[];
extern char s_Contract_compensation___g_03d_b__1009b400[];
extern char s_Funds___g_03d_b_03d_s_n_1009b3e4[];
extern char s_Total_Income___g_03d_b_03d_s_n_1009b42c[];
extern char s_Total_expenses___g_03d_b_03d_s_n_1009b450[];
extern char s________________1009b474[];
extern char s__g_03d_b_03d_s_n_1009b484[];
int __cdecl FUN_1000c4e0(undefined4 param_1, int param_2);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
int __thiscall FUN_10050b20(void * this, char * param_1);
int __cdecl FUN_1004b180(char param_1);

void __cdecl FUN_1004b200(char * param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_200 [256];
  char local_100 [256];
  
  iVar2 = FUN_1000c4e0(*(undefined4 *)(DAT_10083508 + 0x12a),(int)local_200);
  _sprintf(local_200,DAT_1009b3e0,iVar2);
  iVar2 = FUN_10050b20(DAT_100a6744,local_200);
  _sprintf(local_100,s_Funds___g_03d_b_03d_s_n_1009b3e4,0x202,iVar2,local_200);
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar2 = FUN_1000c4e0(DAT_100baccc,(int)local_200);
  _sprintf(local_200,DAT_1009b3fc,iVar2);
  DAT_100bacc4 = DAT_100bacc4 + DAT_100baccc;
  iVar2 = FUN_10050b20(DAT_100a6744,local_200);
  _sprintf(local_100,s_Contract_compensation___g_03d_b__1009b400,0x202,iVar2,local_200);
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar2 = FUN_1000c4e0(DAT_100bacc4,(int)local_200);
  _sprintf(local_200,DAT_1009b428,iVar2);
  iVar2 = FUN_10050b20(DAT_100a6744,local_200);
  _sprintf(local_100,s_Total_Income___g_03d_b_03d_s_n_1009b42c,0x202,iVar2,local_200);
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar2 = FUN_1004b180('\0');
  iVar2 = FUN_1000c4e0(-iVar2,(int)local_200);
  _sprintf(local_200,DAT_1009b44c,iVar2);
  iVar2 = FUN_10050b20(DAT_100a6744,local_200);
  _sprintf(local_100,s_Total_expenses___g_03d_b_03d_s_n_1009b450,0x202,iVar2,local_200);
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  _sprintf(local_200,s________________1009b474);
  iVar2 = FUN_10050b20(DAT_100a6744,local_200);
  _sprintf(local_100,s__g_03d_b_03d_s_n_1009b484,0x202,iVar2,local_200);
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar6 = param_1;
  do {
    pcVar8 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = local_200;
  iVar2 = *(int *)(DAT_10083508 + 0x12a);
  iVar3 = FUN_1004b180('\0');
  iVar2 = FUN_1000c4e0((iVar2 - iVar3) + DAT_100bacc4,(int)pcVar6);
  _sprintf(local_200,DAT_1009b498,iVar2);
  iVar2 = FUN_10050b20(DAT_100a6744,local_200);
  _sprintf(local_100,s_Balance___g_03d_b_03d_s_n_1009b49c,0x202,iVar2,local_200);
  uVar4 = 0xffffffff;
  pcVar6 = local_100;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  do {
    pcVar6 = param_1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar6 = pcVar6 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}
