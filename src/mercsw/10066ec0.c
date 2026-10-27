/* SPDX-License-Identifier: MIT */
/* mercsw 10066ec0 */
unsigned int __cdecl FUN_10002570(unsigned int a, int b);

int __cdecl CheckedFixedDiv16(int divisor, unsigned int dividend, unsigned int *quotient)
{
    unsigned int uVar1;
    int failed;

    if (((divisor == 0) || (0x7fff < (int)dividend / divisor)) || ((int)dividend / divisor < -0x8000)) {
        failed = 1;
    }
    else {
        failed = 0;
    }
    if (failed == 0) {
        uVar1 = FUN_10002570(dividend, divisor);
        *quotient = uVar1;
    }
    return failed;
}
