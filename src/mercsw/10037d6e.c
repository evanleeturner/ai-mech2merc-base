/* SPDX-License-Identifier: MIT */
/* mercsw 10037d6e */
/* mercsw 10037d6e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1f4;
extern undefined4 DAT_100adf80;
extern undefined4 DAT_100adf88;
extern undefined4 DAT_100adf8c;
extern undefined4 DAT_100adf94;
extern undefined4 DAT_100b9d4c;
extern undefined2 DAT_100ba96c;
extern char s_WinMain_3___pause_timer_false__100ae3d0[];
extern char s_WinMain_4___pause_timer_TRUE__100ae3f0[];
undefined __stdcall FUN_10051093(void);
int __cdecl FUN_100498c5(int param_1);
int __stdcall ShowCursor(int);
undefined __cdecl FUN_10002168(char * param_1);
undefined __cdecl FUN_10036b20(ushort param_1, short param_2);
undefined __stdcall FUN_1006aeb1(void);
undefined __stdcall FUN_10088e93(void);
undefined __stdcall FUN_10051071(void);
undefined __stdcall FUN_1006ae8d(void);
undefined __stdcall FUN_10088e7e(void);

void __stdcall FUN_10037d6e(void)

{
  int iVar1;
  
  if (DAT_100adf8c != 0) {
    if ((DAT_100adf88 == 0) || (DAT_100ba96c == 0)) {
      if ((DAT_100aa1f4 != 0) || (iVar1 = FUN_100498c5(4), iVar1 != 0)) {
        DAT_100adf8c = 0;
      }
    }
    else {
      FUN_10051093();
      DAT_100ba96c = 0;
      DAT_100adf8c = 0;
    }
  }
  iVar1 = FUN_100498c5(4);
  if (((iVar1 == 0) && (DAT_100adf80 != 0)) && (DAT_100adf8c == 0)) {
    if (DAT_100adf88 != 0) {
      do {
        iVar1 = ShowCursor(0);
      } while (-1 < iVar1);
      DAT_100adf94 = 0;
      FUN_10002168(s_WinMain_3___pause_timer_false__100ae3d0);
      FUN_10036b20(0x80,0);
      FUN_1006aeb1();
      FUN_10088e93();
      DAT_100adf88 = 0;
    }
  }
  else if ((DAT_100adf88 == 0) && (DAT_100aa1f4 == 0)) {
    if (DAT_100adf8c != 0) {
      FUN_10051071();
      DAT_100ba96c = 0;
    }
    iVar1 = FUN_100498c5(4);
    if ((iVar1 == 0) && (DAT_100b9d4c != 1)) {
      do {
        iVar1 = ShowCursor(1);
      } while (iVar1 < 0);
      DAT_100adf94 = 1;
    }
    FUN_10002168(s_WinMain_4___pause_timer_TRUE__100ae3f0);
    FUN_10036b20(0x80,1);
    FUN_1006ae8d();
    FUN_10088e7e();
    DAT_100adf88 = 1;
  }
  return;
}
