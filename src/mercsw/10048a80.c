/* SPDX-License-Identifier: MIT */
/* mercsw 10048a80 */
/* mercsw 10048a80: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b06b0;
extern undefined2 DAT_100ba96c;
extern undefined4 DAT_100ba9e8;
extern undefined4 DAT_100ba9ec;
extern undefined DAT_100ba9f2;
extern undefined DAT_100ba9f5;
extern undefined DAT_100ba9f6;
extern undefined DAT_100ba9f7;
extern undefined4 DAT_10160be4;
undefined4 __stdcall FUN_1004986d(void);
int __cdecl FUN_10036a37(uint param_1);
undefined __cdecl FUN_10036a72(uint param_1);

void __stdcall FUN_10048a80(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_10160be4 = 0;
  iVar2 = FUN_1004986d();
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(uint *)(iVar2 + 4);
  if (DAT_100ba96c == 0) {
    if ((uVar1 & 1) != 0) {
      if (DAT_100ba9f6 == '\0') {
        if (DAT_100ba9f7 != '\0') {
          DAT_10160be4 = 0x1b;
        }
      }
      else {
        DAT_10160be4 = 0xd;
      }
      if ((DAT_10160be4 == 0) && (iVar2 = FUN_10036a37(DAT_100b06b0), 0x5a < iVar2)) {
        if ((int)DAT_100ba9e8 < -0x2000) {
          DAT_10160be4 = 0xc6;
        }
        else if (0x2000 < DAT_100ba9e8) {
          DAT_10160be4 = 199;
        }
      }
      if ((DAT_10160be4 == 0) && (iVar2 = FUN_10036a37(DAT_100b06b0), 0x2d < iVar2)) {
        if ((int)DAT_100ba9ec < -0x2000) {
          DAT_10160be4 = 0xc9;
        }
        else if (0x2000 < DAT_100ba9ec) {
          DAT_10160be4 = 0x20;
        }
      }
    }
    goto LAB_10048cb9;
  }
  if (DAT_100ba96c == 0x1b) {
    DAT_10160be4 = 0x1b;
  }
  else if ((DAT_100ba96c < 0x30) || (0x39 < DAT_100ba96c)) {
    if ((uVar1 & 1) != 0) {
      if (DAT_100ba96c < 0xe) {
        if ((DAT_100ba96c == 0xd) || (DAT_100ba96c == 9)) goto LAB_10048b28;
      }
      else if (DAT_100ba96c < 0xca) {
        if ((0xc5 < DAT_100ba96c) || (DAT_100ba96c == 0x20)) {
LAB_10048b28:
          DAT_10160be4 = (int)DAT_100ba96c;
        }
      }
      else if (DAT_100ba96c == 0x209) goto LAB_10048b28;
    }
  }
  else {
    DAT_10160be4 = (int)DAT_100ba96c;
  }
  if (DAT_100ba96c == DAT_10160be4) {
    DAT_100ba96c = 0;
  }
LAB_10048cb9:
  if ((DAT_10160be4 != 0) && ((uVar1 & 1) != 0)) {
    FUN_10036a72(DAT_100b06b0);
    DAT_100ba9f2 = 1;
    DAT_100ba9f5 = 1;
  }
  return;
}
