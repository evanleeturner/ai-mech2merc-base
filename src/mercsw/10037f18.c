/* SPDX-License-Identifier: MIT */
/* mercsw 10037f18 */
/* mercsw 10037f18: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf78;
extern undefined4 DAT_100adf7c;
extern char s_MCGA_DLL_100ae410[];
extern char s_VESA480_DLL_100ae41c[];
extern char s_VESA768_DLL_100ae428[];
int __cdecl __strcmpi(char * _Str1, char * _Str2);

void __cdecl FUN_10037f18(char * param_1)

{
  int iVar1;
  
  iVar1 = __strcmpi(param_1,s_MCGA_DLL_100ae410);
  if (iVar1 == 0) {
    DAT_100adf78 = 0x140;
    DAT_100adf7c = 200;
  }
  else {
    iVar1 = __strcmpi(param_1,s_VESA480_DLL_100ae41c);
    if (iVar1 == 0) {
      DAT_100adf78 = 0x280;
      DAT_100adf7c = 0x1e0;
    }
    else {
      iVar1 = __strcmpi(param_1,s_VESA768_DLL_100ae428);
      if (iVar1 == 0) {
        DAT_100adf78 = 0x400;
        DAT_100adf7c = 0x300;
      }
      else {
        DAT_100adf78 = 0x140;
        DAT_100adf7c = 200;
      }
    }
  }
  return;
}
