/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b500 */
extern int *DAT_10083508;
extern int DAT_100aa6c8;

int __cdecl FUN_1000d230(int param_1);
int __cdecl FUN_1000d260(int param_1, int param_2);
unsigned int __cdecl FUN_1006b9c0(int param_1, char param_2, unsigned int *param_3);
void __cdecl FUN_1006b450(int param_1, int param_2, int param_3, int param_4, int param_5);
void __cdecl FUN_10010d80(int param_1);

unsigned int __cdecl FUN_1006b500(int param_1, int param_2, char param_3, int param_4, int param_5)
{
    int iVar1;
    int iVar2;
    int iVar4;
    int iVar5;
    int cVar3;
    unsigned int uVar6;
    unsigned int local_8;
    int local_4;

    iVar1 = (int)((unsigned int)param_2 + (unsigned int)param_1 * 0xcU);
    iVar2 = *(int *)(param_5 + 0x368 + iVar1 * 4);
    iVar1 = (int)((unsigned int)iVar1 * 4U);
    if (iVar2 < 0) {
        return 0;
    }
    if (*(int *)(iVar1 + 0x368 + param_4) == iVar2) {
        return 0;
    }
    iVar4 = FUN_1000d230(iVar2);
    local_4 = FUN_1000d260(iVar4, iVar2);
    cVar3 = FUN_1000d230(*(int *)(iVar1 + 0x368 + param_4));
    iVar5 = FUN_1000d260(cVar3, *(int *)(iVar1 + 0x368 + param_4));
    if (((cVar3 == iVar4) && (iVar4 == 1)) && (local_4 == iVar5)) {
        return 0;
    }
    uVar6 = FUN_1006b9c0(iVar2, '\0', &local_8);
    if ((char)uVar6 != '\x01') {
        return 0xffffffffU;
    }
    if (param_3 == '\0') {
        *(int *)(iVar1 + 0x368 + param_4) = *(int *)(iVar1 + 0x368 + param_5);
        *(unsigned char *)(param_4 + 0x84c) = 1;
        *DAT_10083508 = 1;
    }
    cVar3 = FUN_1000d230(iVar2);
    if (cVar3 == 2) {
        if ((iVar2 / 100) * 100 != 8000) goto LAB_1006b648;
    }
    else if (param_3 != '\0') {
        return local_8;
    }
    FUN_1006b450(param_4, param_5, param_1, param_2, iVar2);
    *(unsigned char *)(param_4 + 0x84c) = 1;
    *DAT_10083508 = 1;
LAB_1006b648:
    if (param_3 == '\0') {
        FUN_10010d80(DAT_100aa6c8);
        FUN_1006b9c0(iVar2, '\x01', &local_8);
        *(unsigned char *)(param_4 + 0x84c) = 1;
        *DAT_10083508 = 1;
    }
    return local_8;
}
