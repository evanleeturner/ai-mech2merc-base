/* SPDX-License-Identifier: MIT */
/* mercsw 1001aa9c */
extern int DAT_100ab07c;
extern int DAT_100ab318;
extern int DAT_100ab060;
extern int DAT_100ab064;
extern int DAT_100ab068;
extern int DAT_100ab06c;
extern int DAT_100ab070;
extern int DAT_100ab078;
extern int DAT_100eef40;
extern int DAT_100b38fc;
extern unsigned char *PTR_DAT_100aaf68;

extern int DAT_101eb394;
extern int DAT_101eb34c;
extern int DAT_101eb470;
extern int DAT_101eb474;
extern int DAT_101eb478;
extern int DAT_101eb3b0;
extern int DAT_101eb3b4;
extern int DAT_101eb3b8;
extern int DAT_101eb350;
extern int DAT_101eb354;
extern int DAT_101eb358;
extern int DAT_101eb380;
extern int DAT_101eb388;
extern int DAT_101eb360;
extern int DAT_101eb368;

extern void __cdecl FUN_1001a8a3(int *param_1, int *param_2, int *param_3, int *param_4, int *param_5, int *param_6);
extern void __cdecl FUN_100082c4(int param_1, int param_2);
extern void __cdecl FUN_1001a635(int param_1);
extern void __cdecl FUN_10083a59(unsigned int param_1, int param_2, unsigned int param_3, int *param_4, unsigned int *param_5, unsigned int *param_6, int *param_7);
extern void __cdecl FUN_10067ce5(int param_1, int param_2);
extern int __cdecl FUN_10067bf5(int *param_1);
extern int __cdecl FUN_10006b9a(int param_1);
extern int __cdecl FUN_10006b20(int param_1);
extern int __cdecl FixedMul16(int param_1, int param_2);
extern int __cdecl FUN_10067af1(int *param_1);
extern int __cdecl FUN_1001a58f(int *param_1);

void __cdecl FUN_1001aa9c(int param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  unsigned int local_58;
  int local_54;
  int local_50;
  int local_4c;
  unsigned int local_48;
  int local_44;
  int local_40;
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
  int local_14;
  int local_10;
  unsigned int local_c;
  int local_8;

  FUN_1001a8a3(&local_30, &local_3c, &local_44, &local_54, &local_8, &local_10);
  if (DAT_100ab07c != 1) {
    if (DAT_100ab318 == 0) {
      FUN_100082c4(0x11, -1);
    }
    if (DAT_100ab060 == 0) {
      iVar1 = *(int *)(*(int *)(DAT_100eef40 + 0x20) + 0x41c);
      DAT_100ab060 = (int)((unsigned int)iVar1 * 3u);
      DAT_100ab064 = DAT_100ab060 >> 1;
      DAT_100ab068 = (int)((unsigned int)iVar1 * 0xcu);
      DAT_100ab06c = DAT_100ab060 >> 2;
      DAT_101eb394 = (int)(200u - (unsigned int)*(int *)(*(int *)(DAT_100eef40 + 0x20) + 0x400));
      DAT_101eb34c = DAT_100ab068;
    }
    DAT_101eb470 = DAT_100b38fc;
    DAT_101eb3b0 = DAT_100b38fc;
    DAT_101eb350 = DAT_100b38fc;
    DAT_101eb380 = DAT_100b38fc;
    DAT_101eb360 = DAT_100b38fc;
    DAT_101eb478 = (int)((unsigned int)*(int *)PTR_DAT_100aaf68 - (unsigned int)local_54);
    DAT_101eb3b8 = (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 4) - (unsigned int)local_8);
    DAT_101eb358 = (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 8) - (unsigned int)local_10);
    DAT_101eb388 = *(int *)(PTR_DAT_100aaf68 + 0xc);
    DAT_101eb368 = *(int *)(PTR_DAT_100aaf68 + 0x10);
    *(int *)(PTR_DAT_100aaf68 + 0x14) = 0;
    if (*(int *)PTR_DAT_100aaf68 == local_54) {
      *(int *)PTR_DAT_100aaf68 = (int)((unsigned int)*(int *)PTR_DAT_100aaf68 + 10u);
    }
    DAT_100ab078 = 0x10000;
    FUN_1001a635(0);
  }
  DAT_100ab060 = (int)((unsigned int)DAT_100ab060 + (unsigned int)param_1);
  if (DAT_100ab068 < DAT_100ab060) {
    DAT_100ab060 = DAT_100ab068;
  }
  else if (DAT_100ab060 < DAT_100ab064) {
    DAT_100ab060 = DAT_100ab064;
  }
  local_4c = (int)((unsigned int)DAT_100ab06c + (unsigned int)param_2);
  DAT_100ab070 = (int)((unsigned int)DAT_100ab070 + (unsigned int)param_4);
  DAT_100ab070 = DAT_100ab070 % 0x1680000;
  local_14 = (int)((unsigned int)local_8 - (unsigned int)*(int *)(PTR_DAT_100aaf68 + 4));
  local_1c = (unsigned int)local_10 - (unsigned int)*(int *)(PTR_DAT_100aaf68 + 8);
  local_c = (unsigned int)local_54 - (unsigned int)*(int *)PTR_DAT_100aaf68;
  FUN_10083a59(local_c, local_14, local_1c, &local_20, &local_58, &local_48, &local_24);
  FUN_10067ce5((int)&DAT_101eb360, (int)(0u - (unsigned int)(param_3 >> 1) - (unsigned int)local_24));
  iVar1 = FUN_10067bf5(&DAT_101eb360);
  *(int *)(PTR_DAT_100aaf68 + 0x10) = iVar1;
  FUN_10067ce5((int)&DAT_101eb380, local_20);
  iVar1 = FUN_10067bf5(&DAT_101eb380);
  *(int *)(PTR_DAT_100aaf68 + 0xc) = iVar1;
  local_18 = (int)((unsigned int)local_3c - (unsigned int)DAT_100ab070) % 0x1680000;
  if (local_18 < -0xb40000) {
    local_18 = (int)((unsigned int)local_18 + 0x1680000u);
  }
  else if (0xb40000 < local_18) {
    local_18 = (int)((unsigned int)local_18 + 0xFE980000u);
  }
  local_50 = FUN_10006b9a(local_18);
  local_38 = FUN_10006b20(local_18);
  local_2c = FixedMul16(DAT_100ab060, local_38);
  local_2c = local_2c >> 0xd;
  local_40 = FixedMul16(DAT_100ab060, local_50);
  local_40 = local_40 >> 0xd;
  local_34 = local_4c;
  DAT_101eb474 = local_2c;
  iVar1 = FUN_10067af1(&DAT_101eb470);
  *(int *)PTR_DAT_100aaf68 = (int)((unsigned int)local_54 + (unsigned int)iVar1);
  DAT_101eb354 = local_40;
  iVar1 = FUN_10067af1(&DAT_101eb350);
  *(int *)(PTR_DAT_100aaf68 + 8) = (int)((unsigned int)local_10 + (unsigned int)iVar1);
  local_28 = FUN_1001a58f((int *)PTR_DAT_100aaf68);
  if ((int)((unsigned int)local_8 + (unsigned int)local_34) < local_28) {
    local_34 = (int)((unsigned int)local_28 - (unsigned int)local_8);
  }
  DAT_100ab06c = local_4c;
  if (DAT_101eb34c < local_4c) {
    DAT_100ab06c = DAT_101eb34c;
  }
  else if (local_4c < DAT_101eb394) {
    DAT_100ab06c = DAT_101eb394;
  }
  DAT_101eb3b4 = local_34;
  iVar1 = FUN_10067af1(&DAT_101eb3b0);
  *(int *)(PTR_DAT_100aaf68 + 4) = (int)((unsigned int)local_8 + (unsigned int)iVar1);
  return;
}
