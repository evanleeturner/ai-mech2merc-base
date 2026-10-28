/* SPDX-License-Identifier: MIT */
/* mercsw 10070ed9 */
/* mercsw 10070ed9: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_100b4834[];
void * __cdecl _malloc(size_t _Size);
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
undefined __cdecl FUN_10070d99(undefined4 * param_1);

int * __cdecl FUN_10070ed9(char * param_1)

{
  int *piVar1;
  FILE *pFVar2;
  
  piVar1 = _malloc(0x4bc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    pFVar2 = _fopen(param_1,DAT_100b4834);
    *piVar1 = (int)pFVar2;
    if (*piVar1 == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[0x12d] = 0;
      FUN_10070d99((undefined4 *)(piVar1));
    }
  }
  return piVar1;
}
