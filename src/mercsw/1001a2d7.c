/* SPDX-License-Identifier: MIT */
/* mercsw 1001a2d7 */
/* mercsw 1001a2d7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aaf70;
extern undefined4 DAT_100ab074;
extern undefined4 DAT_100ab07c;
extern undefined4 DAT_100ab090;
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100ab09c;
extern undefined4 DAT_100ab0a0;
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b38d8;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100ba9b0;
extern undefined4 DAT_100ba9b4;
extern undefined4 DAT_100ba9b8;
extern undefined4 DAT_100ba9bc;
extern undefined4 DAT_100ba9c0;
extern undefined4 DAT_100ba9c4;
extern undefined DAT_100ba9d4;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_1001a635(int param_1);
undefined __cdecl FUN_1001a5e1(int param_1);
undefined4 __stdcall FUN_1001a620(void);
undefined __stdcall FUN_1001a9f9(void);
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1001aa9c(int param_1, int param_2, int param_3, int param_4);
undefined __stdcall FUN_1001ae8f(void);
undefined __stdcall FUN_1001b0bb(void);
undefined __cdecl FUN_1001b179(int param_1, int param_2, int param_3, int param_4, int param_5);
undefined __stdcall FUN_10039454(void);
undefined __stdcall FUN_1001b3e9(void);

void __stdcall FUN_1001a2d7(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_8;
  
  DAT_100ab074 = DAT_100ba9c4;
  FUN_1001a635(0);
  DAT_100ab090 = 0;
  DAT_100ab094 = 0;
  if (DAT_100b38d8 == 0) {
    local_8 = 2;
    FUN_1001a5e1(2);
    DAT_100ab0a0 = 0;
  }
  else {
    local_8 = FUN_1001a620();
    if (local_8 == 0) {
      DAT_100ab0a0 = DAT_100eef40[DAT_100adf38];
    }
    if (DAT_100ab0a0 == 0) {
      local_8 = 2;
    }
  }
  DAT_100aaf70 = 0;
  switch(local_8) {
  case 0:
  case 6:
    FUN_1001ae8f();
    break;
  case 1:
    iVar2 = FUN_10011e60(DAT_100ba9bc,DAT_100b3904,0xb5);
    iVar3 = FUN_10011e60(DAT_100ba9c0,DAT_100b3904,0xb5);
    iVar1 = DAT_100ba9b0;
    local_20 = FUN_10011e60(DAT_100ba9b4,DAT_100b3904,0xb5);
    if ((DAT_100ab318 != 0) && (DAT_100ab09c == 0)) {
      local_20 = DAT_100b3904 << 0xe;
    }
    FUN_1001aa9c(iVar2 >> 0x10,iVar3 >> 0x10,iVar1,local_20);
    break;
  default:
    iVar1 = FUN_10011e60(DAT_100ba9c0,DAT_100b3904,0xb5);
    iVar2 = FUN_10011e60(DAT_100ba9bc,DAT_100b3904,0xb5);
    iVar3 = FUN_10011e60(DAT_100ba9b8,DAT_100b3904,0xb5);
    iVar4 = FUN_10011e60(DAT_100ba9b4,DAT_100b3904,0xb5);
    if (DAT_100ba9b0 < 1) {
      if (DAT_100ba9b0 < 0) {
        local_1c = (DAT_100b3904 * -0x2d0000) / 0xb5;
      }
      else {
        local_1c = 0;
      }
    }
    else {
      local_1c = (DAT_100b3904 * 0x2d0000) / 0xb5;
    }
    DAT_100ba9d4 = 1;
    FUN_1001b179(iVar1 >> 0xf,iVar2 >> 0xf,iVar3 >> 0x10,iVar4,local_1c);
    break;
  case 3:
    FUN_1001a9f9();
    break;
  case 4:
    FUN_1001b0bb();
  }
  DAT_100ab07c = local_8;
  FUN_10039454();
  FUN_1001b3e9();
  return;
}
