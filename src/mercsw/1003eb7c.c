/* SPDX-License-Identifier: MIT */
/* mercsw 1003eb7c */
extern void *DAT_100adf74;
extern int __stdcall HeapFree(void *, unsigned int, void *);

void __cdecl FUN_1003eb7c(void *mem)
{
    HeapFree(DAT_100adf74, 1, mem);
    return;
}
