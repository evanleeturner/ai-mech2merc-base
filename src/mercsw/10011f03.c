/* SPDX-License-Identifier: MIT */
/* mercsw 10011f03 */
extern int DAT_100aa1ac;
extern unsigned int DAT_100adf98;
extern int *DAT_100aa1d8;
extern int DAT_101eb4d0[8];
extern unsigned char DAT_101eb520[8];
extern unsigned char DAT_101eb510[8];
extern unsigned short DAT_101658a0;
extern unsigned int DAT_100b38d8;
extern unsigned int DAT_100aa1e0;
extern unsigned int *DAT_100aa1dc;
extern void *DAT_100adf74;
extern unsigned int *DAT_100aa1e4;
extern unsigned int DAT_101eb51c;
extern unsigned int *DAT_100aa1e8;
extern unsigned int *DAT_100aa1ec;
extern void *DAT_101eb4c4;
extern void *DAT_101eb4c0;
extern int DAT_101eb4f0[8];
extern int DAT_101eb530[8];
extern int DAT_100adf28;
extern int DAT_100adf2c;
extern int DAT_100aa20c;
extern int DAT_100adf38;

void *__stdcall HeapAlloc(void *hHeap, unsigned long dwFlags, unsigned long dwBytes);
int __cdecl FUN_10013be9(int *param_1);
int __cdecl FUN_10011e80(int param_1);

void __cdecl FUN_10011f03(int *param_1)
{
    unsigned int uVar1;
    unsigned int uVar2;
    int iVar3;
    unsigned int *puVar4;
    int local_8;

    if (DAT_100aa1ac == 0) {
        DAT_100adf98 = DAT_100adf98 | 1;
    }
    else {
        DAT_100aa1d8 = param_1;
        for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
            DAT_101eb4d0[local_8] = 0;
            DAT_101eb520[local_8] = 0;
            DAT_101eb510[local_8] = 0;
        }
        DAT_101658a0 = (unsigned short)DAT_100b38d8;
        DAT_100aa1e0 = 0x85;
        DAT_100aa1dc = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x85);
        uVar2 = DAT_100aa1e0;
        puVar4 = DAT_100aa1dc;
        for (uVar1 = DAT_100aa1e0 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(unsigned char *)puVar4 = 0;
            puVar4 = (unsigned int *)((int)puVar4 + 1);
        }
        DAT_100aa1e4 = DAT_100aa1dc;
        DAT_101eb51c = 0x27;
        DAT_100aa1e8 = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x27);
        uVar2 = DAT_101eb51c;
        puVar4 = DAT_100aa1e8;
        for (uVar1 = DAT_101eb51c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(unsigned char *)puVar4 = 0;
            puVar4 = (unsigned int *)((int)puVar4 + 1);
        }
        DAT_100aa1ec = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x52);
        puVar4 = DAT_100aa1ec;
        for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        }
        *(unsigned short *)puVar4 = 0;
        DAT_101eb4c4 = HeapAlloc(DAT_100adf74, 1, 0x100);
        DAT_101eb4c0 = HeapAlloc(DAT_100adf74, 1, 0x100);
        for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
            DAT_101eb4f0[local_8] = 0;
            DAT_101eb530[local_8] = 0;
        }
        iVar3 = FUN_10013be9(param_1);
        if (iVar3 == 0) {
            DAT_100adf28 = 1;
            DAT_100adf2c = (int)((unsigned int)DAT_100adf2c + 0x29au);
        }
        else if (DAT_100aa20c != 0) {
            DAT_100adf38 = FUN_10011e80(DAT_100aa20c);
        }
    }
    return;
}
