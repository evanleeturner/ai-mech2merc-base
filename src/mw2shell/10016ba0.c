/* SPDX-License-Identifier: MIT */
/* mw2shell 10016ba0 */
extern unsigned int DAT_1008edf4;
extern unsigned int DAT_1008edf8;
extern unsigned int DAT_1008ee00;
extern unsigned int DAT_100b0f40;

void __cdecl FUN_10016ba0(unsigned int param_1, unsigned int param_2)
{
    DAT_1008edf8 = DAT_1008edf4;
    DAT_1008ee00 = param_1;
    DAT_100b0f40 = param_2;
    DAT_1008edf4 = 0;
}
