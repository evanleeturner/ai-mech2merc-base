/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f960 */
/* mw2shell 1004f960: Ghidra's C, repaired by tools/ghidra_repair.py */
int __thiscall FUN_10050b20(void * this, char * param_1);

void __thiscall FUN_1004f960(void * this, char * param_1, char * param_2, int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar2 = 0xffffffff;
  pcVar6 = param_2;
  do {
    pcVar5 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  do {
    pcVar6 = param_1;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (param_3 == -1) {
    FUN_10050b20(*(void **)((int)this + 8),param_2);
  }
  return;
}
