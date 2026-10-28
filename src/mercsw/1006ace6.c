/* SPDX-License-Identifier: MIT */
/* mercsw 1006ace6 */
/* mercsw 1006ace6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100eee60;
undefined4 __cdecl FUN_10002590(uint param_1);
undefined4 __stdcall FUN_1003c41d(void);
undefined4 __stdcall FUN_1004643b(void);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
undefined __stdcall FUN_1001d7a0(void);

undefined4 __stdcall FUN_1006ace6(void)

{
  int iVar1;
  
  FUN_10002590(8);
  FUN_1003c41d();
  iVar1 = FUN_1004643b();
  if (iVar1 == 0) {
    FUN_100108a0(0x53,(char *)0x0);
  }
  FUN_1001d7a0();
  DAT_100eee60 = DAT_100b38fc + 0x389;
  return 1;
}
