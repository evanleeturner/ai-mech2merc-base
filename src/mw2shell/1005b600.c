/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b600 */
/* mw2shell 1005b600: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined PTR_DAT_100a5208[];
extern undefined PTR_s_Escape_Key_100a53f0[];
extern char s_Keyboard_100a596c[];
extern char s_keyboard_100a5960[];
extern char s_keyboard_100a5978[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined4 __cdecl FUN_1005b600(undefined4 param_1, char * param_2)

{
  param_2[0x5c] = 'y';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  _sprintf(param_2,s_keyboard_100a5960);
  _sprintf(param_2 + 0xc,s_Keyboard_100a596c);
  _sprintf(param_2 + 0x4c,s_keyboard_100a5978);
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  *(undefined ***)(param_2 + 0x68) = (undefined **)(PTR_s_Escape_Key_100a53f0);
  *(undefined ***)(param_2 + 0x6c) = (undefined **)(PTR_DAT_100a5208);
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  return 0;
}
