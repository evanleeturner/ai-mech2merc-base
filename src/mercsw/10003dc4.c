/* SPDX-License-Identifier: MIT */
/* mercsw 10003dc4 */
int __cdecl FixedMul16(int from, int to);

int __cdecl LerpRect(int from, int to, int out, int fraction, int param_5)
{
    int scaledDelta;

    if (param_5 != 2) {
        scaledDelta = FixedMul16(fraction,
                (int)((unsigned int)*(int *)(to + 4) - (unsigned int)*(int *)(from + 4)));
        *(int *)(out + 4) = (int)((unsigned int)*(int *)(from + 4) + (unsigned int)scaledDelta);
        scaledDelta = FixedMul16(fraction,
                (int)((unsigned int)*(int *)(to + 0xc) - (unsigned int)*(int *)(from + 0xc)));
        *(int *)(out + 0xc) = (int)((unsigned int)*(int *)(from + 0xc) + (unsigned int)scaledDelta);
    }
    if (param_5 != 1) {
        scaledDelta = FixedMul16(fraction,
                (int)((unsigned int)*(int *)(to + 8) - (unsigned int)*(int *)(from + 8)));
        *(int *)(out + 8) = (int)((unsigned int)*(int *)(from + 8) + (unsigned int)scaledDelta);
        scaledDelta = FixedMul16(fraction,
                (int)((unsigned int)*(int *)(to + 0x10) - (unsigned int)*(int *)(from + 0x10)));
        *(int *)(out + 0x10) = (int)((unsigned int)*(int *)(from + 0x10) + (unsigned int)scaledDelta);
    }
    return out;
}
