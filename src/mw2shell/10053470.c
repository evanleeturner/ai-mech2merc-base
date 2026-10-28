/* SPDX-License-Identifier: MIT */
/* mw2shell 10053470 */
/* mw2shell 10053470: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
typedef struct wchar_t wchar_t;
extern char s___keyboard_Alt_1009fbc8[];
extern char s___keyboard_Alt_1009fbdc[];
extern char s___keyboard_Control_1009fb98[];
extern char s___keyboard_Control_1009fbb0[];
extern char s___keyboard_Shift_1009fbf0[];
extern char s___keyboard_Shift_1009fc04[];
int __cdecl FID_conflict__fwprintf(FILE * _File, wchar_t * _Format, ...);

void __cdecl FUN_10053470(FILE * param_1, int param_2)

{
  char *_Format;
  
  if ((*(uint *)(param_2 + 8) & 1) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
      FID_conflict__fwprintf(param_1,(wchar_t *)s___keyboard_Control_1009fbb0);
    }
  }
  else {
    FID_conflict__fwprintf(param_1,(wchar_t *)s___keyboard_Control_1009fb98);
  }
  if ((*(uint *)(param_2 + 8) & 2) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x20) == 0) goto LAB_100534cd;
    _Format = s___keyboard_Alt_1009fbdc;
  }
  else {
    _Format = s___keyboard_Alt_1009fbc8;
  }
  FID_conflict__fwprintf(param_1,(wchar_t *)_Format);
LAB_100534cd:
  if ((*(uint *)(param_2 + 8) & 4) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x40) != 0) {
      FID_conflict__fwprintf(param_1,(wchar_t *)s___keyboard_Shift_1009fc04);
    }
    return;
  }
  FID_conflict__fwprintf(param_1,(wchar_t *)s___keyboard_Shift_1009fbf0);
  return;
}
