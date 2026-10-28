/* SPDX-License-Identifier: MIT */
/* mercsw 10047003 */
/* mercsw 10047003: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef UINT MMRESULT;
extern undefined4 DAT_100b04b4;
UINT __stdcall auxGetVolume(UINT, void *);

uint __stdcall FUN_10047003(void)

{
  MMRESULT MVar1;
  uint local_8;
  
  if ((DAT_100b04b4 != 0xffffffff) && (MVar1 = auxGetVolume(DAT_100b04b4,&local_8), MVar1 == 0)) {
    return local_8 & 0xffff;
  }
  return 0xffffffff;
}
