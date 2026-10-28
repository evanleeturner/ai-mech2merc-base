/* SPDX-License-Identifier: MIT */
/* mw2shell 1002ff60 */
/* mw2shell 1002ff60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1009200c;
extern undefined4 DAT_10092010;
extern int * DAT_100a67b8;
extern char s_Unknown_item_flag_Ok_10093260[];
undefined __cdecl FUN_1000be30(undefined4 * param_1);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __cdecl FUN_1005b1b0(char * param_1);
undefined __cdecl FUN_1000c770(int * param_1, int param_2);
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);
undefined4 __cdecl FUN_1000c6b0(int param_1, int param_2);
undefined __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
undefined __stdcall FUN_10030090(void);

void __cdecl FUN_1002ff60(undefined4 * param_1, undefined4 * param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar2 = param_1[0xd9];
  iVar6 = 0;
  puVar7 = param_1;
  for (iVar5 = 0x214; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)param_2;
  *(undefined1 *)((int)puVar7 + 2) = *(undefined1 *)((int)param_2 + 2);
  param_1[0xd9] = uVar2;
  *(undefined1 *)(param_1 + 0x213) = 0;
  FUN_1000be30(param_1);
  if (0 < *(int *)(DAT_1009200c + 4)) {
    do {
      piVar3 = (int *)FUN_10018060(DAT_1009200c,iVar6);
      cVar1 = (char)piVar3[2];
      if (cVar1 == '\0') {
LAB_1002ffcf:
        FUN_1000c770(piVar3,0);
      }
      else if (cVar1 == '\x01') {
        FUN_10017df0(DAT_100a67b8,(undefined4)(piVar3));
      }
      else {
        if (cVar1 == '\x02') goto LAB_1002ffcf;
        FUN_1005b1b0(s_Unknown_item_flag_Ok_10093260);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_1009200c + 4));
  }
  iVar5 = 0;
  if (0 < *(int *)(DAT_10092010 + 4)) {
    do {
      piVar3 = (int *)FUN_10018060(DAT_10092010,iVar5);
      cVar1 = (char)piVar3[2];
      if (cVar1 == '\0') {
LAB_10030025:
        FUN_1000c6b0((int)piVar3,0);
      }
      else if (cVar1 == '\x01') {
        iVar6 = 0;
        if (0 < DAT_100a67b8[1]) {
          do {
            piVar4 = (int *)FUN_10018060((int)DAT_100a67b8,iVar6);
            if (*piVar4 == *piVar3) {
              FUN_10017ec0((int)DAT_100a67b8,(int)piVar4,'\0');
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < DAT_100a67b8[1]);
        }
      }
      else if (cVar1 == '\x02') goto LAB_10030025;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(DAT_10092010 + 4));
  }
  FUN_10030090();
  return;
}
