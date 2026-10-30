/* SPDX-License-Identifier: MIT */
/* mercsw 10037859 */
/* mercsw 10037859: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef LONG LRESULT;
typedef struct RECT RECT;
extern undefined4 DAT_100adf28;
extern undefined4 DAT_100adf2c;
extern HWND DAT_100adf6c;
extern undefined4 DAT_100adf80;
extern undefined4 DAT_100adf84;
extern undefined4 DAT_100adf88;
extern undefined4 DAT_100adf90;
extern undefined4 DAT_100adf94;
extern int * DAT_100b9a18;
extern undefined4 DAT_100b9a1c;
extern undefined DAT_100b9a30[];
extern undefined4 DAT_100b9d4c;
extern undefined4 DAT_100b9d54;
extern undefined4 DAT_100b9d58;
extern undefined4 DAT_100b9d5c;
extern undefined4 DAT_100c9240;
extern undefined4 DAT_100c9244;
extern undefined4 DAT_100c9248;
extern undefined4 DAT_100c924c;
extern uint DAT_1016584c;
extern uint DAT_1016593c;
undefined __cdecl ProcessKeyboardMessages(uint wnd, UINT msg, uint wParam);
undefined __stdcall FUN_10070665(void);
undefined __stdcall FUN_10081fdc(void);
int __stdcall ShowWindow(HWND, int);
int __stdcall ValidateRect(HWND, const void *);
int __stdcall ShowCursor(int);
int __cdecl FUN_100498c5(int wnd);
LONG __stdcall GetMessageTime(void);
void __stdcall PostQuitMessage(int);
LONG __stdcall DefWindowProcA(HWND, UINT, UINT, LONG);

LRESULT __stdcall SimWindowProc(HWND wnd, uint msg, UINT wParam, uint lParam)

{
  int iVar1;
  uint uVar2;
  LRESULT LVar3;
  
                    /* 0x37859  2  SimWindowProc */
  if ((0xff < msg) && (msg < 0x109)) {
    ProcessKeyboardMessages(msg,wParam,lParam);
    return 0;
  }
  if (msg < 0x10) {
    if (msg == 0xf) {
      if ((DAT_100adf84 != 0) && (DAT_100b9d4c == 2)) {
        (**(code **)(DAT_100b9a1c + 0x18))();
        ValidateRect(wnd,(RECT *)0x0);
        return 0;
      }
    }
    else if (msg == 2) {
      PostQuitMessage(0);
      return 0;
    }
  }
  else if (msg < 0x1d) {
    if (msg == 0x1c) {
      if (DAT_100adf28 == 0) {
        DAT_100adf80 = wParam;
        if (wParam == 1) {
          FUN_10070665();
          if ((DAT_100b9d58 < 0x281) && (DAT_100b9d5c < 0x1e1)) {
            if (DAT_100b9d54 == 1) {
              FUN_10081fdc();
              DAT_100b9d54 = 0;
              ShowWindow(DAT_100adf6c,9);
            }
            else if ((DAT_100b9a18 != (int *)0x0) && (*DAT_100b9a18 == 1)) {
              ShowWindow(DAT_100adf6c,4);
            }
          }
          else if (DAT_100b9d4c == 1) {
            ShowWindow(DAT_100adf6c,9);
          }
        }
        else if ((DAT_100b9d58 < 0x281) && (DAT_100b9d5c < 0x1e1)) {
          if (((DAT_100b9a18 == (int *)0x0) || (*DAT_100b9a18 != 0)) || (DAT_100b9d54 != 0)) {
            if ((DAT_100b9a18 != (int *)0x0) && (*DAT_100b9a18 == 1)) {
              ShowWindow(DAT_100adf6c,0);
            }
          }
          else {
            ShowWindow(DAT_100adf6c,6);
            DAT_100b9d54 = 1;
            FUN_10081fdc();
          }
        }
        else {
          ShowWindow(DAT_100adf6c,6);
        }
        if (DAT_100b9a18 != (int *)0x0) {
          ((void (*)(int, int, undefined *, int))((*(code *)DAT_100b9a18[5])))(0,0x100,DAT_100b9a30,1);
        }
        return 0;
      }
    }
    else if (msg == 0x10) {
      DAT_100adf2c = DAT_100adf2c + 2;
      DAT_100adf28 = 1;
      return 0;
    }
  }
  else if (msg < 0xa1) {
    if (msg == 0xa0) {
      if ((DAT_100adf94 == 0) && (DAT_100b9d4c == 2)) {
        do {
          iVar1 = ShowCursor(1);
        } while (iVar1 < 0);
        DAT_100adf94 = 1;
      }
    }
    else if ((msg == 0x46) && (DAT_100adf90 != 0)) {
      uVar2 = GetMessageTime();
      if ((DAT_1016593c < uVar2) && ((DAT_1016584c < DAT_1016593c || (uVar2 < DAT_1016584c)))) {
        DAT_100adf90 = 0;
      }
      else {
        *(undefined4 *)(lParam + 8) = DAT_100c9240;
        *(undefined4 *)(lParam + 0xc) = DAT_100c9244;
        *(undefined4 *)(lParam + 0x10) = DAT_100c9248;
        *(undefined4 *)(lParam + 0x14) = DAT_100c924c;
      }
      return 0;
    }
  }
  else {
    if (msg == 0x200) {
      if ((DAT_100adf94 != 0) && ((DAT_100adf88 == 0 || (iVar1 = FUN_100498c5(4), iVar1 == 1)))) {
        do {
          iVar1 = ShowCursor(0);
        } while (-1 < iVar1);
        DAT_100adf94 = 0;
      }
      return 0;
    }
    if (msg == 0x30f) {
      if (DAT_100b9a18 != (int *)0x0) {
        ((void (*)(int, int, undefined *, int))((*(code *)DAT_100b9a18[5])))(0,0x100,DAT_100b9a30,1);
        return 1;
      }
      return 0;
    }
  }
  LVar3 = DefWindowProcA(wnd,msg,wParam,lParam);
  return LVar3;
}
