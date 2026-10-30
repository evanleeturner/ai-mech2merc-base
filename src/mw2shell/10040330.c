/* SPDX-License-Identifier: MIT */
/* mw2shell 10040330 */
extern int DAT_100980a8[];
extern int DAT_100980f4;
extern unsigned char DAT_100980f8[];

/* thiscall callees: this in ECX, remaining args on the stack, callee pops.
   Modeled as __fastcall with an unused EDX slot. */
void __fastcall FUN_10013330(void *ecx, int edx, void *param_1, int param_2);
int __fastcall FUN_10050dc0(void *ecx, int edx, int param_1, int param_2, char param_3, unsigned int param_4);
int __cdecl _atoi(const char *param_1);

unsigned int __fastcall FUN_10040330(unsigned int *param_1)
{
    unsigned char *base = (unsigned char *)param_1;
    char cVar1;
    int iVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    int *piVar6;
    char *pcVar7;
    char local_80[4];
    int t;
    int t2;
    unsigned int ut;

    if (base[0x14] == 0) {
        FUN_10013330((void *)param_1[3], 0, param_1, 1);
        base[0x14] = 1;
    }
    __builtin_memcpy(&t, base + 0x3a, 4);
    if (t < 0) {
        param_1[2] = param_1[1];
        __builtin_memcpy(&t, base + 0x25, 4);
        __builtin_memcpy(base + 0x36, &t, 4);
        t = 0;
        __builtin_memcpy(base + 0x3a, &t, 4);
    }
    uVar4 = 0xffffffff;
    __builtin_memcpy(&pcVar7, base + 0x19, 4);
    do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    __builtin_memcpy(&ut, base + 0x3a, 4);
    if (~uVar4 - 1 <= ut) {
        base[0x35] = 1;
        param_1[2] = param_1[1];
        return (param_1[1] & 0xffffff00u) | 1u;
    }
    __builtin_memcpy(&pcVar7, base + 0x19, 4);
    __builtin_memcpy(&iVar3, base + 0x3a, 4);
    if (pcVar7[iVar3] == '\\') {
        uVar5 = (unsigned int)iVar3 + 1;
        uVar4 = 0xffffffff;
        param_1[2] = param_1[1];
        __builtin_memcpy(base + 0x3a, &uVar5, 4);
        do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (uVar5 < ~uVar4 - 1) {
            __builtin_memcpy(&iVar2, base + 0x19, 4);
            switch (*(unsigned char *)(uVar5 + iVar2)) {
            case 0x41:
            case 0x61:
                param_1[2] = (unsigned int)DAT_100980f8;
                t = (int)((unsigned int)iVar3 + 2);
                __builtin_memcpy(base + 0x3a, &t, 4);
                break;
            case 0x42:
            case 0x62:
                t = (int)((unsigned int)iVar3 + 2);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[0] = *(char *)((int)((unsigned int)iVar3 + 2 + (unsigned int)iVar2));
                t = (int)((unsigned int)iVar3 + 3);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[1] = *(char *)((int)((unsigned int)iVar3 + 3 + (unsigned int)iVar2));
                t = (int)((unsigned int)iVar3 + 4);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[2] = *(char *)((int)((unsigned int)iVar3 + 4 + (unsigned int)iVar2));
                t = (int)((unsigned int)iVar3 + 5);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[3] = 0;
                iVar3 = _atoi(local_80);
                __builtin_memcpy(&t, base + 0x36, 4);
                t = (int)((unsigned int)t - (unsigned int)iVar3);
                __builtin_memcpy(base + 0x36, &t, 4);
                break;
            case 0x47:
            case 0x67:
                t = (int)((unsigned int)iVar3 + 2);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[0] = *(char *)((int)((unsigned int)iVar3 + 2 + (unsigned int)iVar2));
                t = (int)((unsigned int)iVar3 + 3);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[1] = *(char *)((int)((unsigned int)iVar3 + 3 + (unsigned int)iVar2));
                t = (int)((unsigned int)iVar3 + 4);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[2] = *(char *)((int)((unsigned int)iVar3 + 4 + (unsigned int)iVar2));
                t = (int)((unsigned int)iVar3 + 5);
                __builtin_memcpy(base + 0x3a, &t, 4);
                local_80[3] = 0;
                iVar3 = _atoi(local_80);
                __builtin_memcpy(&t, base + 0x25, 4);
                t = (int)((unsigned int)t + (unsigned int)iVar3);
                __builtin_memcpy(base + 0x36, &t, 4);
                break;
            case 0x54:
            case 0x74:
                iVar2 = 0;
                piVar6 = DAT_100980a8;
                t = (int)((unsigned int)iVar3 + 2);
                __builtin_memcpy(base + 0x3a, &t, 4);
                do {
                    __builtin_memcpy(&t, base + 0x36, 4);
                    __builtin_memcpy(&t2, base + 0x25, 4);
                    if ((int)((unsigned int)t - (unsigned int)t2) < *piVar6) {
                        __builtin_memcpy(&t2, base + 0x25, 4);
                        t = (int)((unsigned int)DAT_100980a8[iVar2] + (unsigned int)t2);
                        __builtin_memcpy(base + 0x36, &t, 4);
                        break;
                    }
                    piVar6 = piVar6 + 1;
                    iVar2 = iVar2 + 1;
                } while (piVar6 < &DAT_100980f4);
            }
        }
    } else {
        if (pcVar7[iVar3] == ' ') {
            param_1[2] = param_1[1];
        }
        __builtin_memcpy(&iVar2, base + 0x36, 4);
        __builtin_memcpy(&t2, base + 0x29, 4);
        iVar3 = FUN_10050dc0((void *)*param_1, 0, iVar2, t2, pcVar7[iVar3], param_1[2]);
        t = (int)((unsigned int)iVar3 + (unsigned int)iVar2);
        __builtin_memcpy(base + 0x36, &t, 4);
        __builtin_memcpy(&t, base + 0x3a, 4);
        t = (int)((unsigned int)t + 1);
        __builtin_memcpy(base + 0x3a, &t, 4);
    }
    __builtin_memcpy(&t, base + 0x36, 4);
    __builtin_memcpy(&t2, base + 0x25, 4);
    uVar4 = ((unsigned int)t - (unsigned int)t2) + 1;
    __builtin_memcpy(&t, base + 0x21, 4);
    if (t < (int)uVar4) {
        __builtin_memcpy(base + 0x21, &uVar4, 4);
    }
    return uVar4 & 0xffffff00u;
}
