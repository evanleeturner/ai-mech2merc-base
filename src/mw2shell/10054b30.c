/* SPDX-License-Identifier: MIT */
/* mw2shell 10054b30 */
/* mw2shell 10054b30: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100bd990[];
extern HWND DAT_100d08e8;
extern char s_An_input_device_has_caused_an_un_100a03a4[];
extern char s_Mercenaries_Message_100a0400[];
extern char s_The_current_Cockpit_Controls_con_100a014c[];
extern char s_The_current_Cockpit_Controls_con_100a02d8[];
extern char s_There_are_no_joystick_devices_cu_100a0084[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
int __stdcall MessageBoxA(HWND, const void *, const void *, UINT);

void __cdecl FUN_10054b30(int param_1, undefined4 param_2, undefined4 param_3)

{
  char *_Format;
  
  if (param_1 == 100) {
    _Format = s_The_current_Cockpit_Controls_con_100a014c;
  }
  else {
    if (param_1 == 0x65) {
      _sprintf((char *)(DAT_100bd990),s_The_current_Cockpit_Controls_con_100a02d8,param_3);
      goto LAB_10054b7d;
    }
    if (param_1 == 0x66) {
      _Format = s_There_are_no_joystick_devices_cu_100a0084;
    }
    else {
      _Format = s_An_input_device_has_caused_an_un_100a03a4;
    }
  }
  _sprintf((char *)(DAT_100bd990),_Format);
LAB_10054b7d:
  MessageBoxA(DAT_100d08e8,DAT_100bd990,s_Mercenaries_Message_100a0400,0x40);
  return;
}
