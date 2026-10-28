/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e790 */
/* mw2shell 1000e790: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef const void *LPCSTR;
extern undefined4 DAT_1008e3e0;
undefined * __cdecl FUN_1000e6d0(undefined4 param_1);
DWORD __stdcall GetFileAttributesA(const void *);

undefined4 __cdecl FUN_1000e790(undefined4 param_1)

{
  LPCSTR pCVar1;
  DWORD DVar2;
  
  pCVar1 = FUN_1000e6d0(param_1);
  DVar2 = GetFileAttributesA(pCVar1);
  if (DVar2 != 0xffffffff) {
    return 1;
  }
  DAT_1008e3e0 = 1;
  pCVar1 = FUN_1000e6d0(param_1);
  DVar2 = GetFileAttributesA(pCVar1);
  if (DVar2 == 0xffffffff) {
    return 0;
  }
  DAT_1008e3e0 = 1;
  return 1;
}
