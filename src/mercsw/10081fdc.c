/* SPDX-License-Identifier: MIT */
/* mercsw 10081fdc */
/* mercsw 10081fdc: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *LPRECT;
extern HWND DAT_100adf6c;
extern undefined4 DAT_100adf88;
extern undefined4 DAT_100b34d8;
extern undefined4 DAT_100b9a18;
extern undefined4 DAT_100b9a1c;
extern undefined * DAT_100b9a20;
extern undefined4 DAT_100b9a24;
extern undefined4 DAT_100b9a2c;
extern undefined DAT_100b9a30[];
extern undefined4 DAT_100b9d54;
extern undefined4 DAT_100b9d58;
extern undefined4 DAT_100b9d5c;
extern undefined4 DAT_100c9240;
extern undefined4 DAT_100c9244;
extern undefined4 DAT_100c9248;
extern undefined4 DAT_100c924c;
extern undefined4 DAT_100c967c;
extern undefined4 DAT_100c9680;
extern undefined4 PTR_DAT_100b99f0[];
extern undefined4 PTR_DAT_100b9a00[];
extern char s_MechWarrior2_cannot_run_in_a_win_100b9e30[];
extern char s_MechWarrior2_cannot_support_full_100b9eb0[];
extern char s_ToggleFullScreen_1___pause_timer_100b9e08[];
extern char s_ToggleFullScreen_2___pause_timer_100b9e88[];
extern char s_ToggleFullScreen_3___pause_timer_100b9f10[];
extern char s_ToggleFullScreen_4___pause_timer_100b9f38[];
undefined __cdecl FUN_10002168(char * param_1);
undefined __cdecl FUN_10036b20(ushort param_1, short param_2);
undefined __cdecl FUN_10002110(char * param_1);
int __stdcall GetWindowRect(HWND, void *);

void __stdcall FUN_10081fdc(void)

{
  int local_10;
  undefined *local_8;
  
  if ((DAT_100b9a24 == 0) &&
     (((DAT_100b9d54 != 0 || (DAT_100c967c < DAT_100b9d58)) || (DAT_100c9680 < DAT_100b9d5c)))) {
    FUN_10002168(s_ToggleFullScreen_1___pause_timer_100b9e08);
    FUN_10036b20(0x80,1);
    if (*(int *)(DAT_100b9a18 + 4) == 1) {
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        local_8 = (undefined *)(PTR_DAT_100b9a00[local_10]);
        if ((*(int *)(local_8 + 8) != 0) &&
           (*(int *)(PTR_DAT_100b99f0[*(int *)(local_8 + 4)] + 4) == 2)) break;
      }
      if (local_10 == 6) {
        FUN_10002110(s_MechWarrior2_cannot_run_in_a_win_100b9e30);
        if (DAT_100adf88 != 0) {
          return;
        }
        FUN_10002168(s_ToggleFullScreen_2___pause_timer_100b9e88);
        FUN_10036b20(0x80,0);
        return;
      }
    }
    else {
      if (DAT_100b9a20 == (undefined *)0x0) {
        FUN_10002110(s_MechWarrior2_cannot_support_full_100b9eb0);
        if (DAT_100adf88 != 0) {
          return;
        }
        FUN_10002168(s_ToggleFullScreen_3___pause_timer_100b9f10);
        FUN_10036b20(0x80,0);
        return;
      }
      local_8 = DAT_100b9a20;
      GetWindowRect(DAT_100adf6c,(LPRECT)&DAT_100c9240);
      DAT_100c9248 = DAT_100c9248 - DAT_100c9240;
      DAT_100c924c = DAT_100c924c - DAT_100c9244;
    }
    (**(code **)(DAT_100b9a1c + 0x14))();
    DAT_100b9a1c = (undefined4)(local_8);
    ((void (*)(undefined4, undefined4, undefined4))((**(code **)(local_8 + 0x10))))(DAT_100b9a2c,DAT_100c967c,DAT_100c9680);
    ((void (*)(int, int, undefined *, int))((**(code **)(DAT_100b9a18 + 0x14))))(0,0x100,DAT_100b9a30,1);
    DAT_100b34d8 = 1;
    if (DAT_100adf88 == 0) {
      FUN_10002168(s_ToggleFullScreen_4___pause_timer_100b9f38);
      FUN_10036b20(0x80,0);
    }
  }
  return;
}
