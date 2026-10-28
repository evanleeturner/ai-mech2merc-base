/* SPDX-License-Identifier: MIT */
/* mercsw 10083e28 */
/* mercsw 10083e28: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100b9a1c;
extern undefined4 * DAT_100b9a2c;
extern int * DAT_100b9f74;
extern undefined4 DAT_100b9f78;
extern int * DAT_100b9f7c;
extern undefined4 DAT_100b9f80;
extern undefined4 DAT_100c967c;
extern undefined4 DAT_100c9680;

void __stdcall FUN_10083e28(void)

{
  *DAT_100b9a2c = 0;
  if (DAT_100b9f74 != (int *)0x0) {
    ((void (*)(int *))((**(code **)(*DAT_100b9f74 + 8))))(DAT_100b9f74);
    DAT_100b9f74 = (int *)0x0;
    DAT_100b9f78 = 0;
    DAT_100b9f80 = 0;
    if (*DAT_100b9a1c == 0) {
      DAT_100b9f7c = (int *)0x0;
    }
  }
  if ((DAT_100b9f7c != (int *)0x0) && ((DAT_100c967c != 0x140 || (DAT_100c9680 != 200)))) {
    ((void (*)(int *))((**(code **)(*DAT_100b9f7c + 8))))(DAT_100b9f7c);
    DAT_100b9f7c = (int *)0x0;
  }
  return;
}
