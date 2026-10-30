/* SPDX-License-Identifier: MIT */
/* mercsw 10044cc4 */
extern char DAT_100a7bc8[];
extern int DAT_100eef40[];

extern int __cdecl FUN_10051f43(int);
extern int __cdecl FUN_10034b8e(int *, int *, int *);
extern int __cdecl FUN_1003ba89(int *, int *, int *);
extern int __cdecl FUN_1002a132(int);
extern int __cdecl FUN_10044bba(int, int);
extern unsigned int __cdecl FUN_10044761(int, short);
extern unsigned int __cdecl FUN_10002570(unsigned int, int);
extern void __cdecl FUN_100444ea(int, int *, int, short, int, int);
extern int __cdecl FUN_10014768(int *, int *, unsigned int);

void __cdecl FUN_10044cc4(int param_1, int *param_2)
{
  unsigned short uVar1;
  short sVar2;
  int iVar3;
  unsigned int uVar4;
  short local_80;
  short local_7c;
  int local_78[14];
  unsigned int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  unsigned int local_1c;
  int local_18;
  unsigned int local_14;
  int local_10;
  unsigned int local_c;
  int local_8;
  unsigned int flags;

  local_1c = 0;
  local_18 = 0;
  __builtin_memcpy(&flags, (char *)(*param_2 + 0x1f2), 4);
  if ((((flags >> 2 & 1) != 0) && (iVar3 = FUN_10051f43(3), iVar3 != 0)) &&
      ((*(int *)(DAT_100a7bc8 + *(int *)(param_1 + 4) * 0x68) != 0 ||
        (*(int *)(param_1 + 4) == 0x15)))) {
    if (*(int *)(*param_2 + 0x10) == 2) {
      local_1c = *(unsigned int *)(*param_2 + 0xdc);
    }
    else if ((*(unsigned short *)(*param_2 + 0x17a) & 0x200) == 0) {
      local_1c = *(unsigned int *)(*param_2 + 0xdc);
    }
    else {
      local_1c = (unsigned int)*(unsigned short *)(*param_2 + 0x17a);
    }
    local_14 = local_1c & 0xf00;
    local_c = local_1c & 0xff;
    if (((local_c != 0) && (local_14 == 0x200)) &&
        (*(int *)(DAT_100eef40[local_c] + 0x1c8) != 4)) {
      if (*(int *)(*param_2 + 0x10) == 2) {
        local_18 = DAT_100eef40[local_c];
      }
      if ((local_18 == 0) && (iVar3 = FUN_10034b8e(param_2, &local_30, &local_38), iVar3 != 0)) {
        local_24 = *(int *)(DAT_100eef40[local_c] + 0x50);
        local_28 = *(int *)(DAT_100eef40[local_c] + 0x54);
        local_34 = *(int *)(DAT_100eef40[local_c] + 0x58);
        iVar3 = FUN_1003ba89(&local_24, &local_28, &local_34);
        if (iVar3 != 0) {
          local_2c = 0x30000;
          local_8 = 0xf;
          local_10 = (int)((unsigned int)*(int *)(*param_2 + 0xd8) + (unsigned int)param_2[7]) % 0x1680000;
          iVar3 = FUN_1002a132(*param_2);
          local_20 = (iVar3 >> 0x10) % 0x168;
          if (((local_10 < local_2c) && ((int)(0u - (unsigned int)local_2c) < local_10)) &&
              ((local_20 < local_8 && ((int)(0u - (unsigned int)local_8) < local_20)))) {
            local_18 = DAT_100eef40[local_c];
          }
        }
      }
      if ((local_18 != 0) && (iVar3 = FUN_10044bba(local_18, 0x41), iVar3 != 0)) {
        iVar3 = FUN_10051f43(3);
        if (iVar3 != 0) {
          local_40 = FUN_10044761(local_18, (short)*(int *)(*param_2 + 4));
          uVar4 = FUN_10002570(local_40, 0x5a0000);
          iVar3 = FUN_10051f43(2);
          if (iVar3 == 0) {
            local_7c = 1;
          }
          else {
            local_7c = -1;
          }
          iVar3 = (short)(uVar4 >> 0x10) + 1;
          uVar1 = (unsigned short)(iVar3 >> 0x1f);
          sVar2 = (short)(((((((unsigned short)iVar3 ^ uVar1) - uVar1) & 3) ^ uVar1) - uVar1) * 4);
          for (local_80 = 0; local_80 < 2; local_80 = local_80 + 1) {
            FUN_100444ea(local_18, local_78, (int)local_7c, sVar2, 5000, 0);
            iVar3 = FUN_10014768(local_78, &local_3c, *(unsigned int *)(local_18 + 4));
            if (iVar3 == 0) {
              *(int *)(local_18 + 0x1c8) = 0xb;
              *(int *)(local_18 + 0x1d4) = (int)sVar2;
              break;
            }
            local_7c = (short)(0u - (unsigned int)(int)local_7c);
          }
        }
        __builtin_memcpy(&flags, (char *)(local_18 + 0x1f2), 4);
        if ((*(int *)(local_18 + 0x1c8) == 0) && ((flags >> 1 & 1) != 0)) {
          *(int *)(local_18 + 0x1c8) = 4;
        }
      }
    }
  }
  return;
}
