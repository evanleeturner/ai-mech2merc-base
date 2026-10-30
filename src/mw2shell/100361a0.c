/* SPDX-License-Identifier: MIT */
/* mw2shell 100361a0 */
extern void *PTR_DAT_10093b2c;

void __cdecl MarkTableEntryUnset_Likely(int param_1)
{
    *(int *)(PTR_DAT_10093b2c + param_1 * 0x40 + 0x14) = 0xffffffff;
    return;
}
