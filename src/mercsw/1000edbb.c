/* SPDX-License-Identifier: MIT */
/* mercsw 1000edbb */
extern int __stdcall _FILE_read_8(char *param_1, int param_2);
extern void __cdecl FUN_1006657e(int param_1, int param_2, int param_3);
extern void __cdecl FUN_1005b295(unsigned int *param_1, int param_2, unsigned int *param_3);
extern void __cdecl FUN_1005b4ae(int param_1, unsigned char *param_2);
extern void __cdecl FUN_1006af90(int param_1);
extern void *__stdcall HeapAlloc(void *hHeap, unsigned int dwFlags, unsigned int dwBytes);
extern int __stdcall HeapFree(void *hHeap, unsigned int dwFlags, void *lpMem);

extern char *DAT_100a7b50;
extern unsigned int DAT_100a7b84;
extern unsigned short DAT_100a7b88;
extern unsigned char DAT_100a7b8a;
extern unsigned short DAT_100a7b8c;
extern unsigned int DAT_100a7b90;
extern unsigned short DAT_100a7b94;
extern unsigned int DAT_100a7b98;
extern char DAT_100ada70[];
extern int DAT_101686f0;
extern void *DAT_100adf74;
extern int DAT_100adf80;
extern unsigned int DAT_100b9a18;
extern unsigned int DAT_100b9a1c;
extern unsigned int DAT_101f52e0[5];

void __stdcall FUN_1000edbb(void)
{
    char cVar1;
    unsigned char *lpMem;
    unsigned int uVar2;
    int iVar3;
    unsigned int uVar4;
    char *pcVar5;
    unsigned int *puVar6;
    char *pcVar7;
    char *pcVar8;
    unsigned int *puVar9;
    int local_128;
    unsigned int local_120_buf[0x40];
    char *local_120 = (char *)local_120_buf;
    unsigned int *local_20;
    unsigned int local_1c[5];
    int local_8;

    if ((DAT_100a7b50 == (char *)0) || (*DAT_100a7b50 == '\0')) {
        local_120_buf[0] = DAT_100a7b84;
        *(unsigned short *)(local_120 + 4) = DAT_100a7b88;
        *(unsigned char *)(local_120 + 6) = DAT_100a7b8a;
        uVar2 = 0xffffffff;
        pcVar5 = DAT_100ada70 + (int)((unsigned int)DAT_101686f0 * 2U);
        do {
            pcVar8 = pcVar5;
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar5 = local_120;
        do {
            pcVar7 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar7 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        pcVar5 = pcVar8 + -uVar2;
        pcVar8 = pcVar7 + -1;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            pcVar8[0] = pcVar5[0];
            pcVar8[1] = pcVar5[1];
            pcVar8[2] = pcVar5[2];
            pcVar8[3] = pcVar5[3];
            pcVar5 = pcVar5 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar8 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar8 = pcVar8 + 1;
        }
        iVar3 = -1;
        pcVar5 = local_120;
        do {
            pcVar8 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        pcVar8[-1] = (char)DAT_100a7b8c;
        pcVar8[0] = (char)(DAT_100a7b8c >> 8);
        iVar3 = -1;
        pcVar5 = local_120;
        do {
            pcVar8 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        pcVar8[-1] = (char)DAT_100a7b90;
        pcVar8[0] = (char)(DAT_100a7b90 >> 8);
        pcVar8[1] = (char)(DAT_100a7b90 >> 16);
        pcVar8[2] = (char)(DAT_100a7b90 >> 24);
    } else {
        uVar2 = 0xffffffff;
        pcVar5 = DAT_100a7b50;
        do {
            pcVar8 = pcVar5;
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        pcVar5 = pcVar8 + -uVar2;
        pcVar8 = local_120;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            pcVar8[0] = pcVar5[0];
            pcVar8[1] = pcVar5[1];
            pcVar8[2] = pcVar5[2];
            pcVar8[3] = pcVar5[3];
            pcVar5 = pcVar5 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar8 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar8 = pcVar8 + 1;
        }
        uVar2 = 0xffffffff;
        pcVar5 = DAT_100ada70 + (int)((unsigned int)DAT_101686f0 * 2U);
        do {
            pcVar8 = pcVar5;
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        iVar3 = -1;
        pcVar5 = local_120;
        do {
            pcVar7 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar7 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        pcVar5 = pcVar8 + -uVar2;
        pcVar8 = pcVar7 + -1;
        for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            pcVar8[0] = pcVar5[0];
            pcVar8[1] = pcVar5[1];
            pcVar8[2] = pcVar5[2];
            pcVar8[3] = pcVar5[3];
            pcVar5 = pcVar5 + 4;
            pcVar8 = pcVar8 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar8 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar8 = pcVar8 + 1;
        }
        iVar3 = -1;
        pcVar5 = local_120;
        do {
            pcVar8 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        pcVar8[-1] = (char)DAT_100a7b94;
        pcVar8[0] = (char)(DAT_100a7b94 >> 8);
        iVar3 = -1;
        pcVar5 = local_120;
        do {
            pcVar8 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar8 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar8;
        } while (cVar1 != '\0');
        pcVar8[-1] = (char)DAT_100a7b98;
        pcVar8[0] = (char)(DAT_100a7b98 >> 8);
        pcVar8[1] = (char)(DAT_100a7b98 >> 16);
        pcVar8[2] = (char)(DAT_100a7b98 >> 24);
    }

    local_8 = _FILE_read_8(local_120, 0);
    if (local_8 != 0) {
        local_20 = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x502e);
        if (local_20 != (unsigned int *)0) {
            lpMem = (unsigned char *)HeapAlloc(DAT_100adf74, 9, 0x300);
            if (lpMem != (unsigned char *)0) {
                (*(void (__cdecl **)(int, int, unsigned char *, int))(DAT_100b9a18 + 0x14))(0, 0x100, lpMem, 1);
                puVar6 = DAT_101f52e0;
                puVar9 = local_1c;
                for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar9 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar9 = puVar9 + 1;
                }
                FUN_1006657e((int)local_1c, (int)local_1c, local_8);
                if (DAT_100adf80 == 0) {
                    local_128 = -1;
                } else {
                    local_128 = (*(int (__cdecl **)(void))(DAT_100b9a18 + 0x20))();
                }
                if (local_128 == 0) {
                    FUN_1005b295(local_1c, local_8, local_20);
                    if (DAT_100adf80 != 0) {
                        (*(void (__cdecl **)(void))(DAT_100b9a1c + 0x18))();
                    }
                }
                FUN_1005b4ae(local_8, lpMem);
                (*(void (__cdecl **)(unsigned char *, int))(DAT_100b9a18 + 0x1c))(lpMem, 0x3c);
                HeapFree(DAT_100adf74, 1, lpMem);
            }
            HeapFree(DAT_100adf74, 1, local_20);
        }
        FUN_1006af90(local_8);
    }
    return;
}
