/* SPDX-License-Identifier: MIT */
/* mercsw 100811b9 */
unsigned char __stdcall FUN_1003c111(void);
unsigned char __stdcall FUN_1002cdb5(void);

unsigned int __stdcall FUN_100811b9(void)
{
    if (FUN_1003c111() == 0 && FUN_1002cdb5() == 0) {
        return 0;
    }
    return 1;
}
