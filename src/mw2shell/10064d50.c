/* SPDX-License-Identifier: MIT */
/* mw2shell 10064d50 */
undefined4 *__thiscall FUN_10064d50(void *this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    *(undefined4 *)this = param_1;
    *(undefined4 *)((int)this + 4) = param_2;
    *(undefined4 *)((int)this + 8) = param_3;
    *(undefined4 *)((int)this + 0xc) = param_4;
    return this;
}
