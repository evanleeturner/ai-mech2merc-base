/* SPDX-License-Identifier: MIT */
/* mercsw 1008716b */
extern int DAT_100ba9fc;
extern unsigned char DAT_100bc310[];
extern char s__delta_100c243c[];
extern char s__delta_100c2444[];
extern char s__plus_100c244c[];
extern char s__delta_100c2454[];
extern char s__minus_100c245c[];
extern char DAT_100c2464[];
extern char DAT_100c2468;
extern char s__reset_100c246c[];
extern char s_Too_many_analog_sinks__line__d_100c241c[];

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);
char *_strstr(const char *, const char *);
unsigned int *FUN_10086a00(char *param_1);
void FUN_100108a0(int param_1, const char *param_2);

unsigned char *FUN_1008716b(unsigned int *param_1)
{
    char cVar1;
    unsigned char *puVar2;
    char *pcVar3;
    char *pcVar8;
    unsigned int uVar5;
    unsigned int uVar6;
    int iVar7;
    char local_38[40];
    unsigned int *local_10;
    char *local_c;
    int local_8;
    unsigned char *e;
    unsigned int t;
    int a;
    int b;

    for (local_8 = 0; local_8 < DAT_100ba9fc; local_8 = local_8 + 1) {
        unsigned int k;
        __builtin_memcpy(&k, DAT_100bc310 + local_8 * 0x32, 4);
        if (k == param_1[1]) {
            return DAT_100bc310 + local_8 * 0x32;
        }
    }
    local_8 = DAT_100ba9fc;
    DAT_100ba9fc = (int)((unsigned int)DAT_100ba9fc + 1u);
    if (DAT_100ba9fc < 0x33) {
        e = DAT_100bc310 + local_8 * 0x32;
        pcVar3 = _strstr((char *)param_1[0], s__delta_100c243c);
        if (pcVar3 == (char *)0) {
            t = (unsigned int)(e + 0x16);
            __builtin_memcpy(e + 4, &t, 4);
        } else {
            t = (unsigned int)(e + 0x1a);
            __builtin_memcpy(e + 4, &t, 4);
        }
        t = param_1[1];
        __builtin_memcpy(e + 0, &t, 4);
        t = param_1[5] - param_1[4];
        __builtin_memcpy(e + 8, &t, 4);
        t = param_1[4] << 0x10;
        __builtin_memcpy(e + 0xc, &t, 4);
        e[0x14] = *(unsigned char *)(param_1 + 7);
        t = param_1[3] << 0x10;
        __builtin_memcpy(e + 0x10, &t, 4);
        __builtin_memcpy(&a, e + 0x10, 4);
        __builtin_memcpy(&b, e + 0xc, 4);
        t = (unsigned int)a - (unsigned int)b;
        __builtin_memcpy(e + 0x10, &t, 4);
        __builtin_memcpy(&a, e + 0x10, 4);
        t = (unsigned int)a << 1;
        __builtin_memcpy(e + 0x10, &t, 4);
        __builtin_memcpy(&a, e + 0x10, 4);
        __builtin_memcpy(&b, e + 8, 4);
        if (b == 0 || (a == (int)0x80000000 && b == -1)) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        }
        t = (unsigned int)(a / b);
        __builtin_memcpy(e + 0x10, &t, 4);
        __builtin_memcpy(&a, e + 0x10, 4);
        t = (unsigned int)a + 0xffff0000u;
        __builtin_memcpy(e + 0x10, &t, 4);
        t = param_1[6];
        __builtin_memcpy(e + 0x1e, &t, 4);
        __builtin_memcpy(&t, e + 0x10, 4);
        __builtin_memcpy(e + 0x1a, &t, 4);

        /* _plus */
        uVar5 = 0xffffffff;
        pcVar3 = (char *)param_1[0];
        do {
            pcVar8 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar3 = pcVar8 - uVar5;
        pcVar8 = local_38;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            __builtin_memcpy(pcVar8, pcVar3, 4);
            pcVar3 = pcVar3 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar8 = pcVar8 + 1;
        }
        local_c = _strstr(local_38, s__delta_100c2444);
        if (local_c != (char *)0) {
            *local_c = '\0';
        }
        iVar7 = -1;
        pcVar3 = local_38;
        do {
            pcVar8 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        __builtin_memcpy(pcVar8 - 1, s__plus_100c244c, 4);
        __builtin_memcpy(pcVar8 + 3, s__plus_100c244c + 4, 2);
        local_10 = FUN_10086a00(local_38);
        if (local_10 == (unsigned int *)0) {
            t = 0;
        } else {
            t = local_10[1];
        }
        __builtin_memcpy(e + 0x22, &t, 4);

        /* _minus */
        uVar5 = 0xffffffff;
        pcVar3 = (char *)param_1[0];
        do {
            pcVar8 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar3 = pcVar8 - uVar5;
        pcVar8 = local_38;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            __builtin_memcpy(pcVar8, pcVar3, 4);
            pcVar3 = pcVar3 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar8 = pcVar8 + 1;
        }
        local_c = _strstr(local_38, s__delta_100c2454);
        if (local_c != (char *)0) {
            *local_c = '\0';
        }
        iVar7 = -1;
        pcVar3 = local_38;
        do {
            pcVar8 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        __builtin_memcpy(pcVar8 - 1, s__minus_100c245c, 4);
        __builtin_memcpy(pcVar8 + 3, s__minus_100c245c + 4, 2);
        pcVar8[5] = s__minus_100c245c[6];
        local_10 = FUN_10086a00(local_38);
        if (local_10 == (unsigned int *)0) {
            t = 0;
        } else {
            t = local_10[1];
        }
        __builtin_memcpy(e + 0x26, &t, 4);

        /* DAT_100c2464 suffix */
        uVar5 = 0xffffffff;
        pcVar3 = (char *)param_1[0];
        do {
            pcVar8 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar3 = pcVar8 - uVar5;
        pcVar8 = local_38;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            __builtin_memcpy(pcVar8, pcVar3, 4);
            pcVar3 = pcVar3 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar8 = pcVar8 + 1;
        }
        iVar7 = -1;
        pcVar3 = local_38;
        do {
            pcVar8 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        __builtin_memcpy(pcVar8 - 1, DAT_100c2464, 4);
        pcVar8[3] = DAT_100c2468;
        local_10 = FUN_10086a00(local_38);
        if (local_10 == (unsigned int *)0) {
            t = 0;
        } else {
            t = local_10[1];
        }
        __builtin_memcpy(e + 0x2e, &t, 4);

        /* _reset */
        uVar5 = 0xffffffff;
        pcVar3 = (char *)param_1[0];
        do {
            pcVar8 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar3 = pcVar8 - uVar5;
        pcVar8 = local_38;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            __builtin_memcpy(pcVar8, pcVar3, 4);
            pcVar3 = pcVar3 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar8 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar8 = pcVar8 + 1;
        }
        iVar7 = -1;
        pcVar3 = local_38;
        do {
            pcVar8 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 - 1;
            pcVar8 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
        } while (cVar1 != '\0');
        __builtin_memcpy(pcVar8 - 1, s__reset_100c246c, 4);
        __builtin_memcpy(pcVar8 + 3, s__reset_100c246c + 4, 2);
        pcVar8[5] = s__reset_100c246c[6];
        local_10 = FUN_10086a00(local_38);
        if (local_10 == (unsigned int *)0) {
            t = 0;
        } else {
            t = local_10[1];
        }
        __builtin_memcpy(e + 0x2a, &t, 4);

        puVar2 = DAT_100bc310 + local_8 * 0x32;
    } else {
        FUN_100108a0(0x11, s_Too_many_analog_sinks__line__d_100c241c);
        puVar2 = (unsigned char *)0;
    }
    return puVar2;
}
