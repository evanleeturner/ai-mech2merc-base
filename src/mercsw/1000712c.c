/* SPDX-License-Identifier: MIT */
/* mercsw 1000712c */
/* mercsw 1000712c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_000b0f00[];
undefined __stdcall FUN_100070d0(void);
undefined __stdcall FUN_100070f2(void);

void __cdecl FUN_1000712c(char * param_1)

{
  char cVar1;
  uint uVar2;
  int local_14;
  char *local_10;
  int local_c;
  char *local_8;
  
  local_10 = param_1;
  local_8 = DAT_000b0f00;
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_14 = ~uVar2 - 1;
  if (0x50 < local_14) {
    local_14 = 0x50;
  }
  FUN_100070d0();
  FUN_100070f2();
  for (local_c = 0; local_c < local_14; local_c = local_c + 1) {
    *local_8 = *local_10;
    local_10 = local_10 + 1;
    local_8 = local_8 + 2;
  }
  return;
}
