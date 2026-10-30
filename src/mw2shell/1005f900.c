/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f900 */
extern int g_callbackPending_Likely;
extern void (__stdcall *g_pendingCallback)(void);

void __stdcall RunPendingCallback_Likely(void)
{
    if (g_callbackPending_Likely != 0) {
        g_callbackPending_Likely = 0;
        if (g_pendingCallback != 0) {
            g_pendingCallback();
            return;
        }
    }
    return;
}
