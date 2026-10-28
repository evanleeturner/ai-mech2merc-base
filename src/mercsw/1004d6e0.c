/* SPDX-License-Identifier: MIT */
/* mercsw 1004d6e0 */
/* mercsw 1004d6e0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100c2dec;
extern undefined4 PTR_DAT_100c2be0;
int __cdecl __isctype(int _C, int _Type);

void __cdecl FUN_1004d6e0(char * param_1)

{
  char *pcVar1;
  uint local_14;
  uint local_10;
  char *local_c;
  char *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  pcVar1 = local_8;
  do {
    do {
      local_8 = pcVar1;
      if (*local_c == '\0') {
        *local_8 = '\0';
        return;
      }
      *local_8 = *local_c;
      local_c = local_c + 1;
      if (DAT_100c2dec < 2) {
        local_10 = *(ushort *)(PTR_DAT_100c2be0 + *local_c * 2) & 8;
      }
      else {
        local_10 = __isctype((int)*local_c,8);
      }
      pcVar1 = local_8 + 1;
    } while (local_10 == 0);
    for (; *local_c != '\0'; local_c = local_c + 1) {
      if (DAT_100c2dec < 2) {
        local_14 = *(ushort *)(PTR_DAT_100c2be0 + *local_c * 2) & 8;
      }
      else {
        local_14 = __isctype((int)*local_c,8);
      }
      if (local_14 == 0) break;
    }
    local_8[1] = ' ';
    pcVar1 = local_8 + 2;
  } while( true );
}
