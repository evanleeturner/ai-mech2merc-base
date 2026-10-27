/* SPDX-License-Identifier: MIT */
/* mercsw 1008605a */
extern void * __stdcall HeapAlloc(void *, unsigned int, unsigned int);
extern void * DAT_100adf74;
extern void * DAT_100ba7bc;

void __stdcall FUN_1008605a(void)
{
    DAT_100ba7bc = HeapAlloc(DAT_100adf74, 9, 0xfc4);
    return;
}
