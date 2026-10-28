/* SPDX-License-Identifier: MIT */
/* mw2shell 100098d0 */
/* mw2shell 100098d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10085194[];
extern undefined DAT_10086214[];
extern HANDLE DAT_10098224;
extern int * DAT_100a67b4;
extern int * DAT_100a67b8;
extern int * DAT_100a67bc;
extern int * DAT_100a67c0;
extern int * DAT_100a67c4;
extern int * DAT_100a67c8;
undefined __cdecl FUN_100180f0(int * param_1, char param_2);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_10017df0(int * param_1, undefined4 param_2);
undefined __stdcall FUN_1000c990(void);

void __cdecl FUN_100098d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  FUN_100180f0(DAT_100a67b4,'\x01');
  FUN_100180f0(DAT_100a67b8,'\x01');
  FUN_100180f0(DAT_100a67c8,'\x01');
  FUN_100180f0(DAT_100a67c4,'\x01');
  FUN_100180f0(DAT_100a67bc,'\x01');
  iVar2 = 0;
  piVar3 = (int *)(DAT_10085194);
  FUN_100180f0(DAT_100a67c0,'\x01');
  do {
    if (*piVar3 == param_1) {
      piVar1 = HeapAlloc(DAT_10098224,1,0x1a);
      *piVar1 = iVar2;
      piVar1[1] = 0;
      *(undefined1 *)(piVar1 + 2) = 0;
      *(undefined4 *)((int)piVar1 + 10) = 0xffffffff;
      *(undefined4 *)((int)piVar1 + 0xe) = 0xbdf;
      *(undefined4 *)((int)piVar1 + 0x12) = 100;
      FUN_10017df0(DAT_100a67b4,(undefined4)(piVar1));
    }
    piVar3 = piVar3 + 0x10;
    iVar2 = iVar2 + 1;
  } while (piVar3 < (int *)(DAT_10086214));
  iVar2 = 0;
  piVar3 = (int *)(DAT_10085194);
  do {
    if ((*piVar3 == param_1) && (0 < piVar3[-1])) {
      piVar1 = HeapAlloc(DAT_10098224,1,0x1a);
      *piVar1 = iVar2;
      piVar1[1] = 0;
      *(undefined1 *)(piVar1 + 2) = 1;
      *(int *)((int)piVar1 + 10) = iVar2;
      *(undefined4 *)((int)piVar1 + 0xe) = 1;
      *(undefined4 *)((int)piVar1 + 0x12) = 0xbdf;
      *(undefined4 *)((int)piVar1 + 0x16) = 100;
      FUN_10017df0(DAT_100a67b8,(undefined4)(piVar1));
    }
    piVar3 = piVar3 + 0x10;
    iVar2 = iVar2 + 1;
  } while (piVar3 < (int *)(DAT_10086214));
  iVar2 = 0;
  do {
    piVar3 = HeapAlloc(DAT_10098224,1,0x16);
    *piVar3 = iVar2;
    iVar2 = iVar2 + 1;
    piVar3[1] = 0;
    *(undefined1 *)(piVar3 + 2) = 2;
    *(undefined4 *)((int)piVar3 + 10) = 0;
    *(undefined4 *)((int)piVar3 + 0xe) = 0;
    *(undefined4 *)((int)piVar3 + 0x12) = 0;
    FUN_10017df0(DAT_100a67b4,(undefined4)(piVar3));
  } while (iVar2 < 0xb);
  FUN_1000c990();
  return;
}
