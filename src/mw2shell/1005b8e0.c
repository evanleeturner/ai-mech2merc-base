/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b8e0 */
/* mw2shell 1005b8e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a57d8[];
extern undefined4 DAT_100c6070[];
extern undefined4 DAT_100c607c;
extern undefined4 DAT_100c6100;

void __cdecl FUN_1005b8e0(undefined4 param_1, uint param_2, int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (param_2 & 0xff0000) >> 0x10;
  if (uVar3 != 0) {
    if (((param_2 >> 0x10 & 0x100) != 0) && (uVar3 < 0x59)) {
      uVar3 = *(uint *)(DAT_100a57d8 + uVar3 * 4);
    }
    if (uVar3 != 0) {
      iVar4 = uVar3 - 1;
      if (param_3 == 0) {
        iVar1 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
        uVar2 = DAT_100c6070[iVar1] & ~((int)((unsigned int)(1) << (((byte)iVar4 & 0x1f))));
      }
      else {
        iVar1 = (int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5;
        uVar2 = DAT_100c6070[iVar1] | (int)((unsigned int)(1) << (((byte)iVar4 & 0x1f)));
      }
      DAT_100c6070[iVar1] = uVar2;
      switch(uVar3) {
      case 0x1d:
      case 0x70:
        if (param_3 == 0) {
          DAT_100c607c = DAT_100c607c & 0xff7fffff;
        }
        else {
          DAT_100c607c = DAT_100c607c | 0x800000;
        }
        break;
      case 0x2a:
      case 0x36:
        if (param_3 == 0) {
          DAT_100c607c = DAT_100c607c & 0xffbfffff;
        }
        else {
          DAT_100c607c = DAT_100c607c | 0x400000;
        }
        break;
      case 0x38:
      case 0x71:
        if (param_3 == 0) {
          DAT_100c607c = DAT_100c607c & 0xfeffffff;
        }
        else {
          DAT_100c607c = DAT_100c607c | 0x1000000;
        }
      }
    }
  }
  DAT_100c6100 = param_1;
  return;
}
