/* SPDX-License-Identifier: MIT */
/* mercsw 10009232 */
extern int *DAT_100a7310;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_100b0710;
extern unsigned char DAT_10215670[];
extern unsigned char DAT_100ef030[];
extern int DAT_100af17c;
extern int DAT_101686f0;
extern int *PTR_DAT_100af0b4;

extern int __cdecl FUN_100357e3(int *param_1);
extern int __cdecl FUN_100091ee(int param_1, unsigned char param_2);
extern unsigned int __cdecl FUN_1004d5e3(unsigned int param_1);
extern unsigned int __cdecl FUN_1004d60d(unsigned int param_1);
extern unsigned short *__cdecl FUN_1008668b(int param_1, int param_2, int *param_3);
extern int __cdecl FUN_10056fc4(int *param_1, int param_2, int param_3, int param_4, int param_5);
extern void __cdecl FUN_1008664f(int param_1, int *param_2);

void __cdecl FUN_10009232(int *param_1)
{
  int iVar1;
  unsigned short *puVar2;
  unsigned int local_38;
  int local_34;
  int local_30;
  int local_2c[3];
  int *local_20;
  unsigned int local_1c;
  unsigned int local_18;
  int local_14;
  int local_10;
  int local_c;
  unsigned int local_8;

  local_20 = (int *)*param_1;
  local_14 = -1;
  local_30 = 2;
  if (DAT_100a7310 != (int *)0) {
    local_20 = DAT_100a7310;
  }
  local_c = DAT_100eef40[DAT_100adf38];
  local_2c[0] = *(int *)(local_c + 200);
  local_2c[1] = *(int *)(local_c + 0xcc);
  local_2c[2] = *(int *)(local_c + 0xd0);
  local_10 = FUN_100357e3(local_2c);
  if ((local_10 != 0) && (param_1[0x20] != 0)) {
    local_10 = ((int (__cdecl *)(int *, int, int))param_1[0x20])(local_20, local_2c[0], local_2c[1]);
  }
  local_38 = *(unsigned int *)(local_c + 0xdc);
  do {
    if (local_30 == 0) {
      return;
    }
    if ((local_38 != 0) && ((local_38 & 0x1000) == 0)) {
      local_1c = local_38 & 0xf00;
      local_8 = local_38 & 0xff;
      if (local_1c == 0x100) {
        if (local_10 == 0) {
          local_18 = 0;
        }
        else {
          iVar1 = FUN_100091ee((int)(DAT_10215670 + local_8 * 0x54), (unsigned char)DAT_100b0710);
          local_18 = (unsigned int)(iVar1 != 0);
        }
        local_34 = 5;
      }
      else if (local_1c == 0x200) {
        local_18 = FUN_1004d5e3(local_8);
        if (((*(unsigned short *)(DAT_100eef40[local_8] + 0x14) & 0x1400) == 0) ||
            ((*(unsigned short *)(DAT_100eef40[local_8] + 0x14) & 0x800) != 0)) {
          local_34 = 3;
        }
        else {
          local_34 = 2;
        }
      }
      else {
        if (local_1c != 0x400) {
          return;
        }
        local_18 = FUN_1004d60d(local_8);
        if ((*(unsigned short *)(DAT_100ef030 + local_8 * 0x40) & 0x1400) == 0) {
          local_34 = 3;
        }
        else {
          local_34 = 2;
        }
      }
      if (local_10 == 0) {
        local_34 = 6;
      }
      local_14 = *(int *)(param_1[0x1c] + (unsigned int)local_34 * 0xc + local_18 * 4);
      if (local_14 == 0) {
        return;
      }
      puVar2 = FUN_1008668b(DAT_100af17c, (int)((unsigned int)DAT_101686f0 + (unsigned int)local_14),
                            PTR_DAT_100af0b4);
      if (puVar2 != (unsigned short *)0) {
        if (local_10 == 0) {
          if (param_1[0x21] != 0) {
            ((void (__cdecl *)(int *, int *, int *))param_1[0x21])(local_20, local_2c, local_2c);
            FUN_10056fc4(local_20, (int)puVar2, 0, local_2c[0], local_2c[1]);
          }
        }
        else {
          FUN_10056fc4(local_20, (int)puVar2, 0, local_2c[0], local_2c[1]);
        }
        FUN_1008664f((int)((unsigned int)DAT_101686f0 + (unsigned int)local_14), PTR_DAT_100af0b4);
      }
    }
    local_2c[0] = *(int *)(local_c + 0xf0);
    local_2c[1] = *(int *)(local_c + 0xf4);
    local_2c[2] = *(int *)(local_c + 0xf8);
    local_10 = FUN_100357e3(local_2c);
    if ((local_10 != 0) && (param_1[0x20] != 0)) {
      local_10 = ((int (__cdecl *)(int *, int, int))param_1[0x20])(local_20, local_2c[0], local_2c[1]);
    }
    local_38 = *(unsigned int *)(local_c + 0x104);
    local_30 = local_30 + -1;
  } while (1);
}
