/* SPDX-License-Identifier: MIT */
/* mercsw 10018540 */
/* mercsw 10018540: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae48;
extern undefined4 DAT_100aae50;
extern undefined4 DAT_100aae74;
extern undefined4 DAT_100aae78;
extern undefined4 DAT_100aae7c;
extern undefined4 g_disabled100aafbc_Likely;
extern undefined DAT_10115100[];
extern undefined4 DAT_10160ef0;
extern undefined4 DAT_10160f54;
undefined __stdcall FUN_10035f13(void);
undefined4 __cdecl FUN_10017bc1(int param_1, uint param_2, int param_3, int param_4);
undefined4 __cdecl FUN_1001793d(int param_1, int * param_2, int param_3, int param_4);

void __stdcall FUN_10018540(void)

{
  undefined4 uVar1;
  undefined1 local_118 [12];
  int local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined4 local_f4;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b0;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_6c;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  int local_8;
  
  (void)local_108;
  (void)local_100;
  (void)local_fc;
  (void)local_f4;
  (void)local_c8;
  (void)local_c4;
  (void)local_c0;
  (void)local_bc;
  (void)local_b8;
  (void)local_b0;
  (void)local_84;
  (void)local_80;
  (void)local_7c;
  (void)local_78;
  (void)local_74;
  (void)local_6c;
  (void)local_40;
  (void)local_3c;
  (void)local_38;
  (void)local_34;
  (void)local_30;
  (void)local_28;
  FUN_10035f13();
  uVar1 = g_disabled100aafbc_Likely;
  local_10c = -DAT_100aae50;
  local_84 = DAT_100aae50;
  local_c8 = DAT_100aae50;
  local_104 = -DAT_100aae50;
  local_7c = DAT_100aae50;
  local_38 = DAT_100aae50;
  local_3c = 200000;
  local_80 = 200000;
  local_c4 = 200000;
  local_108 = 200000;
  DAT_100aae74 = DAT_100aae74 + DAT_100aae7c;
  DAT_100aae78 = DAT_100aae78 + DAT_100aae7c;
  if (0x7f < DAT_100aae74) {
    DAT_100aae74 = 0;
    DAT_100aae78 = DAT_100aae48;
  }
  local_34 = DAT_100aae74;
  local_100 = DAT_100aae74;
  local_78 = DAT_100aae78;
  local_bc = DAT_100aae78;
  local_b8 = DAT_100aae74;
  local_fc = DAT_100aae74;
  local_74 = DAT_100aae78;
  local_30 = DAT_100aae78;
  local_28 = 0;
  local_6c = 0;
  local_b0 = 0;
  local_f4 = 0;
  g_disabled100aafbc_Likely = 0;
  local_c0 = local_104;
  local_40 = local_10c;
  local_8 = FUN_10017bc1((int)local_118,4,DAT_10160f54,DAT_10160ef0);
  if (local_8 != 0) {
    FUN_1001793d(8,(int *)(DAT_10115100),local_8,0);
  }
  g_disabled100aafbc_Likely = uVar1;
  return;
}
