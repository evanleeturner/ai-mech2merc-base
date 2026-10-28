/* SPDX-License-Identifier: MIT */
/* mercsw 1001df10 */
/* mercsw 1001df10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100ab2d4;
extern undefined DAT_101e84f0[];
undefined __stdcall FUN_10086110(void);
undefined __cdecl FUN_10070f52(int * param_1);
int * __cdecl FUN_10070ed9(char * param_1);

void __cdecl FUN_1001df10(char * param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_10086110();
  if (DAT_100ab2d4 != (int *)0x0) {
    FUN_10070f52(DAT_100ab2d4);
  }
  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)DAT_101e84f0;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  DAT_100ab2d4 = FUN_10070ed9(param_1);
  return;
}
