/* SPDX-License-Identifier: MIT */
/* mercsw 1001bd50 */
extern void *DAT_100adf74;

void * __stdcall HeapAlloc(void *, DWORD, DWORD);

unsigned int * __stdcall FUN_1001bd50(void)
{
    unsigned int *puVar1;

    puVar1 = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x18);
    if (puVar1 != (unsigned int *)0) {
        puVar1[4] = 0;
        puVar1[2] = puVar1[4];
        *puVar1 = puVar1[2];
        puVar1[5] = 0;
        puVar1[3] = puVar1[5];
        puVar1[1] = puVar1[3];
    }
    return puVar1;
}
