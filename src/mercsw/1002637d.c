/* SPDX-License-Identifier: MIT */
/* mercsw 1002637d */
int __cdecl ApproxLength3(int segment, int param_2, int param_3);
int __cdecl FUN_10002570(unsigned int segment, int param_2);

void __cdecl EnsureSegmentDirection(int *segment)
{
    int length;

    if (segment[0xd] == 0) {
        length = ApproxLength3(segment[6], segment[7], segment[8]);
        segment[0xc] = length;
        length = segment[0xc];
        if (0 < length) {
            segment[9] = FUN_10002570((unsigned int)segment[6], length);
            segment[10] = FUN_10002570((unsigned int)segment[7], length);
            segment[0xb] = FUN_10002570((unsigned int)segment[8], length);
            segment[0xd] = 1;
        }
    }
    return;
}
