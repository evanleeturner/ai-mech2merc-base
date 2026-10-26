/* SPDX-License-Identifier: MIT */
/* mercsw 10064d15 */
int __cdecl IndexBitWidth(unsigned int param_1)
{
    int bits;
    int wasZero;

    bits = 1;
    wasZero = (param_1 == 0);
    param_1 = param_1 - 1;
    if (wasZero) {
        bits = 0;
    } else {
        while (param_1 = param_1 >> 1, param_1 != 0) {
            bits = bits + 1;
        }
    }
    return bits;
}
