/* SPDX-License-Identifier: MIT */
/* mercsw 100504ef */
extern unsigned char DAT_101155c0[];
extern int DAT_100eef40[];
extern int DAT_100af17c;
extern int *PTR_DAT_100af0d0;

extern unsigned short __cdecl FUN_1001ca17(unsigned short *param_1);
extern void __cdecl FUN_1001d671(void *param_1);
extern unsigned short * __cdecl FUN_1008668b(int param_1, unsigned int param_2, int *param_3);
extern int __cdecl FUN_1001e8a8(int param_1, int *param_2, unsigned short param_3);
extern void __cdecl FUN_10068d4e(int param_1, int param_2, int param_3);
extern void __cdecl FUN_10068db6(int param_1);
extern unsigned short * __cdecl FUN_10068dc9(int param_1, int *param_2, int param_3, int param_4);
extern unsigned char __cdecl FUN_1008691a(void);
extern void __cdecl FUN_1008664f(unsigned int param_1, int *param_2);
extern void __cdecl FUN_1001c9e8(unsigned short *param_1, unsigned short param_2);
extern int * __cdecl FUN_1002f010(int param_1, int param_2);
extern int * __cdecl FUN_1002f19a(int param_1, int *param_2);
extern int __cdecl FUN_1001d5cb(int param_1);
extern void __cdecl FUN_1002f272(int param_1, int param_2);
extern void __cdecl FUN_1001d5e1(int param_1, int param_2);
extern void __cdecl FUN_1001ca37(int param_1, unsigned short param_2);
extern void __cdecl FUN_1001ca62(int param_1, short param_2);
extern void __cdecl FUN_1001ca4c(int param_1, short param_2);
extern void __cdecl FUN_1003da99(unsigned short *param_1);
extern void __cdecl FUN_1003dfde(unsigned short *param_1);
extern void __cdecl FUN_1003df3a(unsigned short *param_1);
extern void __cdecl FUN_1003e051(unsigned short *param_1);
extern void __cdecl FUN_100141c0(unsigned short *param_1, int param_2);
extern void __cdecl FUN_1002f727(int param_1);
extern void __cdecl FUN_1002f7f7(int param_1);
extern void __cdecl FUN_1002f90b(int param_1, int param_2);
extern void __cdecl FUN_1002f37a(int param_1, int param_2, int param_3, int param_4);
extern void __cdecl FUN_1002fbc0(int *param_1);

#define REC_I(rec, off)  (*(int *)((rec) + (off)))
#define REC_P(rec, off)  (*(unsigned short **)((rec) + (off)))

unsigned int __cdecl FUN_100504ef(int param_1, int param_2, int *param_3)
{
    int iVar1;
    unsigned char bVar2;
    unsigned short uVar3;
    int *piVar4;
    unsigned int uVar5;
    unsigned short *puVar6;
    int iVar7;
    unsigned short *puVar8;
    int *piVar9;
    int *local_24;
    int local_20;
    int local_c;
    unsigned int local_8;
    unsigned char *rec;
    int iStride4;
    int iStride2;

    local_c = 0;
    uVar3 = 0;
    iVar1 = (int)((unsigned int)param_1 * 0x48u);
    iStride4 = (int)((unsigned int)param_2 * 4u);
    iStride2 = (int)((unsigned int)param_2 * 2u);
    rec = DAT_101155c0 + iVar1;
    piVar4 = (int *)rec;
    if (*(short *)(rec + 0x46) == 0) {
        if (REC_I(rec, 0x24) != 0) {
            if ((((unsigned char)*(unsigned short *)(REC_I(rec, 0x24) + 2)) & 0xf0) == 0x50) {
                return 1;
            }
            uVar3 = FUN_1001ca17(REC_P(rec, 0x24));
            FUN_1001d671((void *)REC_I(rec, 0x24));
            REC_I(rec, 0x24) = 0;
        }
        puVar6 = FUN_1008668b(DAT_100af17c, *(unsigned int *)(rec + 8 + iStride4),
                              PTR_DAT_100af0d0);
        if (puVar6 == (unsigned short *)0) {
            uVar5 = 0;
        }
        else {
            iVar7 = FUN_1001e8a8(DAT_100af17c, PTR_DAT_100af0d0,
                                 (unsigned short)*(int *)(rec + 8 + iStride4));
            REC_I(rec, 4) = -1;
            FUN_10068d4e(1, 1, 1);
            FUN_10068db6(REC_I(rec, 0x2c));
            do {
                if (REC_I(rec, 0x24) != 0) break;
                puVar8 = FUN_10068dc9((int)puVar6, &local_c, iVar7, 0);
                REC_P(rec, 0x24) = puVar8;
            } while ((REC_I(rec, 0x24) != 0) ||
                     (bVar2 = FUN_1008691a(), (unsigned int)bVar2 != 0));
            FUN_1008664f(*(unsigned int *)(rec + 8 + iStride4), PTR_DAT_100af0d0);
            if (REC_I(rec, 0x24) == 0) {
                uVar5 = 0;
            }
            else {
                bVar2 = 0;
                FUN_1001c9e8(REC_P(rec, 0x24), uVar3);
                REC_I(rec, 4) = param_2;
                if (REC_I(rec, 0x28) == 0) {
                    if (REC_I(rec, 0x1c) == -2) {
                        if (param_3 == (int *)0) {
                            piVar9 = FUN_1002f010(*(int *)(DAT_100eef40[*piVar4] + 0x40), 10);
                            REC_I(rec, 0x28) = (int)piVar9;
                        }
                        else {
                            piVar9 = FUN_1002f19a(*(int *)(DAT_100eef40[*piVar4] + 0x40), param_3);
                            REC_I(rec, 0x28) = (int)piVar9;
                        }
                    }
                    else {
                        local_20 = *(int *)(DAT_101155c0 + 0x28 +
                                            (int)((unsigned int)REC_I(rec, 0x1c) * 0x48u));
                        if (local_20 == 0) {
                            local_20 = FUN_1001d5cb(*(int *)(DAT_101155c0 + 0x24 +
                                                    (int)((unsigned int)REC_I(rec, 0x1c) * 0x48u)));
                        }
                        if (param_3 == (int *)0) {
                            local_24 = FUN_1002f010(local_20, 10);
                        }
                        else {
                            local_24 = FUN_1002f19a(local_20, param_3);
                        }
                        if (local_24 != (int *)0) {
                            REC_I(rec, 0x28) = (int)local_24;
                            bVar2 = 1;
                        }
                    }
                }
                FUN_1002f272(REC_I(rec, 0x28), REC_I(rec, 0x24));
                FUN_1001d5e1(REC_I(rec, 0x24), REC_I(rec, 0x28));
                local_8 = *(unsigned short *)(rec + 0x3c + iStride2) & 0xf0;
                FUN_1001ca37(REC_I(rec, 0x24), (unsigned short)((unsigned short)local_8 | 0x100));
                FUN_1001ca62(REC_I(rec, 0x24), (short)*piVar4);
                FUN_1001ca4c(REC_I(rec, 0x24), (short)REC_I(rec, 0x20));
                FUN_1003da99(REC_P(rec, 0x24));
                if (local_8 == 0x70) {
                    FUN_1003dfde(REC_P(rec, 0x24));
                    FUN_1003df3a(REC_P(rec, 0x24));
                }
                else {
                    FUN_1003e051(REC_P(rec, 0x24));
                    FUN_100141c0(REC_P(rec, 0x24), 6);
                }
                if ((*(unsigned short *)(DAT_100eef40[*piVar4] + 0x14) & 0x4000) != 0) {
                    FUN_1002f727(*(int *)(DAT_100eef40[*piVar4] + 0x40));
                    FUN_1002f7f7(*(int *)(DAT_100eef40[*piVar4] + 0x40));
                    *(unsigned short *)(DAT_100eef40[*piVar4] + 0x14) =
                        *(unsigned short *)(DAT_100eef40[*piVar4] + 0x14) | 0x800;
                }
                if (local_8 == 0xa0) {
                    FUN_1002f90b(REC_I(rec, 0x28), 0x1a0);
                }
                if (bVar2) {
                    FUN_1002f37a(REC_I(rec, 0x28), REC_I(rec, 0x30),
                                 REC_I(rec, 0x34), REC_I(rec, 0x38));
                }
                FUN_1002fbc0((int *)REC_I(rec, 0x28));
                uVar5 = 1;
            }
        }
    }
    else {
        uVar5 = 1;
    }
    return uVar5;
}
