/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f8e0 */
extern undefined4 g_callbackPending;
extern undefined4 g_pendingCallback;
extern undefined4 DAT_100a6724;

extern void FUN_10010820(undefined4 param_1);

void __cdecl FUN_1005f8e0(undefined4 param_1)
{
    g_callbackPending = 1;
    g_pendingCallback = param_1;
    FUN_10010820(DAT_100a6724);
    return;
}
