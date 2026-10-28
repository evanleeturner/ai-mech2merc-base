/* SPDX-License-Identifier: MIT */
/* mw2shell 10055bf0 */
/* mw2shell 10055bf0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
typedef struct tagPOINT { LONG x; LONG y; } tagPOINT;
extern undefined4 DAT_10098204;
extern undefined4 DAT_100a6774;
extern undefined4 DAT_100d08d4;
extern undefined4 DAT_100d08d8;
extern HWND DAT_100d08e8;
undefined __fastcall FUN_10055b40(int param_1);
int __stdcall GetCursorPos(void *);
int __stdcall ScreenToClient(HWND, void *);
short __stdcall GetAsyncKeyState(int);
DWORD __stdcall timeGetTime(void);

void __fastcall FUN_10055bf0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  BOOL BVar5;
  DWORD DVar6;
  tagPOINT local_c;
  int local_4;
  
  if (DAT_10098204 != 0) {
    if (DAT_100a6774 == 0) {
      FUN_10055b40(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x33);
    iVar2 = *(int *)(param_1 + 0x37);
    local_4 = *(int *)(param_1 + 0x3b);
    if (*(int *)(param_1 + 0x3f) != 0) {
      BVar5 = GetCursorPos(&local_c);
      if (BVar5 != 0) {
        ScreenToClient(DAT_100d08e8,&local_c);
        if ((((local_c.x < 0) || ((int)DAT_100d08d8 <= local_c.x)) || (local_c.y < 0)) ||
           ((int)DAT_100d08d4 <= local_c.y)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(LONG *)(param_1 + 0x2b) = local_c.x;
          *(LONG *)(param_1 + 0x2f) = local_c.y;
          uVar4 = GetAsyncKeyState(1);
          *(uint *)(param_1 + 0x33) = (uint)((uVar4 & 0x8000) != 0);
          uVar4 = GetAsyncKeyState(2);
          *(uint *)(param_1 + 0x37) = (uint)((uVar4 & 0x8000) != 0);
          uVar4 = GetAsyncKeyState(4);
          *(uint *)(param_1 + 0x3b) = (uint)((uVar4 & 0x8000) != 0);
        }
      }
    }
    if ((*(int *)(param_1 + 0x33) == 1) && (iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((*(int *)(param_1 + 0x37) == 1) && (iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if ((*(int *)(param_1 + 0x3b) == 1) && (local_4 == 0)) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
    if ((*(int *)(param_1 + 0x33) == 1) && (iVar1 == 0)) {
      DVar6 = timeGetTime();
      if (DVar6 - *(int *)(param_1 + 0x1f) < 0xc9) {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return;
      }
      DVar6 = timeGetTime();
      *(DWORD *)(param_1 + 0x1f) = DVar6;
    }
  }
  return;
}
