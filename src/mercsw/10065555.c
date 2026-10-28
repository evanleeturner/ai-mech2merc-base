/* SPDX-License-Identifier: MIT */
/* mercsw 10065555 */
/* mercsw 10065555: Ghidra's C, repaired by tools/ghidra_repair.py */
extern void * DAT_100b38e0;
extern void * DAT_100b38e4;
extern void * DAT_100b38e8;
undefined __stdcall FUN_100654db(void);
void * __cdecl _malloc(size_t _Size);

undefined4 __stdcall FUN_10065555(void)

{
  undefined4 uVar1;
  
  FUN_100654db();
  DAT_100b38e0 = _malloc(0x1000);
  if (DAT_100b38e0 == (void *)0x0) {
    FUN_100654db();
    uVar1 = 3;
  }
  else {
    DAT_100b38e4 = _malloc(0x4000);
    if (DAT_100b38e4 == (void *)0x0) {
      FUN_100654db();
      uVar1 = 3;
    }
    else {
      DAT_100b38e8 = _malloc(0x9bd4);
      if (DAT_100b38e8 == (void *)0x0) {
        FUN_100654db();
        uVar1 = 3;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
