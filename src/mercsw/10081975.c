/* SPDX-License-Identifier: MIT */
/* mercsw 10081975 */
extern int DAT_100b98cc;
extern void __stdcall FUN_10081830(void);

int __stdcall FUN_10081975(void)
{
    if (DAT_100b98cc == 0) {
        FUN_10081830();
    }
    return DAT_100b98cc;
}
