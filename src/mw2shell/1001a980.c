/* SPDX-License-Identifier: MIT */
/* mw2shell 1001a980 */
/* mw2shell 1001a980: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008fba4;
extern undefined DAT_1008fba8;
extern undefined DAT_1008fbac[];
extern undefined DAT_1008fbb0[];
extern void * DAT_100a6738;
extern char s_launch_scr_100a6b90[];
undefined __thiscall FUN_100364c0(void * this, char * param_1, uint param_2, int * param_3);
int * __stdcall FUN_10036540(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1001a910(int param_1, char * param_2);
undefined __cdecl FUN_100361e0(int param_1, int param_2, int param_3, int param_4, int param_5);
uint __cdecl FUN_10035f30(int param_1, char * param_2, char * param_3, char * param_4);
undefined __thiscall FUN_10036510(void * this, char * param_1, uint param_2, int * param_3);

void __cdecl FUN_1001a980(char * param_1, int param_2, int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  char local_10 [4];
  undefined1 local_c;
  
  (void)local_c;
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = local_10;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar6 = -1;
  local_c = 0;
  pcVar7 = local_10;
  do {
    pcVar9 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar9 + -1) = DAT_1008fba4;
  pcVar9[3] = DAT_1008fba8;
  iVar6 = FUN_100364c0(DAT_100a6738,local_10,1,(int *)DAT_1008fbac);
  if (iVar6 != 0) {
    piVar3 = FUN_10036540(iVar6,0x47,0);
    if (piVar3 != (int *)0x0) {
      uVar4 = 0xffffffff;
      piVar3 = piVar3 + 2;
      do {
        piVar8 = piVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        piVar8 = (int *)((int)piVar3 + 1);
        iVar2 = *piVar3;
        piVar3 = piVar8;
      } while ((char)iVar2 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = (char *)((int)piVar8 - uVar4);
      pcVar9 = s_launch_scr_100a6b90;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    if (param_2 != 0) {
      piVar3 = FUN_10036540(iVar6,0x46,0);
      if (piVar3 != (int *)0x0) {
        FUN_1001a910(0,(char *)(piVar3 + 2));
      }
      piVar3 = FUN_10036540(iVar6,0x46,(int)piVar3);
      if (piVar3 != (int *)0x0) {
        FUN_1001a910(1,(char *)(piVar3 + 2));
      }
    }
    FUN_100361e0(0,-1,-1,-1,-1);
    FUN_10035f30(0,(char *)0x0,(char *)0x0,(char *)0x0);
    if (param_3 != 0) {
      FUN_10036540(iVar6,0x45,0);
    }
    FUN_10036510(DAT_100a6738,local_10,1,(int *)DAT_1008fbb0);
  }
  return;
}
