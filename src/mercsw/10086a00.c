/* SPDX-License-Identifier: MIT */
/* mercsw 10086a00 */
/* mercsw 10086a00: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 PTR_s_torso_tilt_100bf7e8[];
int __cdecl __strcmpi(char * _Str1, char * _Str2);

undefined ** __cdecl FUN_10086a00(char * param_1)

{
  int iVar1;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x58 < local_8) {
      return (undefined **)0x0;
    }
    iVar1 = __strcmpi((char *)(PTR_s_torso_tilt_100bf7e8[local_8 * 8]),param_1);
    if (iVar1 == 0) break;
    local_8 = local_8 + 1;
  }
  return (undefined **)(PTR_s_torso_tilt_100bf7e8 + local_8 * 8);
}
