/* SPDX-License-Identifier: MIT */
/* mercsw 10060517 */
/* mercsw 10060517: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b36d4;
extern undefined4 DAT_100b36d8;
extern undefined4 DAT_100b36e0;
extern undefined4 DAT_100b36f0;
undefined __cdecl FUN_10060563(int param_1);

void __stdcall FUN_10060517(void)

{
  if ((DAT_100b36d8 != 0) && (DAT_100b36f0 < 1)) {
    DAT_100b36d8 = 0;
    FUN_10060563(DAT_100b36e0);
    DAT_100b36d4 = DAT_100b36e0;
  }
  return;
}
