/* SPDX-License-Identifier: MIT */
/* mercsw 1005124a */
/* mercsw 1005124a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7558;
extern undefined4 DAT_100aafa4;
extern undefined4 DAT_100aafa8;
extern undefined4 DAT_100aca50;
extern undefined4 DAT_100aca54;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100aefa8;
extern undefined4 DAT_100b0870;
extern undefined4 DAT_100b0874;
extern undefined4 DAT_100b3a0c;
extern undefined4 DAT_100b3a24;
extern undefined4 DAT_100b3a28;
extern undefined4 DAT_100b3a48;
extern undefined4 DAT_100b3a4c;
extern undefined4 DAT_100b3a54;
extern undefined4 DAT_100b3a58;
extern undefined4 DAT_100b3a60;
extern undefined4 DAT_100b3a64;
extern undefined4 DAT_10114db0;
extern undefined4 DAT_10123230;
extern undefined DAT_1012327a[];
extern char s_Center_Torso_Selected_100b08c0[];
extern char s_Collision_Damage_OFF_100b0978[];
extern char s_Collision_Damage_ON_100b0964[];
extern char s_Head_Selected_100b0898[];
extern char s_Heat_Tracking_OFF_100b09a4[];
extern char s_Heat_Tracking_ON_100b0990[];
extern char s_LOD_Quality_HIGH_100b09b8[];
extern char s_LOD_Quality_LOW_100b09cc[];
extern char s_Left_Arm_Selected_100b0900[];
extern char s_Left_Leg_Selected_100b0928[];
extern char s_Left_Torso_Selected_100b08d8[];
extern char s_Right_Arm_Selected_100b08ec[];
extern char s_Right_Leg_Selected_100b0914[];
extern char s_Right_Torso_Selected_100b08a8[];
extern char s_Splash_Damage_OFF_100b0950[];
extern char s_Splash_Damage_ON_100b093c[];
undefined __cdecl FUN_1001a5e1(int param_1);
undefined __cdecl FUN_1001a7d4(int param_1, int param_2);
undefined __stdcall FUN_1002c530(void);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1005be24(char * param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_1002cd49(uint param_1);
undefined __stdcall FUN_100864d7(void);

void __cdecl FUN_1005124a(uint param_1)

{
  char local_2c [40];
  
  switch(param_1 & 0xffff) {
  case 0x15:
    FUN_1001a5e1(2);
    break;
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x99:
  case 0x9b:
  case 0xa1:
  case 0xa2:
  case 0xab:
    break;
  case 0x17:
    FUN_1001a7d4(1,0);
    break;
  case 0x18:
    FUN_1001a7d4(0,0);
    break;
  case 0x26:
    FUN_1002c530();
    break;
  case 0x74:
    DAT_100b0870 = 1;
    break;
  case 0x75:
    DAT_100b0870 = 2;
    break;
  case 0x76:
    DAT_100b0870 = 3;
    break;
  case 0x77:
    DAT_100b0870 = 4;
    break;
  case 0x78:
    DAT_100b0870 = 5;
    break;
  case 0x79:
    DAT_100b0870 = 6;
    break;
  case 0x7a:
    DAT_100b0870 = 7;
    break;
  case 0x7b:
    DAT_100b0870 = 8;
    break;
  case 0x7c:
    DAT_100b0870 = 9;
    break;
  case 0x7d:
    DAT_100b0870 = 0;
    break;
  case 0x7e:
    _sprintf(local_2c,s_Head_Selected_100b0898);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 1;
    break;
  case 0x7f:
    _sprintf(local_2c,s_Right_Torso_Selected_100b08a8);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 2;
    break;
  case 0x80:
    _sprintf(local_2c,s_Center_Torso_Selected_100b08c0);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 3;
    break;
  case 0x81:
    _sprintf(local_2c,s_Left_Torso_Selected_100b08d8);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 4;
    break;
  case 0x82:
    _sprintf(local_2c,s_Right_Arm_Selected_100b08ec);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 5;
    break;
  case 0x83:
    _sprintf(local_2c,s_Left_Arm_Selected_100b0900);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 6;
    break;
  case 0x84:
    _sprintf(local_2c,s_Right_Leg_Selected_100b0914);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 7;
    break;
  case 0x85:
    _sprintf(local_2c,s_Left_Leg_Selected_100b0928);
    FUN_1005be24(local_2c,1,0x16a,0x32);
    DAT_100b0874 = 8;
    break;
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
    DAT_100aca50 = (param_1 & 0xff) - 0x86;
    if (DAT_10123230 <= DAT_100aca50) {
      DAT_100aca50 = -1;
    }
    break;
  case 0x90:
    if (DAT_100aca50 == (undefined4)(-1)) {
      DAT_100aca50 = -2;
    }
    else {
      DAT_100aca50 = -1;
    }
    break;
  case 0x91:
    DAT_100aca54 = DAT_100aca54 + -1;
    break;
  case 0x92:
    DAT_100aca54 = DAT_100aca54 + 1;
    break;
  case 0x93:
    if ((DAT_100aca50 != (undefined4)(-1)) &&
       (DAT_1012327a[DAT_100aca50 * 0x3c0a + DAT_100aca54 * 0x13f] == '\x03')) {
      DAT_1012327a[DAT_100aca50 * 0x3c0a + DAT_100aca54 * 0x13f] = 6;
    }
    break;
  case 0x94:
    if ((DAT_100aca50 != (undefined4)(-1)) &&
       (DAT_1012327a[DAT_100aca50 * 0x3c0a + DAT_100aca54 * 0x13f] == '\x03')) {
      DAT_1012327a[DAT_100aca50 * 0x3c0a + DAT_100aca54 * 0x13f] = 5;
    }
    break;
  case 0x95:
    FUN_1002cd49(0x100);
    break;
  case 0x96:
    FUN_1002cd49(0x200);
    break;
  case 0x97:
    FUN_1002cd49(0x400);
    break;
  case 0x98:
    FUN_1002cd49(0x800);
    break;
  case 0x9a:
    DAT_100b3a60 = (uint)(DAT_100b3a60 == 0);
    DAT_100b3a64 = DAT_100b3a60;
    break;
  case 0x9c:
    if (DAT_100aafa8 == 0) {
      DAT_100aafa8 = 1;
    }
    else if (DAT_100aafa8 == 1) {
      DAT_100aafa8 = 2;
    }
    else {
      DAT_100aafa8 = 0;
    }
    break;
  case 0x9d:
    DAT_100b3a24 = (uint)(DAT_100b3a24 == 0);
    DAT_100b3a28 = DAT_100b3a24;
    break;
  case 0x9e:
    if (*(short *)(DAT_10114db0 + 6) == 0) {
      *(undefined2 *)(DAT_10114db0 + 6) = 1;
    }
    else {
      *(undefined2 *)(DAT_10114db0 + 6) = 0;
    }
    break;
  case 0x9f:
    DAT_100b3a48 = (uint)(DAT_100b3a48 == 0);
    DAT_100b3a4c = DAT_100b3a48;
    break;
  case 0xa0:
    DAT_100b3a54 = (uint)(DAT_100b3a54 == 0);
    DAT_100b3a58 = DAT_100b3a54;
    break;
  case 0xa3:
    if (*(char *)(DAT_100adf34 + 2) == '\0') {
      *(undefined1 *)(DAT_100adf34 + 2) = 1;
      _sprintf(local_2c,s_Splash_Damage_ON_100b093c);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    else {
      *(undefined1 *)(DAT_100adf34 + 2) = 0;
      _sprintf(local_2c,s_Splash_Damage_OFF_100b0950);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    break;
  case 0xa4:
    if (*(char *)(DAT_100adf34 + 3) == '\0') {
      *(undefined1 *)(DAT_100adf34 + 3) = 1;
      _sprintf(local_2c,s_Collision_Damage_ON_100b0964);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    else {
      *(undefined1 *)(DAT_100adf34 + 3) = 0;
      _sprintf(local_2c,s_Collision_Damage_OFF_100b0978);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    break;
  case 0xa5:
    if (*(char *)(DAT_100adf34 + 4) == '\0') {
      *(undefined1 *)(DAT_100adf34 + 4) = 1;
      _sprintf(local_2c,s_Heat_Tracking_ON_100b0990);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    else {
      *(undefined1 *)(DAT_100adf34 + 4) = 0;
      _sprintf(local_2c,s_Heat_Tracking_OFF_100b09a4);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    break;
  case 0xa6:
    if (DAT_100aefa8 == 2) {
      DAT_100aefa8 = 1;
      _sprintf(local_2c,s_LOD_Quality_HIGH_100b09b8);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    else {
      DAT_100aefa8 = 2;
      _sprintf(local_2c,s_LOD_Quality_LOW_100b09cc);
      FUN_1005be24(local_2c,1,0x16a,0x32);
    }
    break;
  case 0xa7:
    FUN_100864d7();
    break;
  case 0xa8:
    break;
  case 0xa9:
    DAT_100a7558 = (uint)(DAT_100a7558 == 0);
    break;
  case 0xaa:
    DAT_100b3a24 = (uint)(DAT_100b3a24 == 0);
    break;
  case 0xac:
    DAT_100b3a54 = (uint)(DAT_100b3a54 == 0);
    break;
  case 0xad:
    DAT_100b3a48 = (uint)(DAT_100b3a48 == 0);
    break;
  case 0xae:
    if (DAT_100aafa4 == 0) {
      DAT_100aafa4 = 2;
    }
    else if (DAT_100aafa4 == 1) {
      DAT_100aafa4 = 0;
    }
    else {
      DAT_100aafa4 = 1;
    }
    break;
  case 0xaf:
    DAT_100b3a0c = (uint)(DAT_100b3a0c == 0);
  }
  return;
}
