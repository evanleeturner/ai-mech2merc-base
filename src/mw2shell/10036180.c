/* SPDX-License-Identifier: MIT */
/* mw2shell 10036180 */
extern unsigned char DAT_10093900;
extern unsigned char DAT_10093a18;
extern unsigned char *PTR_DAT_10093b2c;

unsigned int * __cdecl FUN_10036180(int param_1)
{
    unsigned int *puVar1;

    if (param_1 < 0) {
        return (unsigned int *)PTR_DAT_10093b2c;
    }
    puVar1 = (unsigned int *)&DAT_10093a18;
    if (param_1 == 0) {
        puVar1 = (unsigned int *)&DAT_10093900;
    }
    return puVar1;
}
