/* SPDX-License-Identifier: MIT */
/* mercsw 10088897 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

extern long long __cdecl __ftol(void);
extern unsigned int __cdecl FUN_100879ee(int param_1, void *param_2);
extern int __cdecl FUN_100885c8(int *param_1);
extern void __cdecl FUN_10081fdc(void);

extern int DAT_100aa1ac;
extern unsigned char DAT_100adf98;
extern int DAT_100ba9f8;
extern int DAT_100bf7d0;
extern int DAT_100baa00;
extern int DAT_100baa04;
extern int DAT_100baa08;
extern int DAT_100ad6e0;
extern short DAT_100ba96c;

extern unsigned char DAT_100baa10[];
extern unsigned char DAT_100baa14[];
extern unsigned char DAT_100baa18[];
extern unsigned char DAT_100baa1c[];
extern unsigned char DAT_100baa20[];
extern unsigned char DAT_100baa24[];
extern unsigned char DAT_100baa28[];
extern unsigned char DAT_100baa2c[];
extern unsigned char DAT_100baa8c[];
extern unsigned char DAT_100c8908[];
extern unsigned char DAT_100c8dc0[];
extern unsigned char DAT_100c8990[];
extern unsigned char DAT_100c8b68[];
extern unsigned char DAT_100c8ba8[];
extern unsigned char DAT_100bf7f0[];
extern unsigned char *PTR_DAT_100bf7ec[];
extern unsigned char DAT_100bccd8[];

void __stdcall FUN_10088897(void)
{
    int iVar1;
    int iVar2;
    unsigned int uVar3;
    int iVar4;
    long long lVar5;
    int local_2c;
    unsigned char local_28;
    unsigned int local_c;
    short local_8[2];
    unsigned char *p;
    unsigned char *b;
    char *pcVar;
    int tmp;
    int tmp2;
    unsigned char *bp;

    if ((DAT_100aa1ac == 0) || ((DAT_100adf98 & 1) != 0)) {
        for (local_c = 0; (int)local_c < DAT_100ba9f8; local_c = local_c + 1) {
            iVar2 = (int)(local_c * 0x80);
            p = *(unsigned char **)(DAT_100baa24 + iVar2);
            __builtin_memcpy(&pcVar, p + 0x2a, 4);
            if ((pcVar == 0) || (*pcVar == '\0')) {
                __builtin_memcpy(&pcVar, p + 0x2e, 4);
                if ((pcVar != 0) && (*pcVar != '\0')) {
                    **(int **)(p + 4) = 0;
                    lVar5 = __ftol();
                    tmp = (int)lVar5;
                    __builtin_memcpy(p + 0x1a, &tmp, 4);
                }
            } else {
                if (*(int *)(DAT_100baa18 + iVar2) != 0) {
                    iVar1 = *(int *)(DAT_100baa10 + iVar2);
                    if (*(int *)(DAT_100c8908 + iVar1 * 4) != 0) {
                        (*(void (__cdecl **)(int, int))(*(int *)(DAT_100c8dc0 + iVar1 * 4) + 0x10))
                            (*(int *)(DAT_100c8990 + iVar1 * 0x74),
                             *(int *)(DAT_100baa14 + iVar2));
                    }
                }
                __builtin_memcpy(&tmp, p + 0x10, 4);
                __builtin_memcpy(p + 0x1a, &tmp, 4);
                **(int **)(p + 4) = 0;
                *(int *)(DAT_100baa1c + iVar2) = 0;
            }
            p[0x15] = 0;
        }
        for (local_c = 0; local_c < 0x59; local_c = local_c + 1) {
            if (*(int *)(DAT_100bf7f0 + local_c * 0x20) != 0) {
                *(PTR_DAT_100bf7ec)[local_c * 8] = 0;
            }
        }
        for (local_c = 0; (int)local_c < DAT_100bf7d0; local_c = local_c + 1) {
            if ((*(int *)(DAT_100c8908 + local_c * 4) != 0) &&
                ((DAT_100ad6e0 == 0) || ((int)local_c != DAT_100baa08))) {
                (*(void (__cdecl **)(int, void *, void *))(*(int *)(DAT_100c8dc0 + local_c * 4) + 0x14))
                    (*(int *)(DAT_100c8990 + local_c * 0x74),
                     DAT_100c8b68 + local_c * 0x50,
                     DAT_100c8ba8 + local_c * 0x50);
            }
        }
        for (local_c = 0; (int)local_c < DAT_100baa00; local_c = local_c + 1) {
            b = DAT_100bccd8 + local_c * 0x6e;
            __builtin_memcpy(&tmp, b + 0xa, 4);
            if ((DAT_100baa04 != 0) || (tmp != 0)) {
                __builtin_memcpy(&tmp2, b + 6, 4);
                uVar3 = FUN_100879ee(tmp2, b + 0xe);
                local_28 = (unsigned char)uVar3;
                if ((b[4] == 0) || (b[5] == 0)) {
                    __builtin_memcpy(&bp, b, 4);
                    *bp = (unsigned char)(*bp | local_28);
                }
                b[5] = local_28;
            }
        }
        for (local_c = 0; (int)local_c < DAT_100ba9f8; local_c = local_c + 1) {
            iVar2 = (int)(local_c * 0x80);
            if ((DAT_100baa04 != 0) || (*(int *)(DAT_100baa8c + iVar2) != 0)) {
                p = *(unsigned char **)(DAT_100baa24 + iVar2);
                iVar4 = FUN_100885c8((int *)(DAT_100baa10 + iVar2));
                if ((iVar4 == 0) &&
                    ((*(int *)(DAT_100baa18 + iVar2) != 0) &&
                     (iVar4 = (int)FUN_100879ee(*(int *)(DAT_100baa28 + iVar2),
                                                DAT_100baa2c + iVar2),
                      iVar4 != 0))) {
                    iVar4 = (int)((unsigned int)**(int **)(DAT_100baa18 + iVar2) *
                                  (unsigned int)*(int *)(DAT_100baa20 + iVar2));
                    if (*(int *)(DAT_100baa1c + iVar2) == iVar4) {
                        __builtin_memcpy(&tmp, p + 0x1a, 4);
                        if (**(int **)(p + 4) == tmp) {
                            __builtin_memcpy(p + 0x1a, &iVar4, 4);
                        }
                    } else {
                        __builtin_memcpy(p + 0x1a, &iVar4, 4);
                    }
                    *(int *)(DAT_100baa1c + iVar2) = iVar4;
                }
                __builtin_memcpy(&local_2c, p + 0x1a, 4);
                if (0x10000 < local_2c) {
                    local_2c = 0x10000;
                }
                if (local_2c < -0x10000) {
                    local_2c = -0x10000;
                }
                **(int **)p =
                    (int)((unsigned int)((int)((unsigned int)*(int *)(p + 8) *
                                               (unsigned int)(local_2c + 0x10000)) / 2) +
                          (unsigned int)*(int *)(p + 0xc)) >>
                    (p[0x14] & 0x1f);
            }
        }
    }
    if (*(int *)(DAT_100c8908 + DAT_100baa08 * 4) != 0) {
        (*(void (__cdecl **)(short *))(*(int *)(DAT_100c8dc0 + DAT_100baa08 * 4) + 0x18))(local_8);
    }
    if (local_8[0] == 0x40d) {
        FUN_10081fdc();
    } else {
        DAT_100ba96c = local_8[0];
    }
    return;
}
