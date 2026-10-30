/* SPDX-License-Identifier: MIT */
/* mercsw 10029044 */
extern int DAT_100b38fc;
extern int _DAT_1016ac70;

void               __cdecl FUN_1002950f(int param_1, unsigned short param_2);
void               __cdecl FUN_10043f2c(int param_1);
int                __cdecl FUN_1002954c(unsigned short param_1);
unsigned char      __cdecl FUN_10044054(int *param_1);
unsigned long long __cdecl FUN_100295f4(int *param_1, int param_2);
int                __cdecl FUN_100297b4(int param_1);
int                __cdecl FUN_1002a132(int param_1);
void               __cdecl FUN_10022b70(int param_1, int param_2);
void               __cdecl FUN_1002c41d(int *param_1);
void               __cdecl FUN_1002a8fe(int param_1);

void __cdecl FUN_10029044(int *param_1, unsigned short param_2)
{
    unsigned char bVar1;
    int iVar2;
    unsigned long long uVar3;
    int local_8;

    FUN_1002950f((int)param_1, param_2);
    FUN_10043f2c((int)param_1);
    iVar2 = FUN_1002954c(param_2);
    _DAT_1016ac70 = DAT_100b38fc;
    switch (*(short *)((char *)param_1 + 0x176)) {
    case 2:
        *(unsigned char *)(param_1[0x13] + 0x25) = 0;
        *(unsigned char *)(param_1[0x13] + 0x27) = 0;
        bVar1 = FUN_10044054(param_1);
        if (bVar1 == 0) {
            uVar3 = FUN_100295f4(param_1, iVar2);
            *(int *)(param_1[0x13] + 8) = (int)uVar3;
            local_8 = FUN_100297b4((int)param_1);
        } else {
            local_8 = FUN_1002a132((int)param_1);
        }
        FUN_10022b70((int)param_1, local_8);
        break;
    default:
        if (param_1[4] == 2) {
            *(int *)(param_1[0x13] + 8) = 0x333;
        }
        break;
    case 4:
        param_1[0x35] = (int)((unsigned int)param_1[0x35] + 0xb40000u) % 0x1680000;
        bVar1 = FUN_10044054(param_1);
        if (bVar1 == 0) {
            *(int *)(param_1[0x13] + 8) = 0x400;
            FUN_100297b4((int)param_1);
        }
        _DAT_1016ac70 = (int)((unsigned int)_DAT_1016ac70 + 0xb5u);
        break;
    case 5:
        FUN_1002c41d(param_1);
        bVar1 = FUN_10044054(param_1);
        if (bVar1 == 0) {
            uVar3 = FUN_100295f4(param_1, iVar2);
            *(int *)(param_1[0x13] + 8) = (int)uVar3;
            FUN_100297b4((int)param_1);
        }
        FUN_1002a8fe((int)param_1);
        _DAT_1016ac70 = (int)((unsigned int)_DAT_1016ac70 + 0xb5u);
        break;
    case 6:
    case 7:
    case 8:
        FUN_1002c41d(param_1);
        bVar1 = FUN_10044054(param_1);
        if (bVar1 == 0) {
            uVar3 = FUN_100295f4(param_1, iVar2);
            *(int *)(param_1[0x13] + 8) = (int)uVar3;
            FUN_100297b4((int)param_1);
        }
        _DAT_1016ac70 = (int)((unsigned int)_DAT_1016ac70 + 0xb5u);
    }
    return;
}
