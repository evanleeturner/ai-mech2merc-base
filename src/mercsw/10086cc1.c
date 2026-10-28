/* SPDX-License-Identifier: MIT */
/* mercsw 10086cc1 */
/* mercsw 10086cc1: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100baa08;
extern int DAT_100bf7d0;
extern undefined DAT_100c8908[];
extern undefined DAT_100c8cf8[];
extern char s_Keyboard_initialization_error_100c23bc[];
extern char s_keyboard_100c23b0[];
int __cdecl __strcmpi(char * _Str1, char * _Str2);
int __cdecl FUN_10086a65(char * param_1);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

int __cdecl FUN_10086cc1(char * param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (DAT_100bf7d0 <= local_c) {
      iVar2 = FUN_10086a65(param_1);
      iVar3 = __strcmpi(param_1,s_keyboard_100c23b0);
      iVar1 = DAT_100baa08;
      if ((iVar3 == 0) && (iVar1 = iVar2, iVar2 == -1)) {
        FUN_100108a0(0x11,s_Keyboard_initialization_error_100c23bc);
        iVar1 = DAT_100baa08;
      }
      DAT_100baa08 = iVar1;
      return iVar2;
    }
    iVar1 = __strcmpi((char *)(DAT_100c8cf8 + local_c * 0x28),param_1);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  if (*(int *)(DAT_100c8908 + local_c * 4) != 0) {
    return local_c;
  }
  return -1;
}
