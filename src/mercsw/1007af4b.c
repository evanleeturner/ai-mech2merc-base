/* SPDX-License-Identifier: MIT */
/* mercsw 1007af4b */
extern char LAB_10076068[];

unsigned int __cdecl FUN_1007af4b(unsigned int *param_1, unsigned int *param_2)
{
    unsigned short in_CS;

    /* P-code: INT_ZEXT of the 16-bit CS segment register (register 0x102) */
    __asm { mov in_CS, cs }

    *param_2 = (unsigned int)in_CS;
    *param_1 = (unsigned int)LAB_10076068;
    return 0x4ec6;
}
