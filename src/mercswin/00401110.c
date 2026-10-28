/* SPDX-License-Identifier: MIT */
/* mercswin 00401110 */
/* mercswin 00401110: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_000b0f00[];
undefined __stdcall FUN_004010d0(void);
undefined __stdcall FUN_004010f0(void);

void __cdecl FUN_00401110(char * param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar3 = DAT_000b0f00;
  uVar2 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 - 1;
  if (0x50 < iVar4) {
    iVar4 = 0x50;
  }
  FUN_004010d0();
  FUN_004010f0();
  if (0 < iVar4) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
