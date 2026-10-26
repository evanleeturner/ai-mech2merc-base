/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f900 */
extern int g_callbackPending;
extern void (__stdcall *g_pendingCallback)(void);

void __stdcall RunPendingCallback(void)
{
    if (g_callbackPending != 0) {
        g_callbackPending = 0;
        if (g_pendingCallback != 0) {
            g_pendingCallback();
            return;
        }
    }
    return;
}
