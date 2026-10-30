/* SPDX-License-Identifier: MIT */
/* mercsw 10022bc1 */
extern int DAT_100b38fc;
extern int DAT_100adf38;
extern int DAT_100eef40[];

extern void __cdecl FUN_10023525(int param_1, int *param_2, int *param_3, unsigned int *param_4);
extern int __cdecl FUN_10051f43(int param_1);
extern int __cdecl FUN_10023258(int param_1, int *param_2);
extern int __cdecl FUN_1002306a(int param_1, int *param_2);
extern unsigned char __cdecl FUN_1004c350(int param_1, int param_2);
extern void __cdecl FUN_100234a9(int param_1);
extern int __cdecl FUN_1002974a(int param_1, int param_2, int param_3);
extern int __cdecl FUN_1002977f(int param_1, int param_2, int param_3);

int __cdecl FUN_10022bc1(int param_1, int param_2)
{
    unsigned char bVar1;
    int iVar2;
    int local_2c;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    unsigned int local_14[3];
    int local_8;
    int tmp18e;
    int tmp192;
    unsigned short us17a;

    local_24 = 0;
    local_18 = 0;
    local_1c = 0;
    local_20 = *(int *)((char *)param_1 + 0xd8);
    FUN_10023525(param_1, &param_2, &local_20, local_14);
    iVar2 = (int)((unsigned int)param_2 - (unsigned int)*(int *)((char *)param_1 + 0x6c));
    local_8 = (int)((unsigned int)*(int *)(*(int *)((char *)param_1 + 0x20) + 0x1c)
                    + (unsigned int)*(int *)((char *)param_1 + 0x5c)
                    + (unsigned int)local_20) % 0x1680000;
    __builtin_memcpy(&tmp18e, (char *)param_1 + 0x18e, 4);
    if (tmp18e <= DAT_100b38fc) {
        local_24 = FUN_10051f43((int)*(char *)((char *)param_1 + 0x186));
        tmp18e = (int)((unsigned int)local_24 * 0x16u + (unsigned int)DAT_100b38fc);
        __builtin_memcpy((char *)param_1 + 0x18e, &tmp18e, 4);
        if ((((iVar2 < 0x10000) && (-0x10000 < iVar2)) && (local_8 < 0xa0000)) && (-0xa0000 < local_8)) {
            if ((int)(*(unsigned short *)((char *)param_1 + 0x17a) & 0xff) != DAT_100adf38) {
                iVar2 = FUN_10051f43(3);
                if (iVar2 != 0) goto LAB_10022d6c;
            }
            if (local_24 == 0) {
                __builtin_memcpy(&tmp192, (char *)param_1 + 0x192, 4);
                if (tmp192 == 0) {
                    local_2c = FUN_1002306a(param_1, &local_18);
                } else {
                    local_2c = FUN_10023258(param_1, &local_18);
                }
                if (local_2c != 0) {
                    bVar1 = FUN_1004c350(param_1, 1);
                    if ((int)bVar1 != 0) {
                        __builtin_memcpy(&tmp192, (char *)param_1 + 0x192, 4);
                        if (tmp192 == 0) {
                            *(unsigned char *)(*(int *)((char *)param_1 + 0x4c) + 0x25) = 1;
                        } else {
                            *(unsigned char *)(*(int *)((char *)param_1 + 0x4c) + 0x27) = 1;
                        }
                        local_1c = 1;
                    }
                }
            }
        }
    }
LAB_10022d6c:
    if ((local_18 != 0) && (local_1c != 0)) {
        FUN_100234a9(param_1);
    }
    us17a = *(unsigned short *)((char *)param_1 + 0x17a);
    if ((((unsigned char)(us17a >> 8) & 0xf) == 2) &&
        (*(int *)(*(int *)(DAT_100eef40[*(unsigned short *)((char *)param_1 + 0x17a) & 0xff] + 0x4c) + 8) != 0)) {
        local_24 = 0;
    }
    if (local_1c == 0) {
        local_24 = 0;
    }
    iVar2 = FUN_1002974a(param_1, param_2, local_24);
    *(int *)(*(int *)((char *)param_1 + 0x4c) + 4) = (int)((unsigned int)iVar2 * 0x2d00u);
    iVar2 = FUN_1002977f(param_1, local_20, local_24);
    **(int **)((char *)param_1 + 0x4c) = (int)((unsigned int)iVar2 * 0xfffff100u);
    return local_1c;
}
