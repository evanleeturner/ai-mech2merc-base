/* SPDX-License-Identifier: MIT */
/* mercsw 10071045 */
/* mercsw 10071045: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
int __cdecl _fseek(FILE * _File, long _Offset, int _Origin);

undefined4 __cdecl FUN_10071045(undefined4 * param_1, int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = _fseek((FILE *)*param_1,param_1[param_2 * 3 + 2],0);
    if (iVar2 == 0) {
      uVar1 = param_1[param_2 * 3 + 3];
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
