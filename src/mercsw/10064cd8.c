/* SPDX-License-Identifier: MIT */
/* mercsw 10064cd8 */
/* mercsw 10064cd8: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern FILE * DAT_100c7f9c;
size_t __cdecl _fwrite(void * _Str, size_t _Size, size_t _Count, FILE * _File);

undefined4 __cdecl FUN_10064cd8(void * param_1, uint param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  
  sVar1 = _fwrite(param_1,1,param_2,DAT_100c7f9c);
  if (sVar1 < param_2) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
