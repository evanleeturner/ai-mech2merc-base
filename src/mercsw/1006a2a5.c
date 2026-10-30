/* SPDX-License-Identifier: MIT */
/* mercsw 1006a2a5 */
/* mercsw 1006a2a5: Ghidra's C, repaired by tools/ghidra_repair.py */
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);

void __cdecl FUN_1006a2a5(char * source)

{
  int local_58;
  char local_54 [80];
  
  for (local_58 = 0; local_58 < 0x50; local_58 = local_58 + 1) {
    local_54[local_58] = '\0';
  }
  local_54[0] = ' ';
  _strncpy(local_54 + 1,source,0x4e);
  for (local_58 = 0; local_58 < 0x4f; local_58 = local_58 + 1) {
    if (local_54[local_58] == '\0') {
      local_54[local_58] = ' ';
    }
  }
  return;
}
