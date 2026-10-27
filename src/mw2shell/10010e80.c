/* SPDX-License-Identifier: MIT */
/* mw2shell 10010e80 */
void __stdcall _AIL_set_sample_loop_count(int param_1, int param_2);

void __thiscall FUN_10010e80(void *this, int param_1)
{
    *(int *)((char *)this + 0x10) = param_1;
    int field_29;
    __builtin_memcpy(&field_29, (char *)this + 0x29, 4);
    if (field_29 != 0) {
        _AIL_set_sample_loop_count(field_29, param_1);
    }
    return;
}
