/* SPDX-License-Identifier: MIT */
/* mercsw 1004373c */
/* mercsw 1004373c: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100b38fc;
bool __cdecl FUN_1002950f(int param_1, short param_2);
int __cdecl FUN_1002a132(int param_1);
int __cdecl FUN_10022b70(int param_1, int param_2);
undefined4 __cdecl FUN_10044bba(int param_1, int param_2);
undefined4 __cdecl FUN_10043e6b(int param_1);
undefined __cdecl FUN_1004403d(int param_1, undefined1 param_2);
int __cdecl FUN_10051f43(int param_1);
int __cdecl FUN_100297b4(int param_1);
undefined4 __cdecl FUN_10043f2c(int param_1);

bool __cdecl FUN_1004373c(int param_1, short param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  FUN_1002950f(param_1,param_2);
  iVar1 = FUN_1002a132(param_1);
  FUN_10022b70(param_1,iVar1);
  iVar1 = *(int *)(param_1 + 0x1d4);
  if (iVar1 == 0) {
    iVar1 = FUN_10044bba(param_1,0x28);
    if ((iVar1 == 0) || (iVar1 = FUN_10043e6b(param_1), iVar1 == 0)) {
      FUN_1004403d(param_1,0);
      *(undefined4 *)(param_1 + 0x1d4) = 1;
      iVar1 = FUN_10044bba(param_1,0x14);
      if ((iVar1 != 0) && (iVar1 = FUN_10051f43(4), iVar1 == 0)) {
        *(undefined4 *)(param_1 + 0x1c8) = 5;
      }
      *(int *)(param_1 + 0x1d0) = DAT_100b38fc + 0xb5;
    }
    else {
      FUN_1004403d(param_1,1);
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x1d0) < (int)DAT_100b38fc) {
      *(undefined4 *)(param_1 + 0x1d4) = 2;
      FUN_1004403d(param_1,0);
    }
    else {
      FUN_1004403d(param_1,1);
    }
    FUN_100297b4(param_1);
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_10043f2c(param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}
