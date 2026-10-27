/* SPDX-License-Identifier: MIT */
/* mw2shell 1005ed00 */
void FUN_10017c90(void *this, unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4);

void * __thiscall FUN_1005ed00(void *this, unsigned int param_1)
{
    *(unsigned int *)((char *)this + 4) = param_1;
    FUN_10017c90(this, 10, 0, 4, 0);
    return this;
}
