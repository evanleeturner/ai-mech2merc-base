/* SPDX-License-Identifier: MIT */
/* mercsw 1005ece8 */
extern undefined4 DAT_100b34d4;

int __stdcall ClipCursor(void *);

undefined4 __stdcall FUN_1005ece8(void)
{
    ClipCursor(0);
    DAT_100b34d4 = 0;
    return 0;
}
