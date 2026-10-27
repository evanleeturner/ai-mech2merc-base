/* SPDX-License-Identifier: MIT */
/* mercsw 100869d5 */
extern void *DAT_100adf74;
extern int __stdcall HeapFree(void *mem, unsigned int param_2, void *param_3);

void __cdecl FUN_100869d5(void *mem)
{
    HeapFree(DAT_100adf74, 1, mem);
    return;
}
