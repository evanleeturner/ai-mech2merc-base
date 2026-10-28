/* SPDX-License-Identifier: MIT */
/* mercsw 100520c7 */
/* mercsw 100520c7: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_101151be[];

undefined4 __cdecl FUN_100520c7(char * param_1)

{
  char cVar1;
  char *pcVar2;
  byte *local_10;
  uint local_c;
  byte *local_8;
  
  local_c = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (local_c == 0) break;
    local_c = local_c - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_c = ~local_c;
  local_8 = DAT_101151be;
  local_10 = (byte *)(param_1 + (local_c - 2));
  while( true ) {
    local_c = local_c - 1;
    if (local_c == 0) {
      return 1;
    }
    if ((*local_10 ^ 10) != *local_8) break;
    local_10 = local_10 + -1;
    local_8 = local_8 + -1;
  }
  return 0;
}
