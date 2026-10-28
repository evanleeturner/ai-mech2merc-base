/* SPDX-License-Identifier: MIT */
/* mercsw 10064509 */
/* mercsw 10064509: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];

void __stdcall FUN_10064509(void)

{
  int iVar1;
  
  iVar1 = DAT_100eef40[DAT_100adf38];
  if (((iVar1 != 0) && (*(code **)(iVar1 + 0x38) != (code *)0x0)) && (*(int *)(iVar1 + 0x20) != 0))
  {
    ((void (*)(undefined4))((**(code **)(iVar1 + 0x38))))(*(undefined4 *)(iVar1 + 0x20));
  }
  return;
}
