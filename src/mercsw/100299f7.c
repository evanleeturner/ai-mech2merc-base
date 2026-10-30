/* SPDX-License-Identifier: MIT */
/* mercsw 100299f7 */
extern int __cdecl FUN_10051f43(int param_1);
extern int __cdecl FUN_1004d47f(unsigned int param_1);
extern unsigned int __cdecl FUN_10082490(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4);
extern void __cdecl FUN_1002a8fe(int param_1);
extern void __cdecl FUN_1002a6ac(int param_1);
extern char * __cdecl FUN_100274a5(short param_1, char **param_2, int param_3);
extern char * __cdecl _itoa(int value, char *buf, int radix);
extern int __cdecl sprintf(char *buf, const char *fmt, ...);
extern void __cdecl FUN_1005dd5a(char *param_1);

extern int DAT_100eef40[];
extern int DAT_100adf38;
extern int DAT_100b38fc;
extern int DAT_1016ac70;
extern unsigned int DAT_100ad620;
extern unsigned char DAT_100ad624;
extern unsigned short DAT_100ad628;
extern unsigned char DAT_100ad62a;
extern unsigned int DAT_100ad62c;
extern char *PTR_s_agp_user_100acbb8;
extern char *PTR_DAT_100acae0[];
extern char s__6ld____2d_Mech__2d___state__8s___100ad630[];
extern unsigned char DAT_10215678[];
extern unsigned char DAT_10215694[];

void __cdecl FUN_100299f7(int param_1, short param_2)
{
    unsigned int *puVar1;
    char cVar2;
    int iVar3;
    char *pcVar4;
    unsigned int uVar5;
    unsigned int uVar6;
    char *pcVar7;
    char *local_88;
    char *local_84;
    char local_80[8];
    char local_74[4];
    int *local_78;
    char local_70[20];
    char local_5c[80];
    char local_c[4];
    unsigned int local_8;
    unsigned int tmp32;
    unsigned short tmp16;

    if ((*(unsigned short *)(param_1 + 0x14) & 0x10) != 0) {
        *(unsigned short *)(param_1 + 0x14) = *(unsigned short *)(param_1 + 0x14) & 0xffef;
        *(unsigned int *)(*(int *)(param_1 + 0x20) + 0x3d4) = 0;
    }
    if ((param_2 != 3) && (*(int *)(DAT_100eef40[DAT_100adf38] + 8) == *(int *)(param_1 + 8))) {
        __builtin_memcpy(&tmp32, (char *)param_1 + 0x17e, 4);
        tmp32 = tmp32 & 3;
        __builtin_memcpy((char *)param_1 + 0x17e, &tmp32, 4);
    }
    switch (param_2) {
    case 1:
    case 6:
    case 9:
        break;
    case 2:
        iVar3 = FUN_10051f43(10);
        tmp32 = (unsigned int)iVar3 * 0x16u + (unsigned int)DAT_100b38fc;
        __builtin_memcpy((char *)param_1 + 0x18e, &tmp32, 4);
        iVar3 = FUN_1004d47f((unsigned int)(*(int *)(param_1 + 8) != DAT_100adf38));
        if ((((iVar3 != 0) && (*(short *)(param_1 + 0x176) == 7)) &&
             ((*(unsigned char *)(param_1 + 0x1a3) & 0x10) != 0)) &&
            (local_8 = FUN_10082490(*(unsigned int *)(param_1 + 4), *(unsigned int *)(param_1 + 0x50),
                                    *(unsigned int *)(param_1 + 0x54), *(unsigned int *)(param_1 + 0x58)),
             local_8 != 0xffffffff)) {
            *(unsigned short *)(DAT_10215694 + local_8 * 0x54) =
                *(unsigned short *)(DAT_10215694 + local_8 * 0x54) | 1;
            *(unsigned int *)(DAT_10215678 + local_8 * 0x54) = *(unsigned int *)(param_1 + 4) | 0x200;
            tmp32 = local_8 | 0x100;
            __builtin_memcpy((char *)param_1 + 0x1a2, &tmp32, 4);
        }
        break;
    case 3:
        break;
    case 4:
        tmp32 = 1;
        __builtin_memcpy((char *)param_1 + 0x17e, &tmp32, 4);
        break;
    case 5:
        FUN_1002a8fe(param_1);
        break;
    case 7:
        FUN_1002a6ac(param_1);
        break;
    case 8:
        break;
    case 0xb:
        tmp32 = 1;
        __builtin_memcpy((char *)param_1 + 0x17e, &tmp32, 4);
        /* fallthrough */
    case 10:
        *(unsigned short *)(param_1 + 0x14) = *(unsigned short *)(param_1 + 0x14) | 0x10;
        puVar1 = (unsigned int *)(*(int *)(param_1 + 0x20) + 0x3d4);
        *puVar1 = *puVar1 | 3;
        /* fallthrough */
    case 0:
        *(unsigned int *)(*(int *)(param_1 + 0x4c) + 8) = 0;
        *(unsigned int *)(param_1 + 0xc0) = 0;
    }
    DAT_1016ac70 = DAT_100b38fc;
    *(short *)(param_1 + 0x176) = param_2;
    __builtin_memcpy(local_80, &DAT_100ad620, 4);
    local_80[4] = (char)DAT_100ad624;
    tmp16 = DAT_100ad628;
    __builtin_memcpy(local_74, &tmp16, 2);
    local_74[2] = (char)DAT_100ad62a;
    __builtin_memcpy(local_c, &DAT_100ad62c, 4);
    local_78 = *(int **)(param_1 + 0x20);
    if ((*(unsigned short *)(*local_78 + 0x178) & 0x200) == 0) {
        local_88 = local_74;
    } else {
        local_88 = local_80;
    }
    if ((*(unsigned short *)(*local_78 + 0x178) & 0x100) != 0) {
        local_88 = local_c;
    }
    if ((*(unsigned short *)(*local_78 + 0x17a) & 0x200) == 0) {
        local_84 = local_74;
    } else {
        local_84 = local_80;
    }
    if ((*(unsigned short *)(*local_78 + 0x17a) & 0x100) != 0) {
        local_84 = local_c;
    }
    if ((*(unsigned short *)(*local_78 + 0x17a) & 0x6000) == 0) {
        _itoa(*(unsigned short *)(*local_78 + 0x17a) & 0xff, local_70, 10);
    } else {
        pcVar4 = FUN_100274a5(*(short *)(*local_78 + 0x17a), &PTR_s_agp_user_100acbb8, 7);
        uVar5 = 0xffffffff;
        do {
            pcVar7 = pcVar4;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar7 = pcVar4 + 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar7;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        pcVar4 = pcVar7 + -uVar5;
        pcVar7 = local_70;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(unsigned int *)pcVar7 = *(unsigned int *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar7 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar7 = pcVar7 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar4 = local_84;
        do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        local_84 = local_84 + (~uVar5 - 1);
    }
    sprintf(local_5c, s__6ld____2d_Mech__2d___state__8s___100ad630, DAT_100b38fc,
            *(int *)(*local_78 + 8), *(int *)(*local_78 + 4),
            PTR_DAT_100acae0[*(short *)(*local_78 + 0x176) * 2], local_88,
            *(unsigned short *)(*local_78 + 0x178) & 0xff, local_84, local_70);
    FUN_1005dd5a(local_5c);
    return;
}
