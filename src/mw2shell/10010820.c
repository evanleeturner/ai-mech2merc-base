/* SPDX-License-Identifier: MIT */
/* mw2shell 10010820 */
void __stdcall _AIL_waveOutClose_4(int hwo);

void __fastcall FUN_10010820(int param_1)
{
    int local_val;
    int zero = 0;

    __builtin_memcpy(&local_val, (void *)(param_1 + 5), 4);
    if (local_val != 0) {
        _AIL_waveOutClose_4(local_val);
    }
    __builtin_memcpy((void *)(param_1 + 5), &zero, 4);
    return;
}
