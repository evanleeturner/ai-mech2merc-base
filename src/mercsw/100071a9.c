/* SPDX-License-Identifier: MIT */
/* mercsw 100071a9 */
/* mercsw 100071a9: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1000712c(char * param_1);

void __cdecl FUN_100071a9(char * param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int local_8;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  for (local_8 = 0; local_8 < (int)(~uVar2 - 1); local_8 = local_8 + 0x50) {
    FUN_1000712c(param_1 + local_8);
  }
  return;
}
