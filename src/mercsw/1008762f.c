/* SPDX-License-Identifier: MIT */
/* mercsw 1008762f */
/* mercsw 1008762f: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern int DAT_100ba9f8;
extern undefined DAT_100baa10[];
extern undefined DAT_100baa14[];
extern undefined DAT_100baa18[];
extern undefined DAT_100baa24[];
extern undefined DAT_100baa8c[];
extern undefined DAT_100c8b68[];
extern char s_Too_many_analog_controls__line___100c2474[];
extern char s_menu__100c2498[];
int __cdecl FUN_10086cc1(char * param_1);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
undefined * __cdecl FUN_1008716b(undefined4 * param_1);
int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount);

int __cdecl FUN_1008762f(undefined4 * param_1, char * param_2, int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int local_10;
  int local_8;
  
  iVar1 = DAT_100ba9f8;
  local_10 = 0;
  do {
    if (DAT_100ba9f8 <= local_10) {
      DAT_100ba9f8 = DAT_100ba9f8 + 1;
      if (DAT_100ba9f8 < 0x33) {
        if (param_2 == (char *)0x0) {
          local_8 = -1;
        }
        else {
          local_8 = FUN_10086cc1(param_2);
        }
        *(int *)(DAT_100baa10 + iVar1 * 0x80) = local_8;
        *(int *)(DAT_100baa14 + iVar1 * 0x80) = param_3;
        puVar2 = FUN_1008716b(param_1);
        *(undefined **)(DAT_100baa24 + iVar1 * 0x80) = puVar2;
        if (local_8 < 0) {
          *(undefined4 *)(DAT_100baa18 + iVar1 * 0x80) = 0;
        }
        else {
          *(undefined **)(DAT_100baa18 + iVar1 * 0x80) =
               DAT_100c8b68 + local_8 * 0x50 + param_3 * 4;
        }
        iVar3 = _strncmp((char *)*param_1,s_menu__100c2498,5);
        if (iVar3 == 0) {
          *(undefined4 *)(DAT_100baa8c + iVar1 * 0x80) = 1;
        }
        else {
          *(undefined4 *)(DAT_100baa8c + iVar1 * 0x80) = 0;
        }
      }
      else {
        FUN_100108a0(0x11,s_Too_many_analog_controls__line___100c2474);
        iVar1 = -1;
      }
      return iVar1;
    }
    if ((*(int *)(DAT_100baa24 + local_10 * 0x80) != 0) &&
       ((undefined4)(**(int **)(DAT_100baa24 + local_10 * 0x80)) == param_1[1])) {
      if (param_2 == (char *)0x0) {
        return local_10;
      }
      if (*(int *)(DAT_100baa18 + local_10 * 0x80) == 0) {
        iVar1 = FUN_10086cc1(param_2);
        *(undefined **)(DAT_100baa18 + local_10 * 0x80) =
             DAT_100c8b68 + iVar1 * 0x50 + param_3 * 4;
        *(int *)(DAT_100baa10 + local_10 * 0x80) = iVar1;
        *(int *)(DAT_100baa14 + local_10 * 0x80) = param_3;
        return local_10;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
