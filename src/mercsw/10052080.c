/* SPDX-License-Identifier: MIT */
/* mercsw 10052080 */
/* mercsw 10052080: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10115180[];
extern undefined DAT_10115181[];
extern undefined DAT_101151be;
void * __cdecl FID_conflict__memcpy(void * _Dst, void * _Src, size_t _Size);

bool __cdecl FUN_10052080(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = (char)((ushort)param_1 >> 8) == '\a';
  if (bVar1) {
    FID_conflict__memcpy(DAT_10115180,DAT_10115181,0x3e);
    DAT_101151be = (undefined1)param_1;
  }
  return bVar1;
}
