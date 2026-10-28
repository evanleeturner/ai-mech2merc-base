/* SPDX-License-Identifier: MIT */
/* mw2shell 10017ff0 */
extern void _qsort(void *, size_t, size_t, int (__cdecl *)(const void *, const void *));

void __cdecl FUN_10017ff0(int param_1)
{
    int field_d;
    __builtin_memcpy(&field_d, (void *)(param_1 + 0xd), 4);
    if ((param_1 != 0) && (field_d == 1)) {
        void *base;
        size_t num;
        int (__cdecl *cmp)(const void *, const void *);
        __builtin_memcpy(&base, (void *)(param_1 + 0x11), 4);
        num = *(size_t *)(param_1 + 4);
        __builtin_memcpy(&cmp, (void *)(param_1 + 0x19), 4);
        _qsort(base, num, 4, cmp);
        int zero = 0;
        __builtin_memcpy((void *)(param_1 + 0xd), &zero, 4);
    }
    return;
}
