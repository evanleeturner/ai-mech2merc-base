/* SPDX-License-Identifier: MIT */
/* mercsw 10064617 */
extern void __cdecl FUN_100645c5(uint param_1);

void __stdcall FUN_10064617(void)
{
    uint local_8;
    
    for (local_8 = 0; local_8 < 0xfe; local_8 = local_8 + 1) {
        FUN_100645c5(local_8);
    }
    return;
}
