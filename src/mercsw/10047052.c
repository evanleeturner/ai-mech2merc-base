/* SPDX-License-Identifier: MIT */
/* mercsw 10047052 */
/* mercsw 10047052: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef UINT MMRESULT;
extern undefined4 DAT_100b04b4;
UINT __stdcall auxSetVolume(UINT, DWORD);

undefined4 __cdecl FUN_10047052(uint param_1)

{
  MMRESULT MVar1;
  
  if (0xfffe < (int)param_1) {
    param_1 = 0xffff;
  }
  if ((DAT_100b04b4 != 0xffffffff) &&
     (MVar1 = auxSetVolume(DAT_100b04b4,(param_1 & 0xffff) | param_1 << 0x10), MVar1 == 0)) {
    return 1;
  }
  return 0;
}
