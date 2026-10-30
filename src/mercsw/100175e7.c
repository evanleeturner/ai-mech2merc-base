/* SPDX-License-Identifier: MIT */
/* mercsw 100175e7 */
/* mercsw 100175e7: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);

uint __cdecl FUN_100175e7(FILE * file, int param_2, int param_3)

{
  uint local_c;
  size_t local_8;
  
  for (local_c = 0;
      ((local_c < param_3 - 1U &&
       (local_8 = _fread((void *)(local_c + param_2),1,1,file), local_8 != 0)) &&
      (*(char *)(local_c + param_2) != '\n')); local_c = local_c + 1) {
  }
  if ((local_c != 0) || (local_8 != 0)) {
    local_c = local_c + 1;
    *(undefined1 *)(local_c + param_2) = 0;
  }
  return local_c;
}
