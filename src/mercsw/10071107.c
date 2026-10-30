/* SPDX-License-Identifier: MIT */
/* mercsw 10071107 */
/* mercsw 10071107: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);

size_t __cdecl FUN_10071107(undefined4 * param_1, void * dstBuf, size_t count)

{
  size_t sVar1;
  
  sVar1 = _fread(dstBuf,1,count,(FILE *)*param_1);
  if (sVar1 != count) {
    sVar1 = 0xffffffff;
  }
  return sVar1;
}
