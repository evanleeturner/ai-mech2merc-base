/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f170 */
extern unsigned int DAT_1008da7c;

unsigned int __stdcall FUN_1000f170(void)
{
    if ((DAT_1008da7c & 0x80000000) != 0) {
        if ((DAT_1008da7c & 0x1000) != 0) {
            return 1;
        }
    }
    return 0;
}
