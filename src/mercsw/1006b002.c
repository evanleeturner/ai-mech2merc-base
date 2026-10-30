/* SPDX-License-Identifier: MIT */
/* mercsw 1006b002 */
extern char *PTR_DAT_100aaf68;
extern unsigned int DAT_100b36d8;
extern unsigned int DAT_100aae84;
extern int DAT_100aaf8c;
extern int DAT_100aaf90;
extern int DAT_100aafa4;
extern int DAT_100a7b60;
extern int DAT_10160c00[];

void __cdecl FUN_1001a6ca(unsigned int *param_1, unsigned int *param_2);
void __cdecl FUN_100603ff(int param_1);
void __cdecl FUN_1001a74a(unsigned int *param_1, unsigned int *param_2);
void __cdecl FUN_1003b59a(int param_1);
void __cdecl FUN_1003b954(int *param_1);
void __cdecl FUN_1003b2f0(char *param_1);
void __cdecl FUN_100186c5(int param_1);
void __cdecl FUN_10054c14(int param_1);
void __cdecl FUN_1003cd85(int *param_1);
void __cdecl FUN_10054925(int param_1);
void __cdecl FUN_1005f8cf(void);
void __cdecl FUN_10033f29(int *param_1, int param_2, int param_3, int param_4);
void __cdecl FUN_1000ec6b(void);

void __cdecl FUN_1006b002(int param_1, unsigned int param_2, unsigned int *param_3, int param_4, int *param_5)
{
    unsigned int uVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    int local_34;
    int local_28;
    unsigned int local_20[7];

    uVar3 = DAT_100b36d8;
    uVar2 = DAT_100aae84;
    DAT_100aae84 = 0;
    uVar1 = *(unsigned int *)(PTR_DAT_100aaf68 + 0x18);
    FUN_1001a6ca((unsigned int *)PTR_DAT_100aaf68, local_20);
    FUN_100603ff(param_1);
    *(unsigned int *)(PTR_DAT_100aaf68 + 0x18) = param_2;
    param_3[6] = 1;
    FUN_1001a74a((unsigned int *)PTR_DAT_100aaf68, param_3);
    FUN_1003b59a((int)PTR_DAT_100aaf68);
    FUN_1003b954((int *)PTR_DAT_100aaf68);
    FUN_1003b2f0(PTR_DAT_100aaf68);
    if (((DAT_100aaf8c != 0) || (DAT_100aaf90 != 0)) && (DAT_100aafa4 == 0)) {
        FUN_100186c5((int)PTR_DAT_100aaf68);
    }
    if (param_4 == 0) {
        FUN_1003cd85((int *)PTR_DAT_100aaf68);
        local_34 = 0;
        local_28 = DAT_10160c00[0];
        while (local_28 != 0) {
            FUN_10054925(local_28);
            local_34 = local_34 + 1;
            local_28 = DAT_10160c00[local_34];
        }
    } else {
        FUN_10054c14(param_4);
    }
    FUN_1005f8cf();
    if (param_5 != (int *)0) {
        FUN_10033f29(param_5, 0, 0, 0);
    }
    DAT_100b36d8 = uVar3;
    FUN_1000ec6b();
    *(unsigned int *)(PTR_DAT_100aaf68 + 0x18) = uVar1;
    DAT_100a7b60 = 1;
    FUN_1001a74a((unsigned int *)PTR_DAT_100aaf68, local_20);
    FUN_1003b59a((int)PTR_DAT_100aaf68);
    FUN_1003b954((int *)PTR_DAT_100aaf68);
    FUN_1003b2f0(PTR_DAT_100aaf68);
    DAT_100a7b60 = 0;
    DAT_100aae84 = uVar2;
    return;
}
