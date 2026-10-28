/* SPDX-License-Identifier: MIT */
/* mercsw 10070095 */
/* mercsw 10070095: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined PTR_DAT_100b4068[];
extern undefined PTR_s_Escape_Key_100b4250[];
extern char s_Keyboard_100b47cc[];
extern char s_keyboard_100b47c0[];
extern char s_keyboard_100b47d8[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined4 __cdecl FUN_10070095(undefined4 param_1, char * param_2)

{
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = 'y';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  _sprintf(param_2,s_keyboard_100b47c0);
  _sprintf(param_2 + 0xc,s_Keyboard_100b47cc);
  _sprintf(param_2 + 0x4c,s_keyboard_100b47d8);
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  *(undefined ***)(param_2 + 0x68) = (undefined **)(PTR_s_Escape_Key_100b4250);
  *(undefined ***)(param_2 + 0x6c) = (undefined **)(PTR_DAT_100b4068);
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  return 0;
}
