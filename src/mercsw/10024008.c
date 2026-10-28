/* SPDX-License-Identifier: MIT */
/* mercsw 10024008 */
/* mercsw 10024008: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 * __stdcall FUN_10023b0d(void);

undefined4 * __cdecl FUN_10024008(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10023b0d();
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)puVar1 + 0x1d6) = param_1;
    *(undefined4 *)((int)puVar1 + 0x1da) = param_2;
    *(undefined4 *)((int)puVar1 + 0x1f6) = param_3;
  }
  return puVar1;
}
