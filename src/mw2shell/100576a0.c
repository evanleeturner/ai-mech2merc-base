/* SPDX-License-Identifier: MIT */
/* mw2shell 100576a0 */
extern int DAT_100a365c;
extern int g_entries100a3664_Likely;

int __cdecl EntryAddress120_Likely(int index)
{
    if ((-1 < index) && (index < DAT_100a365c)) {
        return (int)((unsigned int)g_entries100a3664_Likely + (unsigned int)index * 0x78u);
    }
    return 0;
}
