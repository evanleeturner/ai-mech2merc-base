/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f760 */
int __thiscall FUN_1005f760(void *this, uint param_1)
{
    if (param_1 < *(uint *)((int)this + 0x138)) {
        return 1;
    }
    *(uint *)((int)this + 0x138) = *(int *)((int)this + 0x134) + param_1;
    return 0;
}
