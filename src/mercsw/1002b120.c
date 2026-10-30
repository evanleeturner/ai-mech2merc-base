/* SPDX-License-Identifier: MIT */
/* mercsw 1002b120 */
extern int DAT_100adf38;
extern int DAT_100ad0b0;
extern char DAT_10123240[];
extern int DAT_10123130[];
extern char DAT_101600e8[];

extern unsigned int __cdecl FUN_1004d47f(int param_1);
extern int __cdecl FUN_10027fed(int param_1);
extern int __cdecl FUN_1002b6fe(int param_1, int param_2, int param_3);
extern unsigned int __cdecl SwapOneAndTwo(int param_1);
extern void __cdecl FUN_1002b4cf(int *param_1, int param_2, int param_3, int param_4);
extern void __cdecl FUN_1002a3e0(int param_1, short param_2, unsigned short param_3);
extern void __cdecl FUN_1002c354(int param_1);

void __cdecl FUN_1002b120(int param_1)
{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int *local_44[5];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  unsigned short local_14;
  char *local_10;
  int *local_c;
  unsigned int local_8;
  unsigned int tmp_u;
  int tmp_i;

  uVar1 = 0;
  uVar3 = FUN_1004d47f(param_1);
  uVar2 = (unsigned short)uVar3;
  if (uVar2 == 0xffff) {
    iVar4 = FUN_10027fed(param_1);
    uVar2 = (unsigned short)iVar4;
    if (uVar2 == 0xffff) {
      return;
    }
  }
  iVar4 = FUN_1002b6fe(param_1, (int)local_44, 1);
  if (iVar4 != 0) {
    local_10 = DAT_10123240 + (unsigned int)param_1 * 0x3c0aU;
    local_24 = DAT_10123130[param_1];
    if (local_24 == -1) {
      local_14 = 0x200;
    }
    else {
      __builtin_memcpy(&tmp_i, local_10 + (unsigned int)local_24 * 0x13fU + 0x3c, 4);
      local_14 = (unsigned short)tmp_i;
    }
    if (local_14 == 0x400) {
      local_18 = 10;
    }
    else if ((local_14 == 0x800) || (local_14 == 0x10)) {
      local_18 = 0xb;
    }
    else {
      uVar1 = uVar2 | 0x200;
      local_18 = 5;
    }
    local_8 = 0x40;
    __builtin_memcpy(&tmp_i, local_10 + (unsigned int)local_24 * 0x13fU + 0xb7, 4);
    uVar5 = SwapOneAndTwo(tmp_i);
    local_8 = local_8 | uVar5;
    local_20 = 0;
    while ((local_20 < 0x10) && (((1 << ((unsigned char)local_20 & 0x1f)) & (int)local_14) == 0)) {
      local_20 = local_20 + 1;
    }
    for (local_1c = 0; local_1c < iVar4; local_1c = local_1c + 1) {
      local_c = local_44[local_1c];
      if (local_c[4] == 2) {
        FUN_1002b4cf(local_c, 2, (short)local_20 + 1, uVar2);
        if (((short)uVar2 != DAT_100adf38) || (DAT_100ad0b0 == 0)) {
          if ((local_c[1] == (int)(short)uVar2) && (local_18 == 5)) {
            FUN_1002a3e0((int)local_c, 0, 0);
          }
          else {
            FUN_1002a3e0((int)local_c, (short)local_18, uVar1);
          }
          __builtin_memcpy(&tmp_u, (char *)local_c + 0x17e, 4);
          tmp_u = tmp_u & 0xfffffffc;
          __builtin_memcpy((char *)local_c + 0x17e, &tmp_u, 4);
          __builtin_memcpy(&tmp_u, (char *)local_c + 0x17e, 4);
          tmp_u = tmp_u | local_8;
          __builtin_memcpy((char *)local_c + 0x17e, &tmp_u, 4);
          FUN_1002c354((int)local_c);
        }
      }
    }
    if (*(int *)(DAT_101600e8 + (unsigned int)param_1 * 0x3cU) != 0) {
      local_1c = 4;
      local_c = local_44[4];
      if (local_c[4] == 2) {
        FUN_1002b4cf(local_c, 2, (short)local_20 + 1, uVar2);
        if (((short)uVar2 != DAT_100adf38) || (DAT_100ad0b0 == 0)) {
          if ((local_c[1] == (int)(short)uVar2) && (local_18 == 5)) {
            FUN_1002a3e0((int)local_c, 0, 0);
          }
          else {
            FUN_1002a3e0((int)local_c, (short)local_18, uVar1);
          }
          __builtin_memcpy(&tmp_u, (char *)local_c + 0x17e, 4);
          tmp_u = tmp_u & 0xfffffffc;
          __builtin_memcpy((char *)local_c + 0x17e, &tmp_u, 4);
          __builtin_memcpy(&tmp_u, (char *)local_c + 0x17e, 4);
          tmp_u = tmp_u | local_8;
          __builtin_memcpy((char *)local_c + 0x17e, &tmp_u, 4);
          FUN_1002c354((int)local_c);
        }
      }
    }
    iVar4 = (int)FUN_1004d47f(param_1);
    if ((iVar4 == DAT_100adf38) && (local_14 != 0x10)) {
      DAT_100ad0b0 = 1;
    }
  }
  return;
}
