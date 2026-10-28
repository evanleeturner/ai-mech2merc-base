/* SPDX-License-Identifier: MIT */
/* mw2shell 10018020 */
void _qsort(void *base, size_t num, size_t width, int (__cdecl *compare)(const void *, const void *));

void __cdecl FUN_10018020(int param_1)
{
    int local_state;
    void *local_base;
    int (__cdecl *local_compare)(const void *, const void *);

    if (param_1 != 0) {
        if ((*(unsigned char *)(param_1 + 0xc) & 2) != 0) {
            __builtin_memcpy(&local_state, (void *)(param_1 + 0xd), 4);
            if (local_state == 1) {
                __builtin_memcpy(&local_base, (void *)(param_1 + 0x11), 4);
                __builtin_memcpy(&local_compare, (void *)(param_1 + 0x19), 4);
                _qsort(local_base, *(size_t *)(param_1 + 4), 4, local_compare);
                int zero = 0;
                __builtin_memcpy((void *)(param_1 + 0xd), &zero, 4);
            }
        }
    }
    return;
}
