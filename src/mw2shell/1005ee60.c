/* SPDX-License-Identifier: MIT */
/* mw2shell 1005ee60 */
/* mw2shell 1005ee60: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef unsigned long long ulonglong;
undefined4 __thiscall FUN_1005f410(void * this, int param_1);
undefined4 __thiscall FUN_1005f530(void * this, int param_1);
undefined __thiscall FUN_1005ed50(void * this, undefined4 param_1);

char * __thiscall FUN_1005ee60(void * this, char * param_1, undefined4 param_2, undefined4 param_3, uint param_4, uint param_5, int param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = this;
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
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(int *)((int)this + 0x13c) = param_6;
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(param_6 + 4);
  *(undefined4 *)((int)this + 0x110) = param_2;
  *(undefined4 *)((int)this + 0x114) = param_3;
  *(uint *)((int)this + 0x10c) = (param_4 & 0xefffffff) | 0x100;
  if (param_5 == 0) {
    param_5 = 10;
  }
  *(int *)((int)this + 0x134) = (int)(1000 / (ulonglong)param_5);
  uVar2 = FUN_1005f410(this,0);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_1005f530(this,0);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_1005f410(this,1);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_1005f530(this,1);
        if ((char)uVar2 == '\0') {
          *(undefined4 *)((int)this + 0x10c) = 0x40000000;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x110);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x114);
  if (*(int *)((int)this + 0x10c) != 0x40000000) {
    FUN_1005ed50(*(void **)((int)this + 0x13c),(undefined4)(this));
  }
  return this;
}
