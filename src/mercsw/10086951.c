/* SPDX-License-Identifier: MIT */
/* mercsw 10086951 */
extern void * __cdecl HeapAlloc(void *bytes, unsigned int param_2, unsigned int param_3);
extern void * DAT_100adf74;

void __cdecl FUN_10086951(unsigned int bytes)
{
    HeapAlloc(DAT_100adf74, 9, bytes);
    return;
}
