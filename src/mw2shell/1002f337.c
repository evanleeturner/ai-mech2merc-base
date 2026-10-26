/* SPDX-License-Identifier: MIT */
/* mw2shell 1002f337 */
unsigned int __cdecl FUN_1002f337(unsigned int *param_1, unsigned int *param_2)
{
    unsigned short cs_value;

    __asm { mov cs_value, cs }
    *param_2 = (unsigned int)cs_value;
    *param_1 = 0x100206f0u; /* address of LAB_100206f0 (unresolved code label) */
    return 0xec2au;
}
