/* SPDX-License-Identifier: MIT */
/* mercsw 1004bbc3 */
extern unsigned char DAT_100ef030[];
extern int DAT_100b3788;
extern int DAT_100b06fc;
extern int DAT_100adf38;
extern int DAT_100eef40[];

/* The following counters are unsigned shorts (2-byte accesses in the P-code).
   Three of them sit at odd addresses (0x1016585d, 0x1016585f, 0x10165861),
   so they are packed and are accessed with __builtin_memcpy.
   0x10165874, 0x10165876 and 0x10165878 are 2-aligned and are accessed directly. */
extern unsigned char DAT_1016585d[];
extern unsigned char DAT_1016585f[];
extern unsigned char DAT_10165861[];
extern unsigned short DAT_10165874;
extern unsigned short DAT_10165876;
extern unsigned short DAT_10165878;

int __cdecl FUN_1004d60d(unsigned int param_1);
void __cdecl FUN_1004fed5(void);
void __cdecl FUN_1000d59a(int param_1);

void __cdecl FUN_1004bbc3(unsigned int param_1)
{
    unsigned short *puVar1;
    int iVar2;
    unsigned short uVar3;

    puVar1 = (unsigned short *)(DAT_100ef030 + param_1 * 0x40);
    if ((DAT_100b3788 != 0) && ((*(unsigned short *)(DAT_100b3788 + 2) & 0x200) != 0) &&
        (*(unsigned short *)(DAT_100b3788 + 0x14) == param_1)) {
        DAT_100b3788 = 0;
    }
    if ((*puVar1 & 4) == 0) {
        if (-1 < DAT_100b06fc) {
            if (DAT_100b06fc == DAT_100adf38) {
                iVar2 = FUN_1004d60d(param_1);
                if (iVar2 == 0) {
                    __builtin_memcpy(&uVar3, DAT_10165861, 2);
                    uVar3 = (unsigned short)(uVar3 + 1);
                    __builtin_memcpy(DAT_10165861, &uVar3, 2);
                }
                else if (iVar2 == 1) {
                    __builtin_memcpy(&uVar3, DAT_1016585d, 2);
                    uVar3 = (unsigned short)(uVar3 + 1);
                    __builtin_memcpy(DAT_1016585d, &uVar3, 2);
                }
                else if (iVar2 == 2) {
                    __builtin_memcpy(&uVar3, DAT_1016585f, 2);
                    uVar3 = (unsigned short)(uVar3 + 1);
                    __builtin_memcpy(DAT_1016585f, &uVar3, 2);
                }
            }
            if (*(int *)(DAT_100eef40[DAT_100adf38] + 8) == *(int *)(DAT_100eef40[DAT_100b06fc] + 8)) {
                iVar2 = FUN_1004d60d(param_1);
                if (iVar2 == 0) {
                    DAT_10165878 = (unsigned short)(DAT_10165878 + 1);
                }
                else if (iVar2 == 1) {
                    DAT_10165874 = (unsigned short)(DAT_10165874 + 1);
                }
                else if (iVar2 == 2) {
                    DAT_10165876 = (unsigned short)(DAT_10165876 + 1);
                }
            }
        }
        if ((*puVar1 & 0x40) != 0) {
            FUN_1004fed5();
        }
        FUN_1000d59a((int)puVar1);
    }
    return;
}
