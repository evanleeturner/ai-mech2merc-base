/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f180 */
/* mw2shell 1004f180: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1004f130(char * param_1);

void __cdecl FUN_1004f180(char * param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < (int)(~uVar2 - 1)) {
    do {
      pcVar3 = param_1 + iVar4;
      iVar4 = iVar4 + 0x50;
      FUN_1004f130(pcVar3);
    } while (iVar4 < (int)(~uVar2 - 1));
  }
  return;
}
