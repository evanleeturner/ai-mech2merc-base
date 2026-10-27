/* SPDX-License-Identifier: MIT */
/* mercsw 10082ab2 */
extern uint DAT_100eef40;
extern uint DAT_100adf38;

void __stdcall FUN_10082ab2(void)
{
    *(uint *)((&DAT_100eef40)[DAT_100adf38] + 0xdc) =
        *(uint *)((&DAT_100eef40)[DAT_100adf38] + 0xdc) | 0x1000;
    return;
}
