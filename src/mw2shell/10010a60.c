/* SPDX-License-Identifier: MIT */
/* mw2shell 10010a60 */
void __stdcall _AIL_stop_sequence_4(int param_1);

void __fastcall FUN_10010a60(int param_1)
{
    if (*(int *)(param_1 + 4) != 0) {
        _AIL_stop_sequence_4(*(int *)(param_1 + 4));
    }
    return;
}
