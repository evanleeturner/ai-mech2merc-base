/* SPDX-License-Identifier: MIT */
/* mercsw 1006af3b */
/* mercsw 1006af3b: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __stdcall _AIL_midiOutOpen_12(undefined4, undefined4, undefined4);

undefined4 __stdcall FUN_1006af3b(void)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = _AIL_midiOutOpen_12((undefined4)(&local_8),0,0xffffffff);
  if ((iVar1 != 0) && (iVar1 = _AIL_midiOutOpen_12((undefined4)(&local_8),0,0), iVar1 != 0)) {
    local_8 = 0;
  }
  return local_8;
}
