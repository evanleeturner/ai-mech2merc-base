/* SPDX-License-Identifier: MIT */
/* mercsw 10064f77 */
/* mercsw 10064f77: Ghidra's C, repaired by tools/ghidra_repair.py */
extern void * DAT_100b38ec;
extern undefined4 DAT_100c7e70;
extern undefined4 DAT_100c7e74;
extern undefined4 DAT_100c7e78;
extern undefined4 DAT_100c7e7c;
extern undefined4 DAT_100c7e80;
extern undefined4 DAT_100c7f88;
extern undefined4 DAT_100c7f8c;
extern undefined4 DAT_100c7f90;
extern undefined4 DAT_100c7f94;
extern undefined4 DAT_100c7fa4;
undefined4 __cdecl FUN_10064cd8(void * param_1, uint param_2);
undefined4 __cdecl FUN_10065891(byte * param_1);
int __cdecl FUN_10064d15(uint param_1);
undefined4 __cdecl FUN_10064e6a(byte param_1);
int __cdecl FUN_10065126(int param_1, undefined * param_2);
undefined4 __stdcall FUN_10065815(void);

int __cdecl FUN_10064f77(int param_1, int param_2, int param_3, int param_4, undefined4 param_5)

{
  int iVar1;
  byte local_20;
  int local_1f;
  int local_1b;
  int local_17;
  int local_13;
  undefined1 local_f;
  int local_c;
  int local_8;
  
  (void)local_1f;
  (void)local_1b;
  (void)local_17;
  (void)local_13;
  (void)local_f;
  if (param_3 < 0) {
    param_3 = DAT_100c7e70;
    param_1 = 0;
  }
  if (param_4 < 0) {
    param_4 = DAT_100c7e74;
    param_2 = 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if ((DAT_100c7fa4 == 0) || (iVar1 = FUN_10064cd8(DAT_100b38ec,DAT_100c7fa4 * 3), iVar1 == 0)) {
    local_20 = 0x2c;
    DAT_100c7f90 = param_1;
    local_1f = param_1;
    DAT_100c7e78 = param_2;
    local_1b = param_2;
    DAT_100c7f94 = param_3;
    local_17 = param_3;
    DAT_100c7f88 = param_4;
    local_13 = param_4;
    local_f = 0;
    iVar1 = FUN_10065891(&local_20);
    if (iVar1 == 0) {
      local_8 = FUN_10064d15(DAT_100c7fa4);
      if (local_8 == 1) {
        local_8 = 2;
      }
      iVar1 = FUN_10064e6a((byte)local_8);
      if (iVar1 == 0) {
        DAT_100c7e7c = 0;
        DAT_100c7e80 = 0;
        DAT_100c7f8c = param_5;
        local_c = FUN_10065126(local_8,(undefined *)(FUN_10065815));
        if (local_c == 0) {
          iVar1 = FUN_10064e6a(0);
          if (iVar1 == 0) {
            local_c = 0;
          }
          else {
            local_c = 2;
          }
        }
      }
      else {
        local_c = 2;
      }
    }
    else {
      local_c = 2;
    }
  }
  else {
    local_c = 2;
  }
  return local_c;
}
