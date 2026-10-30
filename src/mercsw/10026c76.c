/* SPDX-License-Identifier: MIT */
/* mercsw 10026c76 */
extern unsigned char *PTR_DAT_100ad1bc;

void __cdecl FUN_1006312b(int param_1, int param_2);

void __cdecl FUN_10026c76(int *param_1)
{
    char cVar1;
    unsigned int *puVar2;
    int iVar3;
    unsigned int uVar4;
    signed char bIdx;

    cVar1 = (char)param_1[0x62];
    if (cVar1 == '\0') {
        param_1[0x6a] = 1;
        param_1[0x6e] = 0;
        param_1[0x6b] = 0x21;
    }
    else if (cVar1 == '\x01') {
        param_1[0x6a] = 1;
        param_1[0x6e] = 2;
        param_1[0x6b] = 0x21;
    }
    else if (cVar1 == '\x02') {
        param_1[0x6a] = 0;
        param_1[0x6e] = 2;
        param_1[0x6b] = 100;
    }

    __builtin_memcpy(&bIdx, (unsigned char *)param_1 + 0x189, 1);
    puVar2 = (unsigned int *)(PTR_DAT_100ad1bc + (unsigned int)((int)bIdx * 0x1c));

    if (*param_1 == 1) {
        uVar4 = *puVar2;
        __builtin_memcpy((unsigned char *)param_1 + 0x202, &uVar4, 4);
    }
    else {
        uVar4 = 0;
        __builtin_memcpy((unsigned char *)param_1 + 0x202, &uVar4, 4);
    }

    uVar4 = puVar2[1];
    __builtin_memcpy((unsigned char *)param_1 + 0x1fe, &uVar4, 4);

    uVar4 = puVar2[2];
    __builtin_memcpy((unsigned char *)param_1 + 0x192, &uVar4, 4);

    /* __ftol: the FPU operand is not visible in the decompile; puVar2[3] is
       the only table slot otherwise unused, so it is assumed to be a float. */
    param_1[0x6c] = (int)*(float *)&puVar2[3];

    param_1[0x6d] = (int)puVar2[4];
    param_1[0x6f] = (int)puVar2[5];
    param_1[0x70] = (int)puVar2[6];

    __builtin_memcpy(&iVar3, (unsigned char *)param_1 + 0x192, 4);
    if (iVar3 != 0) {
        FUN_1006312b(param_1[8], 0);
    }
    return;
}
