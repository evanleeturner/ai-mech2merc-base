/* SPDX-License-Identifier: MIT */
/* mercsw 10052b78 */
/* mercsw 10052b78: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a553c;
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100aa1f4;
extern undefined4 DAT_100aafa4;
extern undefined4 DAT_100ab09c;
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100ad6e0;
extern undefined4 DAT_100adf28;
extern undefined4 DAT_100adf2c;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100adf88;
extern undefined4 DAT_100b09f0;
extern undefined4 DAT_100b09f4;
extern undefined4 DAT_100b0a04;
extern undefined4 DAT_100b0a1c;
extern undefined4 DAT_100b0a20;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100b9420;
extern undefined2 DAT_100ba96c;
extern undefined DAT_100ba9ca;
extern undefined DAT_100ba9cd;
extern undefined DAT_100ba9e0;
extern char s_Exiting_Mission_Area____100b0de8[];
extern char s_Exiting_Mission_Area____100b0e00[];
extern char s_Press_SPACEBAR_to_advance_viewpo_100b0e18[];
undefined __cdecl FUN_10007c93(int param_1);
undefined4 __cdecl FUN_1005be24(char * param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_1001a7d4(int param_1, int param_2);
undefined __cdecl FUN_1000242a(undefined4 param_1, int param_2);
undefined __cdecl FUN_10052235(undefined2 param_1);
undefined4 __cdecl FUN_100528ee(uint param_1);
uint __cdecl FUN_10088ea8(short param_1);
undefined4 __cdecl FUN_100482cb(int param_1);
undefined4 __cdecl FUN_10071150(int param_1, int param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1001a5e1(int param_1);
undefined __cdecl FUN_10053021(uint param_1);

void __stdcall FUN_10052b78(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_100adf88 == 0) {
    if ((0 < DAT_100b09f4) && (DAT_100b09f4 < DAT_100b38fc)) {
      FUN_10007c93(1);
      DAT_100b09f4 = 0;
    }
    if ((DAT_100b09f0 == 0) && (DAT_100b0a04 == 0)) {
      if ((DAT_100b0a1c == 0) && (DAT_100b9420 == 0)) {
        if (DAT_100ab318 != 0) {
          DAT_100ad6e0 = 0;
          FUN_1001a7d4(0,1);
          DAT_100aafa4 = 0;
          FUN_1000242a(0,0);
          DAT_100b09f4 = DAT_100b38fc + 0x108;
          if (DAT_100aa1f4 == 0) {
            DAT_100b0a04 = 1;
            DAT_100b09f0 = DAT_100b38fc + 0x16a;
            FUN_1005be24(s_Exiting_Mission_Area____100b0e00,1,0x1536,100);
          }
          else {
            DAT_100b09f0 = DAT_100b38fc + 0x43e;
          }
        }
      }
      else {
        DAT_100b0a20 = 0;
        DAT_100b0a04 = 1;
        DAT_100b09f4 = DAT_100b38fc + 0x108;
        DAT_100b09f0 = DAT_100b38fc + 0x16a;
        FUN_1005be24(s_Exiting_Mission_Area____100b0de8,1,0x1536,100);
      }
    }
    else if ((0 < DAT_100b09f0) && (DAT_100b09f0 < DAT_100b38fc)) {
      DAT_100b0a04 = 1;
      if (((DAT_100aa1f4 == 0) || (DAT_100b0a1c != 0)) || (DAT_100b9420 != 0)) {
        DAT_100adf28 = 1;
        DAT_100adf2c = 0x29a;
      }
      else if (*(char *)(DAT_100adf34 + 8) == '\0') {
        DAT_100b09f0 = -1;
        FUN_1005be24(s_Press_SPACEBAR_to_advance_viewpo_100b0e18,1,0x58610,100);
        DAT_100b0a20 = 1;
        DAT_100ab09c = 1;
      }
      else {
        DAT_100b09f0 = 0;
        DAT_100b0a20 = 2;
      }
    }
    uVar1 = DAT_100ba96c;
    if (DAT_100aa1ac == 0) {
      FUN_10052235(DAT_100ba96c);
    }
    if (((DAT_100ad6e0 == 0) || (iVar2 = FUN_100528ee((uint)uVar1), iVar2 == 0)) &&
       (uVar3 = FUN_10088ea8(uVar1), (short)uVar3 != 0)) {
      if (DAT_100b0a04 == 0) {
        FUN_10053021(uVar3 & 0xffff);
      }
      else if (((DAT_100aa1f4 == 0) || (DAT_100b0a1c != 0)) || (DAT_100b9420 != 0)) {
        if ((uVar3 & 0xffff) == 0x71) {
          DAT_100adf28 = 1;
          DAT_100adf2c = 0x29a;
        }
      }
      else if (*(char *)(DAT_100adf34 + 8) == '\0') {
        if (DAT_100ab09c != 0) {
          uVar3 = uVar3 & 0xffff;
          if (uVar3 == 0x4a) {
            FUN_100482cb(4);
          }
          else if (uVar3 == 0x67) {
            FUN_1001a7d4(1,0);
          }
          else if (uVar3 == 0x71) {
            DAT_100adf28 = 1;
            DAT_100adf2c = 0x29a;
          }
        }
      }
      else {
        uVar3 = uVar3 & 0xffff;
        if (uVar3 == 0x4a) {
          FUN_100482cb(4);
        }
        else if (uVar3 == 0x67) {
          DAT_100aafa4 = 0;
          FUN_1000242a(0,0);
          FUN_10071150(DAT_100adf38,0,0,0);
          FUN_1001a5e1(0);
          DAT_100ba9ca = 1;
          DAT_100ba9cd = 1;
          DAT_100ba9e0 = 1;
          DAT_100a553c = 0;
          DAT_100b09f4 = 0;
          DAT_100b0a20 = 0;
          DAT_100b09f0 = 0;
          DAT_100b0a04 = 0;
          DAT_100b0a1c = 0;
          DAT_100ab09c = 0;
        }
        else if (uVar3 == 0x71) {
          DAT_100adf28 = 1;
          DAT_100adf2c = 0x29a;
        }
      }
    }
  }
  return;
}
