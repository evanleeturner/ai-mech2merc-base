/* SPDX-License-Identifier: MIT */
/* mercsw 10071107 */
/* mercsw 10071107: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);

size_t __cdecl FUN_10071107(undefined4 * param_1, void * param_2, size_t param_3)

{
  size_t sVar1;
  
  sVar1 = _fread(param_2,1,param_3,(FILE *)*param_1);
  if (sVar1 != param_3) {
    sVar1 = 0xffffffff;
  }
  return sVar1;
}
