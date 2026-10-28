/* SPDX-License-Identifier: MIT */
/* mercsw 1005ec45 */
/* mercsw 1005ec45: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined PTR_s_Down_Up_100b34b0[];
extern undefined PTR_s_LeftBtn_100b34c8[];
extern undefined PTR_s_Left_button_100b34b8[];
extern undefined PTR_s_Mouse_Down_Up_Movement_100b34a8[];
extern char s_Mouse_100b3508[];
extern char s_mouse_100b3500[];
extern char s_mouse_100b3510[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined4 __cdecl FUN_1005ec45(undefined4 param_1, char * param_2)

{
  param_2[0x58] = '\x02';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\x03';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  _sprintf(param_2,s_mouse_100b3500);
  _sprintf(param_2 + 0xc,s_Mouse_100b3508);
  _sprintf(param_2 + 0x4c,s_mouse_100b3510);
  *(undefined ***)(param_2 + 0x60) = (undefined **)(PTR_s_Mouse_Down_Up_Movement_100b34a8);
  *(undefined ***)(param_2 + 100) = (undefined **)(PTR_s_Down_Up_100b34b0);
  *(undefined ***)(param_2 + 0x68) = (undefined **)(PTR_s_Left_button_100b34b8);
  *(undefined ***)(param_2 + 0x6c) = (undefined **)(PTR_s_LeftBtn_100b34c8);
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  return 0;
}
