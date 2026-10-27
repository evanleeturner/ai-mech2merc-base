/* SPDX-License-Identifier: MIT */
/* mercsw 10026815 */
int __cdecl FUN_10002570(unsigned int origin, int direction);

unsigned int __cdecl RaySlabInterval(int origin, int direction, int slabMin, int slabMax, int *tNear, int *tFar)
{
    int degenerate;
    unsigned int local_18;
    int local_14;
    int local_10;
    unsigned int local_c;

    degenerate = 0;
    if (direction == 0) {
        degenerate = 1;
    }
    else {
        local_c = (unsigned int)slabMin - (unsigned int)origin;
        local_18 = (unsigned int)slabMax - (unsigned int)origin;
        if (((int)local_c / direction < 0x8000) && (-0x8001 < (int)local_c / direction)) {
            if ((0x7fff < (int)local_18 / direction) || ((int)local_18 / direction < -0x8000)) {
                degenerate = 1;
            }
        }
        else {
            degenerate = 1;
        }
    }
    if (degenerate) {
        if ((origin < slabMin) || (slabMax < origin)) {
            return 1;
        }
        local_10 = -0x7fffffff;
        local_14 = 0x7fffffff;
    }
    else {
        local_10 = FUN_10002570(local_c, direction);
        local_14 = FUN_10002570(local_18, direction);
    }
    if (local_14 < local_10) {
        *tNear = local_14;
        *tFar = local_10;
    }
    else {
        *tNear = local_10;
        *tFar = local_14;
    }
    return 0;
}
