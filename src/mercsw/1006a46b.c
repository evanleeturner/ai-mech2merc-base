/* SPDX-License-Identifier: MIT */
/* mercsw 1006a46b */
extern void __cdecl ScalePoint(void *, void *, void *);
extern int DAT_101f5300;
extern int DAT_100b3a30;
extern int DAT_100b3a40;
extern int DAT_100b3a38;

void __stdcall FUN_1006a46b(void)
{
    ScalePoint(&DAT_101f5300, &DAT_100b3a30, &DAT_100b3a30);
    ScalePoint(&DAT_101f5300, &DAT_100b3a40, &DAT_100b3a40);
    ScalePoint(&DAT_101f5300, &DAT_100b3a38, &DAT_100b3a38);
    return;
}
