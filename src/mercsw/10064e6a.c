/* SPDX-License-Identifier: MIT */
/* mercsw 10064e6a */
/* mercsw 10064e6a: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern FILE * DAT_100c7f9c;
int __cdecl _putc(int _Ch, FILE * _File);

undefined4 __cdecl FUN_10064e6a(byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _putc((uint)param_1,DAT_100c7f9c);
  if (iVar1 == -1) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
