/* SPDX-License-Identifier: MIT */
/* mercsw 10086d8e */
/* mercsw 10086d8e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c2dec;
extern undefined DAT_100c8978[];
extern undefined DAT_100c8984[];
extern undefined4 PTR_DAT_100c2be0;
extern char s_No_input_channel___s___Line__d_100c23dc[];
int __cdecl __isctype(int _C, int _Type);
int __cdecl _atoi(char * _Str);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
undefined __cdecl FUN_10088ec7(int param_1, undefined4 param_2, char * param_3);

int __cdecl FUN_10086d8e(int param_1, char * param_2)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  if (DAT_100c2dec < 2) {
    local_c = *(ushort *)(PTR_DAT_100c2be0 + *param_2 * 2) & 4;
  }
  else {
    local_c = __isctype((int)*param_2,4);
  }
  if (local_c == 0) {
    if (param_1 == -1) {
      iVar1 = -1;
    }
    else if (*(int *)(DAT_100c8984 + param_1 * 0x74) == 0) {
      FUN_100108a0(0x11,s_No_input_channel___s___Line__d_100c23dc);
      iVar1 = -1;
    }
    else {
      for (local_8 = 0; local_8 < *(int *)(DAT_100c8978 + param_1 * 0x74); local_8 = local_8 + 1) {
        if ((*(int *)(*(int *)(DAT_100c8984 + param_1 * 0x74) + local_8 * 4) != 0) &&
           (iVar1 = __strcmpi(*(char **)(*(int *)(DAT_100c8984 + param_1 * 0x74) + local_8 * 4),
                              param_2), iVar1 == 0)) {
          return local_8;
        }
      }
      FUN_10088ec7(0x6f,(undefined4)(param_2),(char *)(param_1 * 0x74 + 0x100c892c));
      iVar1 = -1;
    }
  }
  else {
    iVar1 = _atoi(param_2);
  }
  return iVar1;
}
