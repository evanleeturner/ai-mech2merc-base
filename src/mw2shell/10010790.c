/* SPDX-License-Identifier: MIT */
/* mw2shell 10010790 */
void _AIL_shutdown_0(void);

void __fastcall FUN_10010790(char *param_1)
{
    if (*param_1 != '\x01') {
        _AIL_shutdown_0();
    }
    return;
}
