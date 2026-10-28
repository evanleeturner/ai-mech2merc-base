/* SPDX-License-Identifier: MIT */
/* mercsw 10048051 */
/* mercsw 10048051: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b0678;
extern undefined4 DAT_101f52d4;
extern undefined4 DAT_101f52f4;
extern undefined DAT_101f5300[];
extern char s_mw2_04d_gif_100b0694[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_10051cb0(char * param_1);
undefined __stdcall FUN_10051d19(void);
int __cdecl FUN_10051d99(int param_1);
undefined __stdcall FUN_10051e25(void);

void __stdcall FUN_10048051(void)

{
  int iVar1;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14 [16];
  
  (void)local_24;
  (void)local_20;
  (void)local_1c;
  (void)local_18;
  iVar1 = DAT_100b0678;
  local_28 = (undefined4 *)(DAT_101f5300);
  local_24 = 0;
  local_20 = 0;
  local_1c = DAT_101f52f4;
  local_18 = DAT_101f52d4;
  if (DAT_100b0678 < 1000) {
    DAT_100b0678 = DAT_100b0678 + 1;
    _sprintf(local_14,s_mw2_04d_gif_100b0694,iVar1);
    FUN_10051cb0(local_14);
    FUN_10051d19();
    FUN_10051d99((int)&local_28);
    FUN_10051e25();
  }
  return;
}
