/* SPDX-License-Identifier: MIT */
/* mercsw 1006a16d */
/* mercsw 1006a16d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3a38;
extern undefined4 DAT_100b3a3c;
extern undefined4 DAT_100b3a64;
extern undefined4 DAT_100b3a68;
extern char s__8_8ld_100b3bf0[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __cdecl FUN_1005c0df(int param_1, int param_2, char * param_3, int param_4, int param_5);

void __stdcall FUN_1006a16d(void)

{
  char local_2c [40];
  
  if (DAT_100b3a68 == 0) {
    DAT_100b3a68 = 1;
  }
  _sprintf(local_2c,s__8_8ld_100b3bf0,0);
  if (DAT_100b3a64 != 0) {
    FUN_1005c0df(0x37,1,local_2c,DAT_100b3a38,DAT_100b3a3c);
  }
  return;
}
