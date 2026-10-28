/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f8b0 */
/* mw2shell 1004f8b0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1009c050[];
undefined __thiscall FUN_1004ffe0(void * this, char * param_1, int param_2, int param_3, char param_4);
int __thiscall FUN_10050b20(void * this, char * param_1);

int __thiscall FUN_1004f8b0(void * this, char * param_1, char * param_2, char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x1c);
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    return 0;
  }
  FUN_1004ffe0(this,param_1,*(int *)((int)this + 0xc),*(int *)((int)this + 0x10),param_3);
  uVar3 = 0xffffffff;
  pcVar5 = (char *)DAT_1009c050;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = param_1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_1 = param_1 + 1;
  }
  iVar2 = FUN_10050b20(*(void **)((int)this + 8),param_2);
  return iVar2;
}
