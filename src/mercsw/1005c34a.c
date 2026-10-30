/* SPDX-License-Identifier: MIT */
/* mercsw 1005c34a */
extern HANDLE DAT_100adf74;
extern int DAT_10114db0[];

void *__stdcall HeapAlloc(HANDLE, unsigned int, unsigned int);
int __stdcall HeapFree(HANDLE, unsigned int, void *);
void __cdecl FUN_1000f47f(void);
void __cdecl FUN_1000f1f0(void);

void __cdecl FUN_1005c34a(int param_1)
{
    int bVar1;
    unsigned int *lpMem;
    int iVar3;
    unsigned int *puVar4;
    unsigned int *puVar5;
    char *obj;
    int local_2c;
    int local_24;
    int local_20;
    unsigned int *local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;

    bVar1 = 1;
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
        *(int *)(*(int *)(param_1 + 0x54) + 0x30 + (int)((unsigned int)local_14 * 0x40u)) = local_14;
    }
    local_c = *(int *)(param_1 + 0x54);
    local_8 = 10;
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
        if (((*(int *)(local_c + 0x28) == 4) || (*(int *)(local_c + 0x28) == 1)) ||
            (*(int *)(local_c + 0x28) == 6)) {
            local_8 = local_8 + 1;
        }
        if (local_14 != 0xe) {
            local_c = local_c + 0x40;
        }
    }
    local_c = *(int *)(param_1 + 0x54);
    local_20 = 3;
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
        if (((*(int *)(local_c + 0x28) == 5) || (*(int *)(local_c + 0x28) == 3)) ||
            (*(int *)(local_c + 0x28) == 7)) {
            obj = (char *)DAT_10114db0[local_20];
            (*(void (__cdecl **)(int, int))(obj + 0xcc))(
                DAT_10114db0[local_20],
                (int)((unsigned int)*(int *)(local_c + 4) * 0x68u + 0x100a7c00u));
            (*(void (__cdecl **)(int, int))(obj + 200))(DAT_10114db0[local_20], local_14);
            *(void **)(obj + 0xf0) = (void *)FUN_1000f47f;
            *(void **)(obj + 0xf4) = (void *)FUN_1000f1f0;
            local_20 = local_20 + 1;
        }
        if (local_20 == 10) {
            local_20 = local_8;
        }
        if (local_14 != 0xe) {
            local_c = local_c + 0x40;
        }
    }
    local_c = *(int *)(param_1 + 0x54);
    local_2c = 10;
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
        if (((*(int *)(local_c + 0x28) == 4) || (*(int *)(local_c + 0x28) == 1)) ||
            (*(int *)(local_c + 0x28) == 6)) {
            obj = (char *)DAT_10114db0[local_2c];
            (*(void (__cdecl **)(int, int))(obj + 0xcc))(
                DAT_10114db0[local_2c],
                (int)((unsigned int)*(int *)(local_c + 4) * 0x68u + 0x100a7c00u));
            (*(void (__cdecl **)(int, int))(obj + 200))(DAT_10114db0[local_2c], local_14);
            *(void **)(obj + 0xf0) = (void *)FUN_1000f47f;
            *(void **)(obj + 0xf4) = (void *)FUN_1000f1f0;
            local_2c = local_2c + 1;
        }
        if (0x10 < local_2c) {
            local_2c = local_20;
        }
        if (local_14 != 0xe) {
            local_c = local_c + 0x40;
        }
    }
    local_c = *(int *)(param_1 + 0x54);
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
        if ((*(int *)(local_c + 0x28) == 2) || (*(int *)(local_c + 0x28) == 0)) {
            if ((bVar1) && (local_20 < local_2c)) {
                local_10 = local_2c;
                if (local_2c == 0x11) {
                    local_10 = local_20;
                    local_20 = local_20 + 1;
                } else {
                    local_2c = local_2c + 1;
                }
                bVar1 = 0;
            } else {
                local_10 = local_20;
                if (local_20 == 10) {
                    local_10 = local_2c;
                    local_2c = local_2c + 1;
                } else {
                    local_20 = local_20 + 1;
                }
                bVar1 = 1;
            }
            obj = (char *)DAT_10114db0[local_10];
            (*(void (__cdecl **)(int, int))(obj + 0xcc))(
                DAT_10114db0[local_10],
                (int)((unsigned int)*(int *)(local_c + 4) * 0x68u + 0x100a7c00u));
            (*(void (__cdecl **)(int, int))(obj + 200))(DAT_10114db0[local_10], local_14);
            *(void **)(obj + 0xf0) = (void *)FUN_1000f47f;
            *(void **)(obj + 0xf4) = (void *)FUN_1000f1f0;
        }
        if (local_14 != 0xe) {
            local_c = local_c + 0x40;
        }
    }
    lpMem = (unsigned int *)HeapAlloc(DAT_100adf74, 9, 0x380);
    local_18 = lpMem;
    for (local_14 = 3; local_14 < 10; local_14 = local_14 + 1) {
        obj = (char *)DAT_10114db0[local_14];
        if (*(int *)(obj + 0xc) != -1) {
            puVar4 = (unsigned int *)((int)((unsigned int)*(int *)(obj + 0xc) * 0x40u) +
                                      *(int *)(param_1 + 0x54));
            puVar5 = local_18;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
            }
            if (local_14 != 9) {
                local_18 = local_18 + 0x20;
            }
        }
    }
    local_18 = lpMem + 0x10;
    for (local_14 = 10; local_14 < 0x11; local_14 = local_14 + 1) {
        obj = (char *)DAT_10114db0[local_14];
        if (*(int *)(obj + 0xc) != -1) {
            puVar4 = (unsigned int *)((int)((unsigned int)*(int *)(obj + 0xc) * 0x40u) +
                                      *(int *)(param_1 + 0x54));
            puVar5 = local_18;
            for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
            }
            if (local_14 != 0x10) {
                local_18 = local_18 + 0x20;
            }
        }
    }
    local_24 = 0;
    for (local_14 = 3; local_14 < 10; local_14 = local_14 + 1) {
        obj = (char *)DAT_10114db0[local_14];
        if (*(int *)(obj + 0xc) != -1) {
            *(int *)(obj + 0xc) = local_24;
            local_24 = local_24 + 2;
        }
    }
    local_24 = 1;
    for (local_14 = 10; local_14 < 0x11; local_14 = local_14 + 1) {
        obj = (char *)DAT_10114db0[local_14];
        if (*(int *)(obj + 0xc) != -1) {
            *(int *)(obj + 0xc) = local_24;
            local_24 = local_24 + 2;
        }
    }
    puVar4 = lpMem;
    puVar5 = *(unsigned int **)(param_1 + 0x54);
    for (iVar3 = 0xe0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
    }
    HeapFree(DAT_100adf74, 1, lpMem);
    for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
        int *piVar2 = (int *)(*(int *)(param_1 + 0x54) + (int)((unsigned int)local_14 * 0x40u));
        if (*piVar2 == 0) {
            piVar2[1] = -1;
        }
    }
    return;
}
