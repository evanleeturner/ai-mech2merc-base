/* SPDX-License-Identifier: MIT */
/* mercsw 1000f815 */
extern int DAT_100adf38;
extern char *DAT_100adf34;
extern int DAT_100eef40[];
/* addresses 0x10165863 and 0x1016587a are not 4-aligned: packed, accessed via memcpy */
extern unsigned char DAT_10165863[4];
extern unsigned char DAT_1016587a[4];

int  __cdecl FUN_10051f43(int param_1);
void __cdecl FUN_100082c4(int param_1, int param_2);
void __cdecl FUN_1000fa08(int param_1);

int __cdecl FUN_1000f815(int param_1, unsigned int param_2, int param_3)
{
    int local_10;
    int local_8;
    unsigned char *p8;
    int v;
    int v2;
    int ptr;
    short s;

    local_10 = 2;
    local_8 = 0;
    if ((param_1 == 0) || (*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x20) == 0)) {
        local_10 = 0;
    } else {
        if (*(int *)(param_3 + 0x20) < *(int *)(*(int *)(param_1 + 0x20) + 0x60)) {
            local_8 = (int)((unsigned int)*(int *)(param_3 + 0x20) * 0x3au
                            + (unsigned int)*(int *)(param_1 + 0x20) + 100u);
        }
        p8 = (unsigned char *)local_8;
        v2 = 0;
        if (local_8 != 0) {
            __builtin_memcpy(&v2, p8 + 2, 4);
        }
        if ((local_8 == 0) || (v2 == 0)) {
            local_10 = 0;
        } else {
            if (*(int *)(param_1 + 4) == DAT_100adf38) {
                __builtin_memcpy(&v, DAT_10165863, 4);
                v = (int)((unsigned int)v + 1u);
                __builtin_memcpy(DAT_10165863, &v, 4);
            }
            if (*(int *)(DAT_100eef40[*(int *)(param_1 + 4)] + 8) ==
                *(int *)(DAT_100eef40[DAT_100adf38] + 8)) {
                __builtin_memcpy(&v, DAT_1016587a, 4);
                v = (int)((unsigned int)v + 1u);
                __builtin_memcpy(DAT_1016587a, &v, 4);
            }
            __builtin_memcpy(&v2, p8 + 2, 4);
            if ((v2 != -1) &&
                ((*DAT_100adf34 == '\0') || (*(int *)(param_1 + 4) != DAT_100adf38))) {
                local_10 = FUN_10051f43(5);
                local_10 = (int)((unsigned int)local_10 + 1u);
                if ((int)((unsigned int)*(int *)(param_3 + 0x24) - (unsigned int)local_10) < 0) {
                    local_10 = *(int *)(param_3 + 0x24);
                }
                __builtin_memcpy(&v2, p8 + 2, 4);
                v2 = (int)((unsigned int)v2 - (unsigned int)local_10);
                __builtin_memcpy(p8 + 2, &v2, 4);
                if (v2 < 0) {
                    v = 0;
                    __builtin_memcpy(p8 + 2, &v, 4);
                }
                __builtin_memcpy(&ptr, p8 + 0x36, 4);
                __builtin_memcpy(&s, (unsigned char *)ptr + 2, 2);
                if (s == 0) {
                    int a;
                    int b;
                    __builtin_memcpy(&a, p8 + 10, 4);
                    a = (int)((unsigned int)a + 1u);
                    __builtin_memcpy(p8 + 10, &a, 4);
                    __builtin_memcpy(&b, p8 + 6, 4);
                    if (b == a) {
                        a = (int)((unsigned int)a + 0xffffffffu);
                        __builtin_memcpy(p8 + 10, &a, 4);
                    } else {
                        __builtin_memcpy(&ptr, p8 + 0x36, 4);
                        ptr = (int)((unsigned int)ptr + 0x1eu);
                        __builtin_memcpy(p8 + 0x36, &ptr, 4);
                    }
                } else {
                    s = (short)(s - 1);
                    __builtin_memcpy((unsigned char *)ptr + 2, &s, 2);
                }
                __builtin_memcpy(&v2, p8 + 2, 4);
                if (v2 == 0) {
                    *(int *)(param_3 + 8) = -1;
                    local_10 = 0;
                    FUN_100082c4(10, 0);
                }
            }
            FUN_1000fa08(param_1);
        }
    }
    return local_10;
}
