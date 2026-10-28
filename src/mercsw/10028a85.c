/* SPDX-License-Identifier: MIT */
/* mercsw 10028a85 */
/* mercsw 10028a85: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aca50;
extern undefined4 DAT_100aca54;
extern undefined4 DAT_100aca58;
extern undefined4 DAT_100aca5c;
extern undefined4 DAT_100aca60;
undefined __stdcall FUN_10027502(void);
undefined __stdcall FUN_1002753b(void);
undefined __stdcall FUN_10027ec0(void);
undefined __cdecl FUN_100280a3(int param_1);

void __stdcall FUN_10028a85(void)

{
  if (DAT_100aca50 != DAT_100aca60) {
    DAT_100aca60 = DAT_100aca50;
    DAT_100aca58 = 0xffffffff;
    DAT_100aca5c = 0xffffffff;
    DAT_100aca54 = 0;
    FUN_10027502();
  }
  if (DAT_100aca50 == (undefined4)(-1)) {
    FUN_1002753b();
  }
  else if (DAT_100aca50 == (undefined4)(-2)) {
    FUN_10027ec0();
  }
  else {
    FUN_100280a3(DAT_100aca50);
  }
  return;
}
