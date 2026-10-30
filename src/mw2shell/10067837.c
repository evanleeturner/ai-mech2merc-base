/* SPDX-License-Identifier: MIT */
/* mw2shell 10067837 */
extern unsigned char DAT_100a8a79[4];
extern unsigned char DAT_100a8a7d[4];
extern unsigned char DAT_100a8a81[4];
extern unsigned char DAT_100a8a85[4];
extern unsigned char DAT_100a8a89[4];
extern unsigned char DAT_100a8a8d[4];
extern unsigned char DAT_100a8aa1[4];
extern unsigned char DAT_100a8aa9[4];

unsigned int __cdecl FUN_10067837(int param_1, int param_2, int param_3)
{
    unsigned int in_EAX = 0;
    unsigned int pcVar1;
    unsigned int pcVar2;
    unsigned int pcVar3;
    unsigned int t;
    unsigned int q;
    unsigned int r;

    if (param_1 == 2) {
        __builtin_memcpy(&t, DAT_100a8a7d, 4);
        if (t != 0u) {
            do {
                __builtin_memcpy(&pcVar1, DAT_100a8a7d, 4);
                if (0xfe < (int)pcVar1) {
                    pcVar1 = 0xffu;
                }
                __builtin_memcpy(&t, DAT_100a8a7d, 4);
                t = t - pcVar1;
                __builtin_memcpy(DAT_100a8a7d, &t, 4);
                __builtin_memcpy(&t, DAT_100a8a79, 4);
                if (t != 0u) {
                    __builtin_memcpy(&q, DAT_100a8a89, 4);
                    *(char *)q = '\x01';
                    ((char *)q)[1] = (char)pcVar1;
                }
                __builtin_memcpy(&q, DAT_100a8a89, 4);
                q = q + 2u;
                __builtin_memcpy(DAT_100a8a89, &q, 4);
                __builtin_memcpy(&q, DAT_100a8a8d, 4);
                q = q + pcVar1;
                __builtin_memcpy(DAT_100a8a8d, &q, 4);
                __builtin_memcpy(&t, DAT_100a8a7d, 4);
            } while (t != 0u);
            t = 0u;
            __builtin_memcpy(DAT_100a8a7d, &t, 4);
        }
        __builtin_memcpy(&q, DAT_100a8a85, 4);
        __builtin_memcpy(&r, DAT_100a8a8d, 4);
        pcVar3 = q + ((0u - (unsigned int)param_2) - r);
        __builtin_memcpy(&q, DAT_100a8a81, 4);
        pcVar1 = r + ((unsigned int)param_3 - q);
        __builtin_memcpy(&t, DAT_100a8aa1, 4);
        if ((int)pcVar1 < (int)t) {
            __builtin_memcpy(DAT_100a8aa1, &pcVar1, 4);
        }
        pcVar2 = pcVar1 + pcVar3 - 1u;
        __builtin_memcpy(&t, DAT_100a8aa9, 4);
        if ((int)pcVar2 <= (int)t) goto LAB_10067907;
        for (; (__builtin_memcpy(DAT_100a8aa9, &pcVar2, 4), pcVar3 != 0u);
             pcVar3 = pcVar3 - pcVar1) {
LAB_10067907:
            pcVar1 = pcVar3;
            if (0x7e < (int)pcVar3) {
                pcVar1 = 0x7fu;
            }
            __builtin_memcpy(&t, DAT_100a8a79, 4);
            if (t != 0u) {
                __builtin_memcpy(&q, DAT_100a8a89, 4);
                __builtin_memcpy(&r, DAT_100a8a8d, 4);
                *(char *)q = (char)(pcVar1 * 2u);
                ((char *)q)[1] = *(char *)r;
            }
            __builtin_memcpy(&q, DAT_100a8a89, 4);
            q = q + 2u;
            __builtin_memcpy(DAT_100a8a89, &q, 4);
            __builtin_memcpy(&q, DAT_100a8a8d, 4);
            q = q + pcVar1;
            __builtin_memcpy(DAT_100a8a8d, &q, 4);
            __builtin_memcpy(&pcVar2, DAT_100a8aa9, 4);
        }
    }
    else if (param_1 == 1) {
        __builtin_memcpy(&t, DAT_100a8a7d, 4);
        if (t != 0u) {
            do {
                __builtin_memcpy(&pcVar1, DAT_100a8a7d, 4);
                if (0xfe < (int)pcVar1) {
                    pcVar1 = 0xffu;
                }
                __builtin_memcpy(&t, DAT_100a8a7d, 4);
                t = t - pcVar1;
                __builtin_memcpy(DAT_100a8a7d, &t, 4);
                __builtin_memcpy(&t, DAT_100a8a79, 4);
                if (t != 0u) {
                    __builtin_memcpy(&q, DAT_100a8a89, 4);
                    *(char *)q = '\x01';
                    ((char *)q)[1] = (char)pcVar1;
                }
                __builtin_memcpy(&q, DAT_100a8a89, 4);
                q = q + 2u;
                __builtin_memcpy(DAT_100a8a89, &q, 4);
                __builtin_memcpy(&q, DAT_100a8a8d, 4);
                q = q + pcVar1;
                __builtin_memcpy(DAT_100a8a8d, &q, 4);
                __builtin_memcpy(&t, DAT_100a8a7d, 4);
            } while (t != 0u);
            t = 0u;
            __builtin_memcpy(DAT_100a8a7d, &t, 4);
        }
        __builtin_memcpy(&q, DAT_100a8a85, 4);
        __builtin_memcpy(&r, DAT_100a8a8d, 4);
        pcVar3 = q + ((0u - (unsigned int)param_2) - r);
        __builtin_memcpy(&q, DAT_100a8a81, 4);
        pcVar1 = r + ((unsigned int)param_3 - q);
        __builtin_memcpy(&t, DAT_100a8aa1, 4);
        if ((int)pcVar1 < (int)t) {
            __builtin_memcpy(DAT_100a8aa1, &pcVar1, 4);
        }
        pcVar2 = pcVar1 + pcVar3 - 1u;
        __builtin_memcpy(&t, DAT_100a8aa9, 4);
        if ((int)pcVar2 <= (int)t) goto LAB_100679ae;
        for (; (__builtin_memcpy(DAT_100a8aa9, &pcVar2, 4), pcVar3 != 0u);
             pcVar3 = pcVar3 - pcVar1) {
LAB_100679ae:
            pcVar1 = pcVar3;
            if (0x7e < (int)pcVar3) {
                pcVar1 = 0x7fu;
            }
            __builtin_memcpy(&t, DAT_100a8a79, 4);
            if (t == 0u) {
                __builtin_memcpy(&q, DAT_100a8a8d, 4);
                q = q + pcVar1;
                __builtin_memcpy(DAT_100a8a8d, &q, 4);
                __builtin_memcpy(&q, DAT_100a8a89, 4);
                q = q + (pcVar1 + 1u);
                __builtin_memcpy(DAT_100a8a89, &q, 4);
            }
            else {
                __builtin_memcpy(&q, DAT_100a8a89, 4);
                *(char *)q = (char)(pcVar1 * 2u + 1u);
                for (pcVar2 = pcVar1;
                     (__builtin_memcpy(&q, DAT_100a8a89, 4), q = q + 1u,
                      __builtin_memcpy(DAT_100a8a89, &q, 4), pcVar2 != 0u);
                     pcVar2 = pcVar2 - 1u) {
                    __builtin_memcpy(&q, DAT_100a8a89, 4);
                    __builtin_memcpy(&r, DAT_100a8a8d, 4);
                    *(char *)q = *(char *)r;
                    r = r + 1u;
                    __builtin_memcpy(DAT_100a8a8d, &r, 4);
                }
            }
            __builtin_memcpy(&pcVar2, DAT_100a8aa9, 4);
        }
    }
    else if (param_1 == 3) {
        __builtin_memcpy(&q, DAT_100a8a85, 4);
        __builtin_memcpy(&r, DAT_100a8a8d, 4);
        t = q + ((0u - (unsigned int)param_2) - r);
        __builtin_memcpy(DAT_100a8a7d, &t, 4);
    }
    else if (param_1 == 4) {
        __builtin_memcpy(&t, DAT_100a8a79, 4);
        if (t != 0u) {
            __builtin_memcpy(&q, DAT_100a8a89, 4);
            *(char *)q = '\0';
        }
        __builtin_memcpy(&q, DAT_100a8a89, 4);
        q = q + 1u;
        __builtin_memcpy(DAT_100a8a89, &q, 4);
    }
    else if (param_1 == 0) {
        t = 0u;
        __builtin_memcpy(DAT_100a8a7d, &t, 4);
        __builtin_memcpy(&q, DAT_100a8a85, 4);
        __builtin_memcpy(DAT_100a8a8d, &q, 4);
    }
    return in_EAX;
}
