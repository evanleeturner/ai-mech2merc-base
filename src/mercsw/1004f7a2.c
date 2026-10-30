/* SPDX-License-Identifier: MIT */
/* mercsw 1004f7a2 */
extern int DAT_10123120;
extern int DAT_100b38fc;
extern int DAT_10123230;
extern int DAT_10123130[];
extern int DAT_100b07d8;
extern int DAT_100b0710;
extern int DAT_100b0a08;
extern int DAT_100a5534;
extern int DAT_100b0a1c;
extern int DAT_100b0a04;
extern int DAT_100b09f0;
extern unsigned char DAT_10123240[];
extern unsigned char DAT_10123244[];
extern unsigned char DAT_10123248[];
extern unsigned char DAT_1012324c[];
extern unsigned char DAT_10123278[];
extern unsigned char DAT_1012327c[];

extern void __cdecl FUN_1004e800(int param_1, int param_2);
extern void __cdecl FUN_1004e457(int param_1, unsigned int param_2);
extern int __cdecl FUN_1004e6d2(int param_1, int param_2);
extern void __cdecl FUN_1002b107(int param_1);

void __stdcall FUN_1004f7a2(void)
{
  char cVar1;
  int bVar2;
  int bVar3;
  unsigned char *piVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  int cnt;
  int tmp;
  int tmp2;
  unsigned int utmp;

  DAT_10123120 = DAT_100b38fc / 0xb5;
  local_8 = 0;
  do {
    if (DAT_10123230 <= local_8) {
      return;
    }
    iVar5 = (int)((unsigned int)local_8 * 0x3c0aU);
    piVar4 = DAT_10123240 + iVar5;
    for (local_c = 0; ; local_c = local_c + 1) {
      __builtin_memcpy(&cnt, piVar4, 4);
      if (!(local_c < cnt)) break;
      FUN_1004e800(local_8, local_c);
    }
    if (DAT_10123278[iVar5] == 0) {
      bVar2 = 1;
      bVar3 = 0;
      for (local_c = 0; ; local_c = local_c + 1) {
        __builtin_memcpy(&cnt, piVar4, 4);
        if (!(local_c < cnt)) break;
        __builtin_memcpy(&tmp, piVar4 + (unsigned int)local_c * 0x13fU + 0xafU, 4);
        if (tmp != 0) {
          cVar1 = (char)piVar4[(unsigned int)local_c * 0x13fU + 0x3aU];
          if (cVar1 != '\x05') {
            if ((cVar1 == '\x06') || (cVar1 == '\b')) {
              bVar2 = 0;
              bVar3 = 1;
            }
            else {
              bVar2 = 0;
            }
          }
        }
      }
      if ((bVar2 != 0) || (DAT_100b07d8 != 0)) {
        DAT_10123278[iVar5] = 2;
        FUN_1004e457(local_8, (unsigned int)DAT_10123278[iVar5]);
        __builtin_memcpy(DAT_10123248 + iVar5, &DAT_10123120, 4);
      }
      else if (bVar3 != 0) {
        DAT_10123278[iVar5] = 3;
        FUN_1004e457(local_8, (unsigned int)DAT_10123278[iVar5]);
        __builtin_memcpy(DAT_10123248 + iVar5, &DAT_10123120, 4);
      }
      else {
        __builtin_memcpy(&tmp, DAT_1012324c + iVar5, 4);
        if (0 < tmp) {
          __builtin_memcpy(&tmp, DAT_1012324c + iVar5, 4);
          __builtin_memcpy(&tmp2, DAT_10123244 + iVar5, 4);
          if (tmp <= (int)((unsigned int)DAT_10123120 - (unsigned int)tmp2)) {
            DAT_10123278[iVar5] = 4;
            FUN_1004e457(local_8, (unsigned int)DAT_10123278[iVar5]);
            __builtin_memcpy(DAT_10123248 + iVar5, &DAT_10123120, 4);
          }
        }
      }
    }
    else if ((((local_8 == DAT_100b0710) && (DAT_100b0a08 == 0)) && (DAT_100a5534 == 0)) &&
             (DAT_100b0a1c == 0)) {
      DAT_100b0a1c = 1;
      DAT_100b0a04 = 0;
      DAT_100b09f0 = 0;
    }
    local_10 = -1;
    for (local_c = 0; ; local_c = local_c + 1) {
      __builtin_memcpy(&cnt, piVar4, 4);
      if (!(local_c < cnt)) break;
      iVar5 = FUN_1004e6d2(local_8, local_c);
      if (iVar5 != 0) {
        __builtin_memcpy(&utmp,
                         DAT_1012327c + (unsigned int)local_8 * 0x3c0aU + (unsigned int)local_c * 0x13fU,
                         4);
        if ((utmp & 0xffff0000U) == 0) {
          local_10 = local_c;
          break;
        }
      }
    }
    if (DAT_10123130[local_8] != local_10) {
      DAT_10123130[local_8] = local_10;
      FUN_1002b107(local_8);
    }
    local_8 = local_8 + 1;
  } while (1);
}
