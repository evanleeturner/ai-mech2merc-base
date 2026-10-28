/* SPDX-License-Identifier: MIT */
/* mercsw 100142b4 */
extern int __cdecl FUN_1003d2d3(int param_1, int param_3);
extern int __cdecl FUN_10060161(int param_1, int param_2, int param_3, int param_4, int *param_5);
extern int __cdecl FUN_1005fb3a(int param_1, int param_2, int param_3, int param_4, int *param_5);
extern int DAT_100aa540;
extern int DAT_100aa544;
extern int DAT_100aa548;
extern int DAT_100aa54c;
extern int DAT_100aa550;
extern int DAT_100aa554;
extern int DAT_10160c00;

int __cdecl FUN_100142b4(int param_1, int param_2, int param_3)
{
  int iVar1;
  int (*local_20)(int, int, int, int, int *);
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_c = -0x7fffffff;
  local_10 = -0x7fffffff;
  FUN_1003d2d3(param_1, param_3);
  local_8 = DAT_10160c00;
  do {
    if (local_8 == 0) {
      if (local_c < -0x7ffffffe && (local_c = local_10, local_10 < -0x7ffffffe)) {
        local_c = 0;
      }
      return local_c;
    }
    local_18 = local_18 + 1;
    if (local_8 == 0) {
      return 0;
    }
    for (local_1c = *(int *)(local_8 + 0x10); local_1c != 0; local_1c = *(int *)(local_1c + 0x10)) {
      if (*(int *)(local_1c + 0x24) == 5) {
        local_20 = FUN_10060161;
      }
      else if (*(int *)(local_1c + 0x24) == 0) {
        local_20 = FUN_1005fb3a;
      }
      else {
        continue;
      }
      iVar1 = (*local_20)(local_1c, param_1, param_2, param_3, &local_14);
      if (iVar1 != 0) {
        if (((local_c == -0x7fffffff) && (local_14 < param_2)) && (local_10 < local_14)) {
          local_10 = local_14;
          DAT_100aa54c = DAT_100aa540;
          DAT_100aa550 = DAT_100aa544;
          DAT_100aa554 = DAT_100aa548;
        }
        if (((param_2 < local_14 + 1000) && (local_14 + -1000 < param_2)) && (local_c < local_14)) {
          local_c = local_14;
          DAT_100aa54c = DAT_100aa540;
          DAT_100aa550 = DAT_100aa544;
          DAT_100aa554 = DAT_100aa548;
        }
      }
    }
    local_8 = *(int *)(&DAT_10160c00 + local_18 * 4);
  } while (1);
}
