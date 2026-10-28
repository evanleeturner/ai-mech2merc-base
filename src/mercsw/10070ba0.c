/* SPDX-License-Identifier: MIT */
/* mercsw 10070ba0 */
/* mercsw 10070ba0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100c2dec;
extern undefined4 PTR_DAT_100c2be0;
int __cdecl __isctype(int _C, int _Type);

uint __cdecl FUN_10070ba0(int param_1, char * param_2)

{
  uint local_10;
  uint local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_100c2dec < 2) {
      local_c = *(ushort *)(PTR_DAT_100c2be0 + *param_2 * 2) & 8;
    }
    else {
      local_c = __isctype((int)*param_2,8);
    }
    if (local_c == 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + -1;
    if (param_1 < 1) {
      return 0xffffffff;
    }
  }
  local_8 = 0;
  for (; ((0 < param_1 && ('/' < *param_2)) && (*param_2 < '8')); param_2 = param_2 + 1) {
    local_8 = (int)*param_2 - 0x30U | local_8 << 3;
    param_1 = param_1 + -1;
  }
  if (param_1 < 1) {
    return local_8;
  }
  if (*param_2 == '\0') {
    return local_8;
  }
  if (DAT_100c2dec < 2) {
    local_10 = *(ushort *)(PTR_DAT_100c2be0 + *param_2 * 2) & 8;
  }
  else {
    local_10 = __isctype((int)*param_2,8);
  }
  if (local_10 != 0) {
    return local_8;
  }
  return 0xffffffff;
}
