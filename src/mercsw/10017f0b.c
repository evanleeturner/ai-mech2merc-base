/* SPDX-License-Identifier: MIT */
/* mercsw 10017f0b */
/* mercsw 10017f0b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae58;
extern undefined4 DAT_100aae5c;
extern undefined4 DAT_100aae64;
extern int DAT_100aae68;
extern undefined4 DAT_100aafbc;
extern undefined4 DAT_100b0f18;
extern undefined4 DAT_100b0f1c;
extern undefined4 DAT_100c96bc;
extern undefined4 DAT_10115100[];
extern undefined4 DAT_1011515c;
undefined __stdcall FUN_10035f13(void);
undefined4 __cdecl FUN_10017bc1(int param_1, uint param_2, int param_3, int param_4);
undefined4 __cdecl FUN_1001793d(int param_1, int * param_2, int param_3, int param_4);

void __cdecl FUN_10017f0b(int param_1, int param_2, int param_3, int param_4, int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint local_564;
  undefined1 local_560 [12];
  int local_554;
  undefined4 local_550;
  int local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_53c;
  int local_510;
  undefined4 local_50c;
  int local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4f8;
  int local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b4;
  int local_488;
  undefined4 local_484;
  int local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_470;
  uint local_10;
  int local_c;
  int local_8;
  
  (void)local_550;
  (void)local_548;
  (void)local_544;
  (void)local_53c;
  (void)local_50c;
  (void)local_508;
  (void)local_504;
  (void)local_500;
  (void)local_4f8;
  (void)local_4cc;
  (void)local_4c8;
  (void)local_4c0;
  (void)local_4bc;
  (void)local_4b4;
  (void)local_488;
  (void)local_484;
  (void)local_480;
  (void)local_47c;
  (void)local_478;
  (void)local_470;
  FUN_10035f13();
  uVar2 = DAT_100aafbc;
  DAT_100b0f18 = 0;
  DAT_100b0f1c = 0;
  DAT_1011515c = 1;
  local_c = (DAT_100aae64 + DAT_100c96bc) >> 3;
  if (local_c < 1) {
    local_c = 0;
  }
  else if (0xf < local_c) {
    local_c = 0xf;
  }
  local_554 = DAT_100aae5c * param_4;
  local_54c = DAT_100aae5c * param_5;
  local_510 = DAT_100aae5c + local_554;
  local_4c4 = DAT_100aae5c + local_54c;
  local_484 = 0;
  local_4c8 = 0;
  local_50c = 0;
  local_550 = 0;
  local_47c = 0;
  local_548 = 0;
  local_4c0 = DAT_100aae58;
  local_504 = DAT_100aae58;
  local_500 = 0;
  local_544 = 0;
  local_4bc = DAT_100aae58;
  local_478 = DAT_100aae58;
  local_470 = 0;
  local_4b4 = 0;
  local_4f8 = 0;
  local_53c = 0;
  DAT_100aafbc = 0;
  local_508 = local_54c;
  local_4cc = local_510;
  local_488 = local_554;
  local_480 = local_4c4;
  if (DAT_100aae68 == param_2) {
    local_10 = FUN_10017bc1((int)local_560,4,param_1,param_2 + 200);
  }
  else {
    local_10 = FUN_10017bc1((int)local_560,4,param_1,param_2);
  }
  if (local_10 != 0) {
    if (DAT_100aae68 == param_2) {
      for (local_564 = 0; local_564 < local_10; local_564 = local_564 + 1) {
        *(int *)(DAT_10115100[local_564] + 0x2c) = local_c;
      }
    }
    else {
      for (local_564 = 0; local_564 < local_10; local_564 = local_564 + 1) {
        iVar1 = DAT_10115100[local_564];
        local_8 = *(int *)(iVar1 + 8) + param_1 * -4;
        if (local_8 < 0) {
          *(undefined4 *)(iVar1 + 0x2c) = 0xf;
        }
        else {
          *(int *)(iVar1 + 0x2c) =
               ((param_2 * 4 - local_8) * local_c) / (param_2 * 4 + param_1 * -4);
        }
        if (*(int *)(iVar1 + 0x2c) < 1) {
          *(undefined4 *)(iVar1 + 0x2c) = 0;
        }
        else if (0xf < *(int *)(iVar1 + 0x2c)) {
          *(undefined4 *)(iVar1 + 0x2c) = 0xf;
        }
      }
    }
    FUN_1001793d(param_3,(int *)(DAT_10115100),local_10,0);
  }
  DAT_100aafbc = uVar2;
  return;
}
