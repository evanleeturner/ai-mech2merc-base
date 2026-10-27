/* SPDX-License-Identifier: MIT */
/* mercsw 100070f2 */
void __stdcall FUN_100070f2(void)
{
    unsigned int *local_8;

    for (local_8 = (unsigned int *)0xb0f00; (int)local_8 < 0xb0fa0; local_8 = local_8 + 1) {
        *local_8 = *local_8 & 0xff00ff00;
    }
    return;
}
