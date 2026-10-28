/* SPDX-License-Identifier: MIT */
/* mercsw 100457f5 */
/* mercsw 100457f5: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct BITMAPINFO BITMAPINFO;
extern void * DAT_100afbc0;
extern const void * DAT_100b9d30;
extern undefined DAT_100c9250[];
extern undefined4 DAT_100c967c;
extern undefined4 DAT_100c9680;
extern undefined4 DAT_10160bec;
int __stdcall StretchDIBits(void *, int, int, int, int, int, int, int, int, const void *, const void *, UINT, DWORD);

undefined4 __cdecl FUN_100457f5(int param_1, int param_2, int param_3, int param_4)

{
  undefined4 uVar1;
  
  DAT_10160bec = StretchDIBits(DAT_100afbc0,0,0,DAT_100c967c,DAT_100c9680,param_1,
                               (DAT_100c9680 - param_4) + -1,(param_3 - param_1) + 1,
                               (param_4 - param_2) + 1,DAT_100b9d30,(BITMAPINFO *)DAT_100c9250,1,
                               0xcc0020);
  if (DAT_10160bec == DAT_100c9680) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
