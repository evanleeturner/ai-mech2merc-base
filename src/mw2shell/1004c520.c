/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c520 */
/* mw2shell 1004c520: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern int * DAT_100a678c;
extern int * DAT_100a6798;
extern int * DAT_100a67ac;
extern int * DAT_100a67b0;
extern int * DAT_100a67b4;
extern int * DAT_100a67b8;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __cdecl FUN_10050400(int * param_1);
undefined __cdecl FUN_100503d0(int * param_1);
undefined __cdecl FUN_10050390(int * param_1);
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
undefined __cdecl FUN_1000be60(int param_1, int param_2);
char * __cdecl FUN_1000ae80(char * param_1);

void __stdcall FUN_1004c520(void)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  char *pcVar11;
  char local_20 [3];
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  
  (void)local_1d;
  (void)local_1c;
  (void)local_1b;
  (void)local_1a;
  (void)local_19;
  (void)local_18;
  iVar10 = 0;
  if (0 < DAT_100a67ac[1]) {
    do {
      piVar3 = (int *)FUN_10018060((int)DAT_100a67ac,iVar10);
      if (*(char *)((int)piVar3 + 9) == '\x01') {
        cVar1 = (char)piVar3[2];
        if (cVar1 == '\0') {
          FUN_10050400(piVar3);
          piVar4 = DAT_100a67b4;
        }
        else if (cVar1 == '\x01') {
          FUN_100503d0(piVar3);
          piVar4 = DAT_100a67b8;
        }
        else {
          if (cVar1 != '\x02') goto LAB_1004c595;
          FUN_10050390(piVar3);
          piVar4 = DAT_100a67b4;
        }
        FUN_10017df0(piVar4,(undefined4)(piVar3));
      }
LAB_1004c595:
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_100a67ac[1]);
  }
  FUN_100180f0(DAT_100a67ac,'\0');
  do {
    iVar10 = 0;
    if (DAT_100a67b0[1] < 1) {
LAB_1004c5e5:
      FUN_100180f0(DAT_100a67b0,'\0');
      return;
    }
    while (iVar5 = FUN_10018060((int)DAT_100a67b0,iVar10), *(char *)(iVar5 + 0x84e) != '\x01') {
      iVar10 = iVar10 + 1;
      if (DAT_100a67b0[1] <= iVar10) goto LAB_1004c5e5;
    }
    FUN_10017ec0((int)DAT_100a67b0,iVar5,'\0');
    uVar7 = 0xffffffff;
    pcVar6 = (char *)(iVar5 + 0x823);
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
    pcVar11 = local_20;
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
    local_1d = 0x30;
    local_1c = 0x30;
    local_1b = 0x53;
    local_1a = 0x54;
    local_19 = 0x44;
    local_18 = 0;
    FUN_1000be60(iVar5,(int)DAT_100a6798);
    pcVar6 = FUN_1000ae80(local_20);
    *(undefined4 *)(pcVar6 + 0x810) = *(undefined4 *)(iVar5 + 0x810);
    FUN_10017df0(DAT_100a6798,iVar5);
    puVar9 = (undefined2 *)(iVar5 + 0x770);
    pcVar11 = pcVar6 + 0x770;
    FUN_10017df0(DAT_100a678c,(undefined4)(pcVar6));
    iVar10 = 8;
    do {
      uVar2 = *(undefined2 *)pcVar11;
      pcVar11 = pcVar11 + 0x12;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 9;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  } while( true );
}
