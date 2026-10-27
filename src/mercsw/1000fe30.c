/* SPDX-License-Identifier: MIT */
/* mercsw 1000fe30 */
unsigned int __cdecl FUN_1000ffd0(unsigned int value);
unsigned int __cdecl FixedMul16(unsigned int value, unsigned int param_2);

unsigned int __cdecl FixedSqrt16(unsigned int value)
{
    unsigned int uVar1;
    unsigned int lower;
    int triesLeft;
    unsigned int root;
    unsigned int upper;

    root = FUN_1000ffd0(value);
    lower = root >> 1;
    upper = root * 2U;
    triesLeft = 100;
    while (1) {
        if (triesLeft == 0) {
            return root;
        }
        uVar1 = FixedMul16(root, root);
        if (uVar1 == value) {
            break;
        }
        if (value < uVar1) {
            upper = root;
        } else {
            lower = root;
        }
        uVar1 = (upper + lower + 1U) >> 1;
        triesLeft = triesLeft - 1;
        if (root == uVar1) {
            return uVar1;
        }
        root = uVar1;
    }
    return root;
}
