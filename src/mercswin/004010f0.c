/* SPDX-License-Identifier: MIT */
/* mercswin 004010f0 */
void __stdcall FUN_004010f0(void)
{
    unsigned int *puVar1;

    puVar1 = (unsigned int *)0xb0f00;
    do {
        *puVar1 = *puVar1 & 0xff00ff00;
        puVar1 = puVar1 + 1;
    } while ((int)puVar1 < 0xb0fa0);
    return;
}
