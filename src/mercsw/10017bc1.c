/* SPDX-License-Identifier: MIT */
/* mercsw 10017bc1 */
extern int __cdecl FixedDot3Shift27(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
extern void *__cdecl FUN_10080241(int param_1, int param_2);
extern void *__cdecl FUN_1008044f(int param_1, int param_2);
extern void __cdecl FUN_10080639(void *param_1);
extern void *__cdecl FUN_10080130(int param_1);

extern int DAT_10160eb0;
extern int DAT_10160ebc;
extern int DAT_1011515c;
extern int DAT_10115160;
extern int DAT_10160f48;
extern int DAT_10160f44;
extern int DAT_10160f4c;
extern int DAT_10160f0c;
extern int DAT_10160f10;
extern int DAT_10160f14;

int __cdecl FUN_10017bc1(int param_1, unsigned int param_2, int param_3, int param_4)
{
  int uVar1;
  int uVar2;
  int iVar3;
  unsigned int *puVar4;
  int uVar5;
  unsigned int *local_28;
  int local_24;
  unsigned int local_14;
  int local_10;

  uVar2 = DAT_10160ebc;
  uVar1 = DAT_10160eb0;
  if (DAT_1011515c == 0) {
    uVar5 = 0;
  }
  else {
    DAT_10115160 = 0;
    local_10 = param_1;
    DAT_10160eb0 = param_3 << 2;
    DAT_10160ebc = param_4 << 2;
    for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
      iVar3 = FixedDot3Shift27(*(int *)(local_10 + 0xc) - DAT_10160f48, DAT_10160f0c,
                           *(int *)(local_10 + 0x10) - DAT_10160f44, DAT_10160f10,
                           *(int *)(local_10 + 0x14) - DAT_10160f4c, DAT_10160f14);
      *(int *)(local_10 + 0x20) = iVar3;
      if (DAT_10160eb0 < *(int *)(local_10 + 0x20)) {
        if ((param_4 < 1) || (*(int *)(local_10 + 0x20) < DAT_10160ebc)) {
          *(char *)(local_10 + 0x28) = 0;
        }
        else {
          *(char *)(local_10 + 0x28) = 2;
        }
      }
      else {
        *(char *)(local_10 + 0x28) = 1;
      }
      local_10 = local_10 + 0x44;
    }
    local_10 = param_1;
    local_24 = (param_2 - 1) * 0x44 + param_1;
    local_14 = 0;
    while ((local_14 < param_2 && (DAT_1011515c != 0))) {
      if (*(char *)(local_24 + 0x28) != *(char *)(local_10 + 0x28)) {
        if (*(char *)(local_10 + 0x28) == '\0') {
          if (*(char *)(local_24 + 0x28) == '\x01') {
            local_28 = (unsigned int *)FUN_10080241(local_24, local_10);
          }
          else {
            local_28 = (unsigned int *)FUN_1008044f(local_24, local_10);
          }
          FUN_10080639(local_28);
        }
        else if (*(char *)(local_24 + 0x28) == '\0') {
          if (*(char *)(local_10 + 0x28) == '\x01') {
            local_28 = (unsigned int *)FUN_10080241(local_24, local_10);
          }
          else {
            local_28 = (unsigned int *)FUN_1008044f(local_24, local_10);
          }
          FUN_10080639(local_28);
        }
        else if (*(int *)(local_10 + 0x20) < *(int *)(local_24 + 0x20)) {
          puVar4 = (unsigned int *)FUN_1008044f(local_24, local_10);
          FUN_10080639(puVar4);
          puVar4 = (unsigned int *)FUN_10080241(local_24, local_10);
          FUN_10080639(puVar4);
        }
        else {
          puVar4 = (unsigned int *)FUN_10080241(local_24, local_10);
          FUN_10080639(puVar4);
          puVar4 = (unsigned int *)FUN_1008044f(local_24, local_10);
          FUN_10080639(puVar4);
        }
      }
      if ((*(char *)(local_10 + 0x28) == '\0') &&
         (puVar4 = (unsigned int *)FUN_10080130(local_10), DAT_1011515c != 0)) {
        FUN_10080639(puVar4);
      }
      local_24 = local_10;
      local_10 = local_10 + 0x44;
      local_14 = local_14 + 1;
    }
    uVar5 = DAT_10115160;
    if (DAT_1011515c == 0) {
      uVar5 = 0;
    }
  }
  DAT_10160eb0 = uVar1;
  DAT_10160ebc = uVar2;
  return uVar5;
}
