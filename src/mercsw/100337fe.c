/* SPDX-License-Identifier: MIT */
/* mercsw 100337fe */
/* mercsw 100337fe: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7b64;
extern undefined4 DAT_100adb04;
extern undefined4 DAT_100adb08;
extern undefined4 DAT_100adb0c;
extern undefined4 DAT_100adb48;
extern undefined4 DAT_100adf80;
extern undefined4 DAT_100b9a18;
extern undefined4 DAT_100b9a1c;
extern undefined4 DAT_100c6b38;
extern undefined4 DAT_100c6b3c;
extern undefined DAT_100c6b40[];
extern undefined4 DAT_100c6b58;
extern undefined4 DAT_101f5300;
undefined4 __cdecl FUN_10058e74(int * param_1, undefined1 param_2);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);

void __stdcall FUN_100337fe(void)

{
  int local_8;
  
  if ((((DAT_100a7b64 != 0) && (DAT_100adb04 != 0)) && (DAT_100adb08 != 0)) && (1 < DAT_100adb0c)) {
    if (DAT_100adf80 == 0) {
      local_8 = -1;
    }
    else {
      local_8 = ((int (*)(void))((void (*)(void))((**(code **)(DAT_100b9a18 + 0x20)))))();
    }
    if (local_8 == 0) {
      DAT_100c6b58 = DAT_101f5300;
      FUN_10058e74((int *)DAT_100c6b40,0);
      FUN_10056fc4((int *)DAT_100c6b40,DAT_100adb04,0,0,0);
      FUN_10056fc4((int *)DAT_100c6b40,DAT_100adb08,DAT_100adb48,DAT_100c6b3c,DAT_100c6b38);
      if (DAT_100adf80 != 0) {
        (**(code **)(DAT_100b9a1c + 0x18))();
      }
      DAT_100adb48 = (DAT_100adb48 + 1) % DAT_100adb0c;
    }
  }
  return;
}
