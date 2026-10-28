/* SPDX-License-Identifier: MIT */
/* mw2shell 10064e00 */
int __thiscall FUN_10064e00(void *this, int param_1, int param_2)
{
    if (*(int *)((int)this + 0xc) <= param_2 &&
        param_2 <= *(int *)((int)this + 4) &&
        *(int *)((int)this + 8) <= param_1 &&
        param_1 <= *(int *)this) {
        return 1;
    }
    return 0;
}
