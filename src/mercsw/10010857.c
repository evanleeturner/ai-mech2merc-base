/* SPDX-License-Identifier: MIT */
/* mercsw 10010857 */
extern unsigned char DAT_101ec430[];

void __cdecl FUN_10010857(int param_1)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-overlap-compare"
    if ((-1 < param_1) || (param_1 < 7)) {
#pragma clang diagnostic pop
        **(unsigned int **)(&DAT_101ec430[0] + (unsigned int)param_1 * 4U) = 0;
        *(unsigned int *)((unsigned int)*(int *)(&DAT_101ec430[0] + (unsigned int)param_1 * 4U) + 0xcU) = 0;
    }
    return;
}
