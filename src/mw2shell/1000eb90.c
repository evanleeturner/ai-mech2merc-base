/* SPDX-License-Identifier: MIT */
/* mw2shell 1000eb90 */
extern void __cdecl _SmackClose(int param_1);

void __fastcall CloseSmackerFileIfOpen(int *param_1)
{
    if (*param_1 != 0) {
        _SmackClose(*param_1);
    }
    return;
}
