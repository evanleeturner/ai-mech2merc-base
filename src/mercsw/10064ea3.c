/* SPDX-License-Identifier: MIT */
/* mercsw 10064ea3 */
/* mercsw 10064ea3: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern FILE * DAT_100c7f9c;
int __cdecl _putc(int _Ch, FILE * _File);

undefined4 __cdecl FUN_10064ea3(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _putc(param_1 & 0xff,DAT_100c7f9c);
  if (iVar1 == -1) {
    uVar2 = 2;
  }
  else {
    iVar1 = _putc(param_1 >> 8,DAT_100c7f9c);
    if (iVar1 == -1) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
