/* SPDX-License-Identifier: MIT */
/* mercsw 100086f7 */
/* mercsw 100086f7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7168;
extern undefined4 DAT_100a716c;
extern undefined4 DAT_100a7170;
extern undefined4 DAT_100a7174;
extern undefined4 DAT_100aafc4;
extern undefined4 DAT_100ab07c;
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100adcd0;
extern undefined4 DAT_100adcd4;
extern undefined4 DAT_100adcd8;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_10215650;
extern undefined4 DAT_10215658;
extern undefined4 DAT_10215660;
extern undefined4 PTR_FUN_100a7164;
extern undefined4 PTR_PTR_100a7b40;
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100082c4(int param_1, int param_2);
undefined __stdcall FUN_1000895c(void);

undefined4 __stdcall FUN_100086f7(void)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (((DAT_10215658 < 3) && (DAT_10215650 == 4)) && (DAT_100a7174 != 0)) {
    DAT_100adcd4 = DAT_100a7168;
    DAT_100adcd8 = DAT_100a7170;
    DAT_100a7174 = 0;
  }
  if ((DAT_10215658 == 4) &&
     ((DAT_100ab318 != 0 || ((*(ushort *)(DAT_100eef40[DAT_100adf38] + 0x14) & 6) != 0)))) {
    DAT_10215660 = 5;
  }
  if (DAT_10215658 != DAT_10215660) {
    local_8 = 1;
    switch(DAT_10215660) {
    case 0:
      DAT_10215650 = DAT_10215658;
      DAT_10215658 = 0;
      break;
    case 1:
      DAT_10215650 = DAT_10215658;
      DAT_10215658 = 1;
      break;
    case 2:
      DAT_10215650 = DAT_10215658;
      DAT_10215658 = 2;
      break;
    case 3:
      DAT_10215660 = 4;
      PTR_FUN_100a7164 = DAT_100aafc4;
      DAT_100aafc4 = (undefined4)(FUN_1000895c);
      if (*(uint *)(PTR_PTR_100a7b40 + 0xc) != 0xffffffff) {
        FUN_10003742(*(uint *)(PTR_PTR_100a7b40 + 0xc),100,0x40,5,0x50);
      }
      FUN_100082c4(0x12,-1);
      break;
    case 4:
      DAT_10215650 = DAT_10215658;
      DAT_10215658 = 4;
      if (DAT_100a7174 == 0) {
        DAT_100a7168 = DAT_100adcd4;
        DAT_100adcd4 = 0;
        DAT_100a7170 = DAT_100adcd8;
        DAT_100adcd8 = 0;
        DAT_100a716c = DAT_100adcd0;
        DAT_100a7174 = 1;
      }
      break;
    case 5:
      DAT_100aafc4 = (undefined4)((code *)PTR_FUN_100a7164);
      DAT_10215660 = DAT_10215650;
      if (*(uint *)(PTR_PTR_100a7b40 + 0x10) != 0xffffffff) {
        FUN_10003742(*(uint *)(PTR_PTR_100a7b40 + 0x10),100,0x40,5,0x50);
      }
      if (DAT_100ab07c == 1) {
        FUN_100082c4(0x11,-1);
      }
    }
  }
  return local_8;
}
