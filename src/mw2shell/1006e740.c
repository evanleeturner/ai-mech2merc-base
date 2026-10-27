/* SPDX-License-Identifier: MIT */
/* mw2shell 1006e740 */
extern void (__stdcall *PTR_DirectDrawCreate_100d33fc)(void);

void __stdcall DirectDrawCreate(void)
{
    PTR_DirectDrawCreate_100d33fc();
    return;
}
