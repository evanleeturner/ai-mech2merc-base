/* SPDX-License-Identifier: MIT */
/* mw2shell 100624a0 */
/* mw2shell 100624a0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100a724c;
extern undefined4 * DAT_100a725c;
extern int * DAT_100a817c;
extern undefined4 DAT_100a8180;
extern int * DAT_100a8184;
extern undefined4 DAT_100a8188;
extern undefined4 DAT_100c605c;
extern undefined4 DAT_100c6060;

void __stdcall FUN_100624a0(void)

{
  *DAT_100a725c = 0;
  if (DAT_100a817c != (int *)0x0) {
    ((void (*)(int *))((**(code **)(*DAT_100a817c + 8))))(DAT_100a817c);
    DAT_100a817c = (int *)0x0;
    DAT_100a8180 = 0;
    DAT_100a8188 = 0;
    if (*DAT_100a724c == 0) {
      DAT_100a8184 = (int *)0x0;
    }
  }
  if ((DAT_100a8184 != (int *)0x0) && ((DAT_100c605c != 0x140 || (DAT_100c6060 != 200)))) {
    ((void (*)(int *))((**(code **)(*DAT_100a8184 + 8))))(DAT_100a8184);
    DAT_100a8184 = (int *)0x0;
  }
  return;
}
