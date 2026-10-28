/* SPDX-License-Identifier: MIT */
/* mercsw 10012be0 */
/* mercsw 10012be0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern char s__s___s_100aa25c[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1005be24(char * param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);

void __cdecl FUN_10012be0(int param_1, int param_2)

{
  char local_68 [100];
  
  if (DAT_100eef40[param_2] != 0) {
    *(undefined1 *)(param_1 + 0x52) = 0;
    _sprintf(local_68,s__s___s_100aa25c,DAT_100eef40[param_2] + 0x110,param_1 + 2);
    FUN_1005be24(local_68,1,0x43e,0x32);
    FUN_10003742(0xf0,100,0x40,5,0x32);
  }
  return;
}
