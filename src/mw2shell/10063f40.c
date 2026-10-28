/* SPDX-License-Identifier: MIT */
/* mw2shell 10063f40 */
/* mw2shell 10063f40: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

int * __cdecl FUN_10063f40(int * param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == -1) {
      return (int *)0x0;
    }
    if (0 < param_1[0xb]) break;
    iVar1 = param_1[0xe];
    param_1 = param_1 + 0xe;
  }
  return param_1;
}
