/* SPDX-License-Identifier: MIT */
/* mercsw 10022e3c */
extern int DAT_100adf38;
extern int DAT_100b38fc;

int           __cdecl FUN_10051f43(int param_1);
void          __cdecl FUN_1002950f(int param_1, short param_2);
int           __cdecl FUN_10023258(int param_1, int *param_2);
int           __cdecl FUN_1002306a(int param_1, int *param_2);
unsigned char __cdecl FUN_1004c350(int param_1, int param_2);
void          __cdecl FUN_100234a9(int param_1);
int           __cdecl FUN_1002974a(int param_1, int param_2, int param_3);
int           __cdecl FUN_1002977f(int param_1, int param_2, int param_3);

int __cdecl FUN_10022e3c(int param_1, int param_2)
{
    int iVar2;
    int local_1c;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    int v18e;
    int v192;
    int tmp;

    local_c = 0;
    local_10 = 0;
    iVar2 = (int)((unsigned int)param_2 - (unsigned int)*(int *)(param_1 + 0x6c));

    /* 0x18e is not 4-aligned: packed */
    __builtin_memcpy(&v18e, (unsigned char *)param_1 + 0x18e, 4);
    if (v18e <= DAT_100b38fc) {
        local_14 = FUN_10051f43((int)*(char *)(param_1 + 0x186));
        tmp = (int)((unsigned int)local_14 * 0x16u + (unsigned int)DAT_100b38fc);
        __builtin_memcpy((unsigned char *)param_1 + 0x18e, &tmp, 4);

        local_8 = (int)((unsigned int)*(int *)(*(int *)(param_1 + 0x20) + 0x1c)
                        + (unsigned int)*(int *)(param_1 + 0x5c)
                        + (unsigned int)*(int *)(param_1 + 0xd8)) % 0x1680000;

        if ((((iVar2 < 0xa0000) && (-0xa0000 < iVar2)) && (local_8 < 0xa0000)) && (-0xa0000 < local_8)) {
            if ((int)(*(unsigned short *)(param_1 + 0x17a) & 0xff) != DAT_100adf38) {
                iVar2 = FUN_10051f43(3);
                if (iVar2 != 0) goto LAB_10022fd9;
            }
            FUN_1002950f(param_1, *(short *)(param_1 + 0x17a));
            if (local_14 == 0) {
                __builtin_memcpy(&v192, (unsigned char *)param_1 + 0x192, 4);
                if (v192 == 0) {
                    local_1c = FUN_1002306a(param_1, &local_c);
                } else {
                    local_1c = FUN_10023258(param_1, &local_c);
                }
                if (local_1c != 0) {
                    if (FUN_1004c350(param_1, 1) != 0) {
                        __builtin_memcpy(&v192, (unsigned char *)param_1 + 0x192, 4);
                        if (v192 == 0) {
                            *(unsigned char *)(*(int *)(param_1 + 0x4c) + 0x25) = 1;
                        } else {
                            *(unsigned char *)(*(int *)(param_1 + 0x4c) + 0x27) = 1;
                        }
                        local_10 = 1;
                    }
                }
            }
        }
    }
LAB_10022fd9:
    if ((local_c != 0) && (local_10 != 0)) {
        FUN_100234a9(param_1);
    }
    if (local_10 == 0) {
        local_14 = 0;
    }
    iVar2 = FUN_1002974a(param_1, param_2, local_14);
    *(int *)(*(int *)(param_1 + 0x4c) + 4) = (int)((unsigned int)iVar2 * 0x2d00u);
    iVar2 = FUN_1002977f(param_1, *(int *)(param_1 + 0xd8), local_14);
    **(int **)(param_1 + 0x4c) = (int)((unsigned int)iVar2 * (unsigned int)-0xf00);
    return local_10;
}
