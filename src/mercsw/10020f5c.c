/* SPDX-License-Identifier: MIT */
/* mercsw 10020f5c */
extern int DAT_100adf38;
extern int DAT_100b0870;
extern unsigned int DAT_100b0874;
extern int DAT_100aa1ac;
extern int DAT_100b38fc;
extern int DAT_100b0a00;
extern int DAT_100a40a8;
extern int DAT_100b3904;
extern int DAT_100ab2f8;
extern int DAT_100ab320;
extern int DAT_100ba974;
extern int DAT_100ab304;
extern int _DAT_100ab32c;
extern char *DAT_100adf34;
extern int DAT_100ab328;
extern int DAT_100ab324;
extern int DAT_100ab094;
extern char *PTR_DAT_100aaf68;
extern int DAT_100eef40[];
extern char s_MASC_malfunction__100ab338[];

void FUN_10061d8b(int *);
void FUN_100635a2(void);
void FUN_10005624(int, int *, int, int, int);
void FUN_10026f0b(int *);
void FUN_100082c4(int, int);
void FUN_10083b74(int, int, int);
void FUN_1008276d(int, int, int);
void FUN_10083c70(void);
void FUN_10083c0c(int);
void FUN_10083bae(int);
void FUN_10083bdd(int);
void FUN_100838c2(void);
void FUN_100832d4(int);
void FUN_100639ad(int *);
void FUN_10004190(int *);
int FixedMul16(int, int);
void FUN_10070800(int *);
void FUN_1006b47b(int *);
int FUN_10006b9a(int);
int FixedMul29(int, int);
int FUN_10051f43(int);
int _sprintf(char *, const char *, ...);
void FUN_1005be24(char *, int, int, int);
void FUN_10003742(int, int, int, int, int);
int FUN_1002977f(int, int, int);
int FUN_10011e60(int, int, int);
void FUN_1007078e(int);
void FUN_10061cf0(int);
void FUN_1000465a(int *);
void FUN_100069d3(int *, int);
int FUN_1004d5e3(int);
void FUN_100037f0(int, int, int, int, int);
void FUN_1006b2cc(int *);
void FUN_1004fed5(void);

/* *local_24 is a pointer to the entity; offset 0x4c of it is a sub-struct */
#define E_I(off)  (*(int *)((char *)(*local_24) + (off)))
#define E_U(off)  (*(unsigned int *)((char *)(*local_24) + (off)))
#define E_US(off) (*(unsigned short *)((char *)(*local_24) + (off)))
#define E_UC(off) (*(unsigned char *)((char *)(*local_24) + (off)))
#define S_P       ((char *)(*(int *)((char *)(*local_24) + 0x4c)))
#define S_C(off)  (*(char *)(S_P + (off)))
#define S_I(off)  (*(int *)(S_P + (off)))

void __cdecl FUN_10020f5c(int *param_1)
{
    int iVar1;
    char local_6c[40];
    int local_44;
    int local_40;
    int local_3c;
    int local_38;
    unsigned int local_34;
    int local_30;
    unsigned int local_2c;
    int local_28;
    int *local_24;
    unsigned int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    unsigned int local_c;
    int local_8;

    local_14 = 0;
    local_1c = 0;
    local_30 = 0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    local_24 = param_1;
    if ((*(unsigned short *)(param_1 + 0x110) & 0x200) == 0) {
        local_c = (unsigned int)(E_I(4) == DAT_100adf38);
        local_34 = (unsigned int)((E_US(0x14) & 1) == 0);
        if ((((param_1[0xf5] == 2) &&
              (FUN_10061d8b(param_1), S_C(0x2b) != '\0')) &&
             (local_c != 0)) && (S_C(0x27) != '\0')) {
            FUN_100635a2();
        }
        if (((-1 < DAT_100b0870) && (-1 < (int)DAT_100b0874)) &&
            (E_I(4) == DAT_100adf38)) {
            FUN_10005624(-1, local_24, (int)DAT_100b0874, DAT_100b0870, 0);
            DAT_100b0870 = -1;
        }
        FUN_10026f0b((int *)*local_24);
        if (((DAT_100aa1ac == 0) || (local_c != 0)) && (local_24[0xf5] == 2)) {
            if (S_C(0x44) != '\0') {
                local_24[0xef] = (int)((unsigned int)DAT_100b38fc + 0x16a);
                local_24[0xf5] = 7;
                if (local_c != 0) {
                    FUN_100082c4(4, -1);
                }
                S_C(0x44) = 0;
            }
            if (S_C(0x31) != '\0') {
                FUN_10083b74(*local_24, 1, 0);
                S_C(0x31) = 0;
            }
            if (S_C(0x32) != '\0') {
                FUN_10083b74(*local_24, -1, 0);
                S_C(0x32) = 0;
            }
            if (S_C(0x33) != '\0') {
                FUN_10083b74(*local_24, 0, 0);
                S_C(0x33) = 0;
            }
            if (S_C(0x34) != '\0') {
                FUN_1008276d(*local_24, 1, 8);
                S_C(0x34) = 0;
            }
            if (S_C(0x35) != '\0') {
                FUN_1008276d(*local_24, -1, 8);
                S_C(0x35) = 0;
            }
            if (S_C(0x36) != '\0') {
                FUN_1008276d(*local_24, 0, 8);
                S_C(0x35) = 0;
            }
            if (S_C(0x39) != '\0') {
                FUN_10083c70();
                S_C(0x39) = 0;
            }
            if (S_C(0x38) != '\0') {
                FUN_10083c0c(1);
                S_C(0x38) = 0;
            }
            if (S_C(0x3a) != '\0') {
                S_C(0x3a) = 0;
            }
            if (S_C(0x3c) != '\0') {
                FUN_1008276d(*local_24, 1, 0x10008);
                S_C(0x3c) = 0;
            }
            if (S_C(0x3d) != '\0') {
                FUN_10083bae(1);
                S_C(0x3d) = 0;
            }
            if (S_C(0x3e) != '\0') {
                FUN_10083bae(-1);
                S_C(0x3e) = 0;
            }
            if (S_C(0x3f) != '\0') {
                FUN_10083bae(0);
                S_C(0x3e) = 0;
            }
            if (S_C(0x40) != '\0') {
                FUN_10083bdd(1);
                S_C(0x40) = 0;
            }
            if (S_C(0x41) != '\0') {
                FUN_10083bdd(-1);
                S_C(0x41) = 0;
            }
            if (S_C(0x42) != '\0') {
                FUN_10083bdd(0);
                S_C(0x41) = 0;
            }
            if (S_C(0x37) != '\0') {
                FUN_100838c2();
                S_C(0x37) = 0;
            }
            if ((E_UC(0xdd) & 0x10) == 0) {
                FUN_100832d4(*local_24);
            }
            FUN_100639ad(local_24);
            if (((S_I(0x10) != 0) || (DAT_100b0a00 != 0)) &&
                (local_24[0xfc] != 0)) {
                S_C(0x43) = 1;
            }
            if (S_C(0x43) != '\0') {
                if (local_24[0xfc] == 0) {
                    local_24[0xfc] = 1;
                    if (E_I(4) == DAT_100adf38) {
                        FUN_100082c4(0x1d, 1);
                    }
                }
                else {
                    local_24[0xfc] = 0;
                    if (E_I(4) == DAT_100adf38) {
                        FUN_100082c4(0x1d, 2);
                    }
                }
            }
            S_C(0x43) = 0;
            if ((E_I(0x10) == 0) && (local_24[0xfc] == 0)) {
                S_I(0xc) = S_I(0x10);
            }
            if (E_I(0x10) == 0) {
                FUN_10004190(local_24);
            }
            if (S_C(0x46) == '\0') {
                if (S_C(0x47) == '\0') {
                    iVar1 = FixedMul16(S_I(8), local_24[0xf9]);
                    local_24[0x12] = (int)((unsigned int)iVar1 + 0x400);
                }
                else {
                    S_C(0x30) = 1;
                    local_24[0x12] = 0x800;
                    local_24[0x13] = 0x800;
                    S_C(0x47) = 0;
                }
            }
            else {
                S_C(0x30) = 0;
                local_24[0x12] = 0x800;
                local_24[0x13] = 0x800;
                S_C(0x46) = 0;
            }
            if (((E_I(0x10) != 2) && (local_24[0x12] == 0x400)) &&
                ((S_I(0xc) != 0 || (DAT_100b0a00 != 0)))) {
                local_24[0x12] = 0x480;
            }
        }
        FUN_10070800((int *)*local_24);
        if ((local_24[0xfd] == -2) && (S_C(0x45) != '\0')) {
            local_24[0xfd] = 0x712;
            local_24[0xfe] = 3;
            local_24[0x108] = (int)((unsigned int)DAT_100a40a8 * 3U);
        }
        if (-1 < local_24[0xfd]) {
            if ((S_C(0x1d) == '\0') || (local_24[0xf5] != 2)) {
                if (local_24[0xfd] < 0x712) {
                    local_24[0xfd] = (int)((unsigned int)local_24[0xfd] +
                        (unsigned int)((int)((unsigned int)DAT_100b3904 +
                                             ((unsigned int)(DAT_100b3904 >> 0x1f) & 3U)) >> 2));
                }
                else {
                    local_24[0xfd] = 0x712;
                }
            }
            else {
                local_14 = 1;
                if ((DAT_100ab2f8 == 0) || (local_c == 0)) {
                    local_24[0xfd] = (int)((unsigned int)local_24[0xfd] - (unsigned int)DAT_100b3904);
                }
                if (local_24[0xfd] < 1) {
                    local_24[0xfd] = 0;
                }
            }
        }
        if (local_14 == 0) {
            if (((E_UC(0x80) & 4) == 0) && (local_34 != 0)) {
                local_1c = local_24[0xb] / 10000;
                if ((local_1c == 0) && ((local_c == 0 || (local_24[0xf9] < 1)))) {
                    local_24[0xe] = 0;
                }
                else {
                    if (0x50 < local_1c) {
                        local_1c = 0x50;
                    }
                    if ((*(int *)*local_24 == 8) || (*(int *)*local_24 == 2)) {
                        iVar1 = S_I(0xc);
                        local_18 = (int)((unsigned int)((int)((unsigned int)iVar1 +
                                          ((unsigned int)(iVar1 >> 0x1f) & 0x3ffU)) >> 10) * 0xb4U);
                    }
                    else {
                        iVar1 = S_I(0xc);
                        local_18 = (int)((unsigned int)((int)((unsigned int)iVar1 +
                                          ((unsigned int)(iVar1 >> 0x1f) & 0x3ffU)) >> 10) * 0x5aU);
                    }
                    local_10 = FUN_10006b9a((int)((unsigned int)local_1c << 0x10));
                    local_30 = FixedMul29(local_18, local_10);
                    local_24[0xe] = local_30;
                }
            }
            else if (local_24[0xfc] == 0) {
                local_24[0xe] = 0;
            }
        }
        else {
            local_18 = 0;
            if (0 < local_24[0xfd]) {
                FUN_1006b47b(local_24);
                local_24[0xf1] = (int)((unsigned int)local_24[0xf1] +
                    (unsigned int)local_24[0xfe] * (unsigned int)DAT_100b3904 * 0x180U);
                E_U(0x80) = E_U(0x80) & 0xfffffffb;
                E_U(0x80) = E_U(0x80) & 0xfffffffe;
                iVar1 = S_I(0xc);
                local_18 = (int)((unsigned int)((int)((unsigned int)iVar1 +
                                  ((unsigned int)(iVar1 >> 0x1f) & 0x3ffU)) >> 10) * 0x5aU);
            }
            local_24[0xe] = (int)((unsigned int)local_18 * 2U);
        }
        if ((local_c != 0) && (DAT_100b0a00 != 0)) {
            local_40 = E_I(0x60);
            local_3c = local_40 >> 0x10;
            if (local_3c < 0xb5) {
                if (local_3c < -0xb4) {
                    local_40 = (int)((unsigned int)local_40 + 0x1680000U);
                    local_3c = local_40 >> 0x10;
                }
            }
            else {
                local_40 = (int)(0U - (0x1680000U - (unsigned int)local_40));
                local_3c = local_40 >> 0x10;
            }
            local_38 = DAT_100ab320 >> 0x10;
            if (local_38 < 0xb5) {
                if (local_38 < -0xb4) {
                    DAT_100ab320 = (int)((unsigned int)DAT_100ab320 + 0x1680000U);
                    local_38 = DAT_100ab320 >> 0x10;
                }
            }
            else {
                DAT_100ab320 = (int)(0U - (0x1680000U - (unsigned int)DAT_100ab320));
                local_38 = DAT_100ab320 >> 0x10;
            }
            if ((local_3c < 0x5b) || (-0x5b < local_38)) {
                if ((0x5a < local_38) && (local_3c < -0x5a)) {
                    local_40 = (int)((unsigned int)local_40 + 0x1680000U);
                }
            }
            else {
                local_40 = (int)(0U - (0x1680000U - (unsigned int)local_40));
            }
            local_44 = (int)((unsigned int)local_40 - (unsigned int)DAT_100ab320);
            if ((local_24[3] < -0x3ffff) || (0x3ffff < local_24[3])) {
                if (local_24[3] < 1) {
                    local_24[0xe] = -0x370000;
                    if (local_44 != 0) {
                        local_24[2] = (int)((unsigned int)local_24[3] - (unsigned int)local_44);
                        local_24[3] = local_24[2];
                    }
                }
                else {
                    local_24[0xe] = 0x370000;
                    if (local_44 != 0) {
                        local_24[2] = (int)((unsigned int)local_24[3] - (unsigned int)local_44);
                        local_24[3] = local_24[2];
                    }
                }
            }
            else {
                local_24[0xe] = 0;
                local_24[0xf] = local_24[0xe];
                local_24[2] = 0;
                local_24[3] = local_24[2];
                DAT_100ba974 = 1;
                S_I(4) = 0;
                DAT_100b0a00 = 0;
            }
        }
        if (local_c != 0) {
            DAT_100ab320 = E_I(0x60);
        }
        if (local_34 != 0) {
            local_8 = (int)((unsigned int)local_24[0x13] - 0x400U);
            if (local_8 < 0x20) {
                local_8 = 0;
            }
            local_24[10] = (int)((unsigned int)local_24[0xee] * (unsigned int)local_8);
            if ((local_24[10] != 0) && (E_I(0x84) == 2)) {
                local_24[10] = local_24[10] >> 1;
                local_24[10] = (int)(0U - (unsigned int)local_24[10]);
            }
            if ((local_14 == 0) && ((E_UC(0x80) & 2) != 0)) {
                if ((DAT_100ab304 != 0) &&
                    ((local_c != 0 && (0xb5 < (int)((unsigned int)DAT_100b38fc - (unsigned int)_DAT_100ab32c))))) {
                    _DAT_100ab32c = DAT_100b38fc;
                    iVar1 = FUN_10051f43(0x3c);
                    if ((iVar1 == 0xc) && ((*(char *)(DAT_100adf34 + 1) == '\0' && (local_24[0xf5] == 2)))) {
                        _sprintf(local_6c, s_MASC_malfunction__100ab338);
                        FUN_1005be24(local_6c, 1, 0x16a, 0x32);
                        FUN_10003742(0xda, 100, 0x40, 5, 0x50);
                        local_24[0xf3] = (int)((unsigned int)local_24[0xf3] +
                                               (unsigned int)(local_24[0xf3] >> 2));
                        DAT_100ab304 = 0;
                    }
                }
                if (local_24[0xb] < local_24[10]) {
                    local_24[0xc] = 0x5a;
                }
                else {
                    local_24[0xc] = 0x5a;
                }
                if (((DAT_100ab304 != 0) || (DAT_100ab328 != 0)) &&
                    (E_I(4) == DAT_100adf38)) {
                    local_24[10] = (int)((unsigned int)local_24[10] +
                                         (unsigned int)(local_24[10] >> 1));
                }
            }
            if (((local_c != 0) && (DAT_100ab328 != 0)) && ((E_UC(0xdd) & 0x10) == 0)) {
                iVar1 = FUN_1002977f(*local_24, E_I(0xd8), 0);
                **(int **)((char *)(*local_24) + 0x4c) = (int)((unsigned int)iVar1 * 0xfffff100U);
            }
            if ((DAT_100b0a00 == 0) && ((local_c != 0 || (DAT_100aa1ac == 0)))) {
                local_24[2] = S_I(4);
            }
            if (local_24[0x105] < local_24[2]) {
                local_24[2] = local_24[0x105];
                S_I(4) = local_24[0x105];
                S_C(0x1b) = 1;
            }
            else if ((int)(0U - (unsigned int)local_24[2]) != local_24[0x105] &&
                     local_24[2] <= (int)(0U - (unsigned int)local_24[0x105])) {
                local_24[2] = (int)(0U - (unsigned int)local_24[0x105]);
                S_I(4) = (int)(0U - (unsigned int)local_24[0x105]);
                S_C(0x1b) = 1;
            }
            if ((local_c != 0) || (DAT_100aa1ac == 0)) {
                local_24[6] = **(int **)((char *)(*local_24) + 0x4c);
            }
            iVar1 = FUN_10011e60((int)((unsigned int)local_24[0x13] - 0x400U), local_24[0xf4], 0x2800);
            local_24[0xf1] = (int)((unsigned int)local_24[0xf1] + (unsigned int)iVar1);
        }
        if (local_24[0xf5] != 2) {
            FUN_1007078e(*local_24);
            local_24[0x12] = 0x400;
            local_24[10] = 0;
            local_24[2] = 0;
            local_24[0xe] = 0;
            local_24[6] = 0;
            S_I(8) = 0;
            S_C(0x24) = 1;
            S_C(0x1d) = 0;
            S_C(0x1e) = 0;
            S_C(0x1f) = 0;
            S_C(0x20) = 0;
            S_C(0x21) = 0;
            S_C(0x25) = 0;
            S_C(0x26) = 0;
            S_C(0x2e) = 0;
            S_C(0x2f) = 0;
            S_C(0x30) = 0;
            S_C(0x31) = 0;
            S_C(0x43) = 0;
            S_C(0x46) = 0;
            S_C(0x47) = 0;
            if (E_I(4) == DAT_100adf38) {
                FUN_10061cf0((int)local_24);
            }
        }
        FUN_1000465a(local_24);
        switch (local_24[0xf5]) {
        case 0:
            iVar1 = FUN_10051f43(0x16a);
            local_24[0xef] = (int)((unsigned int)DAT_100b38fc + (unsigned int)iVar1 + 0x43eU);
            local_24[0xf5] = 1;
            E_US(0x14) = E_US(0x14) & 0xdfff;
            local_20 = (unsigned int)E_I(0x50) - (unsigned int)*(int *)PTR_DAT_100aaf68;
            local_28 = (int)((unsigned int)E_I(0x54) - (unsigned int)*(int *)(PTR_DAT_100aaf68 + 4));
            local_2c = (unsigned int)E_I(0x58) - (unsigned int)*(int *)(PTR_DAT_100aaf68 + 8);
            iVar1 = FUN_1004d5e3(E_I(4));
            if (iVar1 == 1) {
                if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
                    FUN_100037f0((int)local_20, local_28, (int)local_2c, 0x11b, DAT_100ab094);
                }
            }
            else {
                FUN_100037f0((int)local_20, local_28, (int)local_2c, 0x10c, (int)(unsigned int)(DAT_100ab094 == 0));
                if (local_c != 0) {
                    FUN_100082c4(0x26, -1);
                }
            }
            break;
        case 1:
            if (local_24[0xef] < DAT_100b38fc) {
                local_24[0xf5] = 2;
                E_US(0x14) = E_US(0x14) | 0x2000;
                if (DAT_100ab324 == 0) {
                    DAT_100ab324 = 1;
                }
            }
            break;
        case 2:
            if ((E_US(0x14) & 0x10) != 0) {
                E_US(0x14) = E_US(0x14) & 0xffef;
                E_US(0x14) = E_US(0x14) | 0x2000;
                iVar1 = FUN_1004d5e3(E_I(4));
                if ((iVar1 == 1) && ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0)) {
                    FUN_100082c4(0x1a, -1);
                }
            }
            break;
        case 3:
            E_US(0x14) = E_US(0x14) | 0x10;
            break;
        case 4:
            E_US(0x14) = E_US(0x14) & 0xdfff;
            if (local_24[0xef] == 0) {
                FUN_1006b2cc(local_24);
                local_24[0xef] = (int)((unsigned int)DAT_100b38fc + 0x712U);
                FUN_1004fed5();
            }
            if (DAT_100b38fc < local_24[0xef]) {
                FUN_1006b2cc(local_24);
            }
            else {
                *(unsigned short *)(local_24 + 0x110) = *(unsigned short *)(local_24 + 0x110) | 0x200;
            }
            break;
        case 7:
            if (local_24[0xef] < DAT_100b38fc) {
                FUN_100069d3(local_24, 0);
            }
        }
        if ((E_I(4) == DAT_100adf38) &&
            ((((int)((unsigned int)local_24[3] + 0x20000U) < local_24[2] ||
               (local_24[2] < (int)((unsigned int)local_24[3] - 0x20000U))) &&
              (DAT_100ab094 != 0)))) {
            FUN_100037f0((int)((unsigned int)E_I(0x50) - (unsigned int)*(int *)PTR_DAT_100aaf68),
                         (int)((unsigned int)E_I(0x54) - (unsigned int)*(int *)(PTR_DAT_100aaf68 + 4)),
                         (int)((unsigned int)E_I(0x58) - (unsigned int)*(int *)(PTR_DAT_100aaf68 + 8)),
                         0x155, DAT_100ab094);
        }
        if (local_c == 0) {
            E_US(0x14) = E_US(0x14) & 0xfffe;
        }
    }
    return;
}
