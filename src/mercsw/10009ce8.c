/* SPDX-License-Identifier: MIT */
/* mercsw 10009ce8 */
extern int DAT_100a7b30[];
extern int DAT_10215658;
extern int DAT_100adf34;

int __cdecl FUN_10002570(unsigned int, int);
int __cdecl FixedMul16(int, int);

void __cdecl FUN_10009ce8(int param_1)
{
    int iVar1;
    int iVar2;
    int uVar3;

    iVar1 = DAT_100a7b30[DAT_10215658];
    if ((iVar1 != 0) && (*(char *)(DAT_100adf34 + 9) != '\0')) {
        if (param_1 == 0) {
            *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x20);
        }
        else if (param_1 == 1) {
            uVar3 = FUN_10002570(*(unsigned int *)(iVar1 + 0x18), 0x20000);
            *(int *)(iVar1 + 0x18) = uVar3;
            if (*(int *)(iVar1 + 0x18) < *(int *)(iVar1 + 0x24)) {
                *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x28);
            }
        }
        else if (param_1 == 2) {
            iVar2 = FixedMul16(*(int *)(iVar1 + 0x18), 0x20000);
            *(int *)(iVar1 + 0x18) = iVar2;
            if (*(int *)(iVar1 + 0x28) < *(int *)(iVar1 + 0x18)) {
                *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x24);
            }
        }
        uVar3 = FUN_10002570(*(unsigned int *)(iVar1 + 0x20), *(int *)(iVar1 + 0x18));
        *(int *)(iVar1 + 0x2c) = uVar3;
    }
    return;
}
