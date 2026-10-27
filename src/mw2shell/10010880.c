/* SPDX-License-Identifier: MIT */
/* mw2shell 10010880 */
void __fastcall FUN_10010ad0(void *param_1);

void __fastcall FUN_10010880(int param_1)
{
    void *ptr;
    __builtin_memcpy(&ptr, (void *)(param_1 + 0xd), 4);
    if (ptr != (void *)0x0) {
        FUN_10010ad0(ptr);
    }
    return;
}
