/* SPDX-License-Identifier: MIT */
/* mercsw 10060947 */
/* mercsw 10060947: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b36f4;
extern undefined4 DAT_100b36f8;
extern undefined DAT_100c7e60[];
extern undefined4 PTR_DAT_100af0c8;
undefined __cdecl FUN_100718bd(undefined4 * param_1);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined __stdcall FUN_10060517(void);

void __stdcall FUN_10060947(void)

{
  if (DAT_100b36f4 != 0) {
    FUN_100718bd((undefined4 *)DAT_100c7e60);
    DAT_100b36f4 = 0;
    FUN_1008664f(DAT_100b36f8,(int *)PTR_DAT_100af0c8);
    DAT_100b36f8 = 0xffffffff;
    FUN_10060517();
  }
  return;
}
