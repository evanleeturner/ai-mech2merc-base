/* SPDX-License-Identifier: MIT */
/* mercsw 1001f531 */
/* Prototypes */
void __cdecl FUN_10067af1(int *a);
int  __cdecl FixedMul16(int a, int b);
int  __cdecl ApproxLength3_Likely(int a, int b, int c);
int  __cdecl FUN_10011e60(int a, int b, int c);
int  __cdecl FUN_10002570(int a, int b);
void __cdecl FUN_1001b520(int *a, int *b, int c, int d);
int  __cdecl FUN_1007ee80(int *a, int *b, int *c, int d, int e, int f, int *g, int *h, int *i);
void __cdecl FUN_10080048(int *a);
int  __cdecl FUN_100142b4(int a, int b, int c);
void __cdecl FUN_1001355e(int a, int b, int c, int d);
void __cdecl FUN_10003742(unsigned int a, int b, int c, int d, int e);
void __cdecl FUN_1006b6af(int a, int b, int c);
void __cdecl FUN_1007fc1d(int *a, int *b);
void __cdecl FUN_1007fecd(int *a, int b);
void __cdecl FUN_1006b60b(int *a, int b);
void __cdecl FUN_100065c4(int a, int *b, int c, int d);
void __cdecl FUN_10027cd0(int a, int *b);
void __cdecl FUN_1002f37a(int a, int b, int c, int d);
void __cdecl FUN_1002f668(int a, int b, int c, int d, int e);
int  __cdecl FUN_1002f28d(int a);
int  __cdecl FUN_1001cac9(int a, int *b, int *c, int *d);
void __cdecl FUN_1002f322(int a, int *b, int *c, int *d);
void __cdecl FUN_1002f6a8(void *a, int b, int c, int d, int e);
void __cdecl FUN_10089cc9(int *a, int b, int c, int d, int e, int f, int g);
void __cdecl FUN_10089118(int *a, int *b, int *c, int *d);
void __cdecl FUN_1002f3a7(int a, int b, int c, int d);
void __cdecl FUN_100037f0(unsigned int a, int b, unsigned int c, int d, int e);
void __cdecl FUN_10063e41(int a);
void __cdecl FUN_1002f2d6(void *a, int b, int *c, int *d, int *e);
void __cdecl FUN_10063fbd(int a, int *b);
int  __cdecl FUN_10063f34(int a);
void __cdecl FUN_1002650e(int *a, int b);
int  __cdecl FUN_10022b50(int a, int b);
int  __cdecl FUN_10006bbb(unsigned int a);
void __cdecl FUN_1002fbc0(int *a);
int  __cdecl FUN_10006b20(int a);
int  __cdecl FUN_10006b9a(int a);

/* Globals */
extern int DAT_100adf38;
extern int DAT_100a40a8;
extern int DAT_100b3904;
extern int DAT_100ab2f0;
extern int DAT_100c6b10;
extern int DAT_100aa554;
extern int DAT_100aa550;
extern int DAT_100aa54c;
extern int DAT_100aa1ac;
extern unsigned int DAT_100aa55c;
extern int DAT_100aa558;
extern int DAT_100aa560;
extern int DAT_100ab094;
extern int DAT_100ab314;
extern int _DAT_100ab310;
extern int DAT_100adf34;
extern int DAT_100ab2f4;
extern char *PTR_DAT_100aaf68;

#define ADD(a, b) ((int)((unsigned int)(a) + (unsigned int)(b)))
#define SUB(a, b) ((int)((unsigned int)(a) - (unsigned int)(b)))
#define MUL(a, b) ((int)((unsigned int)(a) * (unsigned int)(b)))
#define NEG(a)    ((int)(0u - (unsigned int)(a)))

#define OBJ(off)  (*(int *)(*local_58 + (off)))
#define SUBO(off) (*(int *)(OBJ(0x4c) + (off)))
#define SUBC(off) (*(char *)(OBJ(0x4c) + (off)))

void __cdecl FUN_1001f531(int *param_1)
{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int local_1d8;
  int local_1d4;
  int local_1d0[6];
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  unsigned int local_184;
  unsigned int local_180[14];
  int local_148;
  int local_144;
  int local_140;
  unsigned int local_13c;
  int local_138;
  unsigned int local_134;
  int local_130;
  int local_12c[12];
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  unsigned int local_c4;
  int local_c0;
  unsigned int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  unsigned int local_98;
  unsigned int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  unsigned int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  local_38 = 0;
  local_20 = 0;
  if (param_1 != (int *)0x0) {
    local_58 = param_1;
    if (((param_1[0xf5] != 4 || (*(int *)(*param_1 + 0x78) == 0)) &&
        ((*(unsigned short *)(param_1 + 0x110) & 0x100) == 0))) {
      param_1[0xf1] = 0;
      local_1c = (unsigned int)(*(int *)(*param_1 + 4) == DAT_100adf38);
      local_74 = 0;
      if ((*(unsigned short *)(*param_1 + 0x14) & 1) == 0) {
        FUN_10067af1(param_1 + 1);
        FUN_10067af1(local_58 + 5);
        FUN_10067af1(local_58 + 0xd);
        FUN_10067af1(local_58 + 0x11);
        FUN_10067af1(local_58 + 9);
        local_7c = local_58[0x10a];
        local_88 = local_58[0x10b];
        local_10 = local_58[0x10c];
        local_84 = 0;
        local_c = NEG(DAT_100a40a8);
        local_30 = 0;
        local_2c = 0;
        local_3c = 0;
        if ((OBJ(0x78) == 0) ||
            ((SUBC(0x1d) != '\0') && (0 < local_58[0xfd]))) {
          local_28 = ApproxLength3_Likely(local_7c, 0, local_10);
          local_4c = FUN_10011e60(0x1400, local_58[0xee], 2);
          if ((local_28 < 1) || ((local_4c < 1) || (local_58[0x108] < 1))) {
            local_2c = 0;
            local_3c = 0;
          }
          else {
            local_a0 = FixedMul16(local_4c, local_4c);
            iVar1 = local_58[0x108];
            iVar2 = FUN_10002570(local_58[0x108], local_4c);
            local_94 = (unsigned int)SUB(iVar1, iVar2 / 3);
            {
              int tmp = MUL(local_4c, 3);
              local_9c = SUB(local_a0,
                             ((int)((unsigned int)tmp + ((unsigned int)(tmp >> 0x1f) & 3U))) >> 2);
            }
            local_94 = (unsigned int)FUN_10002570((int)local_94, local_9c);
            iVar1 = local_58[0x108];
            iVar2 = FixedMul16((int)local_94, local_a0);
            local_98 = (unsigned int)SUB(iVar1, iVar2);
            local_98 = (unsigned int)FUN_10002570((int)local_98, local_4c);
            iVar1 = local_28;
            iVar2 = FixedMul16((int)local_94, local_28);
            local_50 = FixedMul16((int)(local_98 + (unsigned int)iVar2), iVar1);
            local_50 = NEG(local_50);
            local_2c = FUN_10011e60(local_50, local_7c, local_28);
            local_3c = FUN_10011e60(local_50, local_10, local_28);
          }
        }
        else {
          local_24 = local_58[0xb];
          if ((local_24 < 0x20) && (-0x20 < local_24)) {
            local_24 = 0;
          }
          local_40 = FixedMul16(local_24, OBJ(0xbc));
          local_68 = FixedMul16(local_24, OBJ(0xb8));
          if (DAT_100b3904 < 0x2d) {
            local_84 = SUB(local_40, local_58[0x10a]) / 0x2d;
            local_30 = SUB(local_68, local_58[0x10c]) / 0x2d;
          }
          else if (DAT_100b3904 < 1) {
            local_84 = 0;
            local_30 = 0;
          }
          else {
            local_84 = SUB(local_40, local_58[0x10a]) / DAT_100b3904;
            local_30 = SUB(local_68, local_58[0x10c]) / DAT_100b3904;
          }
        }
        local_50 = 0;
        local_34 = 0;
        local_18 = 0;
        local_90 = 0;
        if (((SUBC(0x1d) == '\0') || (local_58[0xfd] < 1)) ||
            (local_58[0xf5] != 2)) {
          if ((local_88 == 0) && (OBJ(0x78) != 0)) {
            local_c = 0;
          }
        }
        else {
          local_7c = local_58[0x10a];
          local_10 = local_58[0x10c];
          if (0 < local_88) {
            local_50 = FixedMul16(MUL(SUB(DAT_100a40a8, local_58[0x108]), 0xe24), local_88);
            local_50 = local_50 / DAT_100ab2f0;
          }
          local_c = ADD(ADD(local_c, local_58[0x108]), local_50);
          if (SUBO(0xc) == 0) {
            if (SUBC(0x1e) == '\0') {
              if (SUBC(0x1f) == '\0') {
                if (SUBC(0x20) == '\0') {
                  if (SUBC(0x21) != '\0') {
                    if (local_88 < 1) {
                      local_c = 0;
                    }
                    else {
                      local_c = NEG(DAT_100a40a8);
                    }
                    iVar1 = FixedMul16(OBJ(0xbc), local_58[0x108]);
                    local_84 = ADD(local_84, SUB(local_2c, iVar1));
                    iVar1 = FixedMul16(OBJ(0xb8), local_58[0x108]);
                    local_30 = ADD(local_30, SUB(local_3c, iVar1));
                  }
                }
                else {
                  if (local_88 < 1) {
                    local_c = 0;
                  }
                  else {
                    local_c = NEG(DAT_100a40a8);
                  }
                  iVar1 = FixedMul16(OBJ(0xbc), local_58[0x108]);
                  local_84 = ADD(ADD(local_84, local_2c), iVar1);
                  iVar1 = FixedMul16(OBJ(0xb8), local_58[0x108]);
                  local_30 = ADD(ADD(local_30, local_3c), iVar1);
                }
              }
              else {
                if (local_88 < 1) {
                  local_c = 0;
                }
                else {
                  local_c = NEG(DAT_100a40a8);
                }
                iVar1 = FixedMul16(OBJ(0xb8), local_58[0x108]);
                local_84 = ADD(ADD(local_84, local_2c), iVar1);
                iVar1 = FixedMul16(OBJ(0xbc), local_58[0x108]);
                local_30 = ADD(local_30, SUB(local_3c, iVar1));
              }
            }
            else {
              if (local_88 < 1) {
                local_c = 0;
              }
              else {
                local_c = NEG(DAT_100a40a8);
              }
              iVar1 = FixedMul16(OBJ(0xb8), local_58[0x108]);
              local_84 = ADD(local_84, SUB(local_2c, iVar1));
              iVar1 = FixedMul16(OBJ(0xbc), local_58[0x108]);
              local_30 = ADD(ADD(local_30, local_3c), iVar1);
            }
          }
          else if (local_88 < 1) {
            local_c = 0;
          }
          else {
            local_c = NEG(DAT_100a40a8);
          }
        }
        FUN_1001b520(&local_90, &local_7c, local_84, DAT_100b3904);
        FUN_1001b520(&local_18, &local_88, local_c, DAT_100b3904);
        FUN_1001b520(&local_34, &local_10, local_30, DAT_100b3904);
        if ((local_7c < 0x1000) && (-0x1000 < local_7c)) {
          local_7c = 0;
        }
        if ((local_10 < 0x1000) && (-0x1000 < local_10)) {
          local_10 = 0;
        }
        local_58[0x10d] = local_7c;
        local_58[0x10e] = local_88;
        local_58[0x10f] = local_10;
        local_80 = OBJ(0x50);
        local_8c = OBJ(0x54);
        local_14 = OBJ(0x58);
        local_20 = 0;
        OBJ(0x7c) = -1;
        iVar1 = FUN_1007ee80(local_58, &local_38, &local_20, local_90, local_18, local_34,
                             &local_80, &local_8c, &local_14);
        if (iVar1 == 0) {
          if (local_1c != 0) {
            DAT_100c6b10 = 0;
          }
          DAT_100aa554 = 0;
          DAT_100aa550 = 0;
          DAT_100aa54c = 0;
          iVar1 = FUN_100142b4(local_80, local_8c, local_14);
          OBJ(0x74) = iVar1;
          local_8 = SUB(SUB(local_8c, local_58[0x100]), OBJ(0x74));
        }
        else {
          local_90 = SUB(local_80, OBJ(0x50));
          local_18 = SUB(local_8c, OBJ(0x54));
          local_34 = SUB(local_14, OBJ(0x58));
          local_7c = local_58[0x10a];
          local_88 = local_58[0x10b];
          local_10 = local_58[0x10c];
          local_b4 = local_58[0xf6];
          iVar1 = FUN_1007ee80(local_58, &local_b0, &local_20, local_90, local_18, local_34,
                               &local_a4, &local_a8, &local_ac);
          if (iVar1 != 0) {
            if (local_b0 != local_38) {
              local_80 = OBJ(0x50);
              local_8c = OBJ(0x54);
              local_14 = OBJ(0x58);
            }
            local_58[0x10a] = MUL(local_7c, 2);
            local_7c = local_58[0x10a];
            local_58[0x10b] = MUL(local_88, 2);
            local_88 = local_58[0x10b];
            local_58[0x10c] = MUL(local_10, 2);
            local_10 = local_58[0x10c];
          }
          local_58[0xf6] = local_b4;
          if (local_58[0xf5] == 4) {
            FUN_10080048(local_58);
            OBJ(0x78) = 1;
            return;
          }
          DAT_100aa554 = 0;
          DAT_100aa550 = 0;
          DAT_100aa54c = 0;
          iVar1 = FUN_100142b4(local_80, local_8c, local_14);
          OBJ(0x74) = iVar1;
          local_8 = SUB(SUB(local_8c, local_58[0x100]), OBJ(0x74));
          if (((DAT_100aa1ac == 0) || ((int)DAT_100aa55c < 0xddb5)) || (local_20 == 0)) {
            if ((((int)DAT_100aa55c < 0xb506) || (999 < local_8)) || (local_8 < -9999)) {
              if (((local_1c != 0) && (DAT_100ab094 != 0)) && (DAT_100c6b10 == 0)) {
                DAT_100c6b10 = 1;
                local_78 = ApproxLength3_Likely(local_58[0x10d], local_58[0x10e], local_58[0x10f]);
                if (200000 < local_78) {
                  if (local_20 == 0) {
                    if ((local_38 == 0) ||
                        ((*(unsigned short *)(local_38 + 2) & 0x200) == 0)) {
                      local_c4 = 0xfa;
                    }
                    else {
                      local_c4 = 0xd9;
                    }
                  }
                  else {
                    if (DAT_100aa1ac != 0) {
                      FUN_1001355e(*(int *)(local_20 + 4), DAT_100aa558, (int)DAT_100aa55c,
                                   DAT_100aa560);
                    }
                    local_c4 = 0x105;
                  }
                  local_c0 = local_78;
                  if (1500000 < local_78) {
                    local_c0 = 1500000;
                  }
                  local_c0 = FUN_10011e60(200, local_c0, 1500000);
                  FUN_10003742(local_c4, local_c0, 0x40, 5, 0x32);
                  FUN_1006b6af(DAT_100aa558, (int)DAT_100aa55c, DAT_100aa560);
                }
              }
              if (local_20 == 0) {
                FUN_1007fecd(local_58, local_38);
              }
              else {
                FUN_1007fc1d(local_58, *(int **)(local_20 + 0x20));
              }
            }
            else {
              local_58[0xf6] = 0;
              local_8 = -1;
            }
          }
          else {
            FUN_1001355e(*(int *)(local_20 + 4), DAT_100aa558, (int)DAT_100aa55c, DAT_100aa560);
            if (((local_1c != 0) && (DAT_100ab094 != 0)) && (DAT_100c6b10 == 0)) {
              DAT_100c6b10 = 1;
              local_78 = ApproxLength3_Likely(local_58[0x10d], local_58[0x10e], local_58[0x10f]);
              if (200000 < local_78) {
                local_bc = 0x105;
                local_b8 = local_78;
                if (1500000 < local_78) {
                  local_b8 = 1500000;
                }
                local_b8 = FUN_10011e60(200, local_b8, 1500000);
                FUN_10003742(local_bc, local_b8, 0x40, 5, 0x32);
              }
            }
          }
        }
        OBJ(0x78) = 0;
        if (local_58[0x100] < local_8) {
          OBJ(0x80) = OBJ(0x80) & 0xfffffffe;
          OBJ(0x80) = OBJ(0x80) | 4;
          if ((local_1c != 0) && (DAT_100ab314 != 0)) {
            _DAT_100ab310 = 1;
          }
        }
        else {
          OBJ(0x80) = OBJ(0x80) & 0xfffffffb;
          if (local_8 < 1) {
            OBJ(0x78) = 1;
            if (local_8 < 0) {
              if (local_88 < -0x56276) {
                if (local_58[0xf5] == 4) {
                  FUN_10080048(local_58);
                  return;
                }
                FUN_1006b60b(local_58, local_88);
              }
              if ((local_88 < -0x102762) && (*(char *)(DAT_100adf34 + 3) != '\0')) {
                local_c8 = FUN_10002570(ADD(local_88, 0x102762), -0x204ec4);
                local_c8 = MUL(local_c8, 0x32);
                FUN_100065c4(DAT_100adf38, local_58, local_c8, 8);
                FUN_100065c4(DAT_100adf38, local_58, local_c8, 7);
              }
              local_88 = 0;
              local_58[0x10b] = 0;
              local_8c = ADD(OBJ(0x74), local_58[0x100]);
            }
          }
        }
        if (((DAT_100aa54c != 0) || (DAT_100aa554 != 0)) && (OBJ(0x78) != 0)) {
          iVar1 = FixedMul16(OBJ(0xb8), DAT_100aa554);
          local_cc = FixedMul16(OBJ(0xbc), DAT_100aa54c);
          local_cc = ADD(iVar1, local_cc);
          if ((DAT_100ab2f4 < local_cc) ||
              (NEG(local_cc) != DAT_100ab2f4 && local_cc <= NEG(DAT_100ab2f4))) {
            iVar1 = DAT_100b3904;
            iVar2 = FixedMul16(DAT_100a40a8, local_cc);
            iVar1 = FixedMul16(iVar2, iVar1);
            local_58[0xb] = ADD(local_58[0xb], iVar1);
          }
        }
        if (DAT_100aa1ac == 0) {
          if (OBJ(0) == 2) {
            local_8c = local_58[0x100];
          }
          if (OBJ(0) == 8) {
            FUN_10027cd0(*local_58, &local_8c);
          }
        }
        OBJ(0x50) = local_80;
        OBJ(0x54) = local_8c;
        OBJ(0x58) = local_14;
        OBJ(0x60) = ADD(OBJ(0x60), MUL(local_58[0xf], DAT_100b3904) / 0xb5);
        OBJ(0x60) = OBJ(0x60) % 0x1680000;
        local_58[0x10a] = local_7c;
        local_58[0x10b] = local_88;
        local_58[0x10c] = local_10;
        FUN_1002f37a(OBJ(0x40), OBJ(0x50), OBJ(0x54), OBJ(0x58));
        FUN_1002f668(OBJ(0x40), OBJ(0x5c), OBJ(0x60), OBJ(100), 0);
        uVar3 = (unsigned int)SUB(SUB(OBJ(0x54), OBJ(0x74)), local_58[0x100]);
        uVar4 = (unsigned int)((int)uVar3 >> 0x1f);
        local_8 = (int)((uVar3 ^ uVar4) - uVar4);
        if ((((*(unsigned short *)((int)local_58 + 0x442) & 4) == 0) ||
             ((OBJ(0x78) == 0) && (100 < local_8))) ||
            ((DAT_100aa1ac != 0) && (local_1c == 0))) {
          if (((((*(unsigned short *)((int)local_58 + 0x442) & 4) != 0) && (OBJ(0x78) == 0)) &&
               (local_58[0x111] != 0)) && ((DAT_100aa1ac == 0) || (local_1c != 0))) {
            local_144 = 0;
            local_180[1] = 0;
            local_140 = local_58[0x11a];
            if (-1 < local_58[0x114]) {
              local_58[0x114] = -0x190000;
            }
            if (local_58[0x111] < 1) {
              OBJ(0x5c) = SUB(OBJ(0x5c), local_58[0x111]);
              local_58[0x111] = 0;
            }
            else {
              FUN_1001b520(local_58 + 0x111, local_58 + 0x114, -0x640000, DAT_100b3904);
            }
            local_148 = SUB(local_58[0x111], OBJ(0x5c));
            OBJ(0x5c) = ADD(OBJ(0x5c), local_148);
            FUN_10089cc9((int *)(local_180 + 2), local_58[0x111], 0, 0, 0, 0, 0);
            FUN_10089118((int *)(local_180 + 2), (int *)(local_180 + 1), &local_140, &local_144);
            local_58[0x100] = local_140;
            FUN_1002f6a8((void *)OBJ(0x40), local_148, 0, 0, 0);
            *(unsigned short *)((int)local_58 + 0x442) =
                 *(unsigned short *)((int)local_58 + 0x442) & 0xfff7;
          }
        }
        else {
          if ((local_58[0xe4] != 0) && (*(int *)(local_58[0xe4] + 0x6c) != 0)) {
            local_d0 = FUN_1002f28d(local_58[0xe4]);
            local_6c = FUN_1001cac9(local_d0, &local_54, &local_60, &local_64);
            FUN_1002f322(local_58[0xe4], &local_54, &local_60, &local_64);
            local_60 = SUB(local_60, local_6c >> 1);
            local_44 = FUN_100142b4(local_54, local_60, local_64);
            if (local_60 <= local_44) {
              local_74 = 1;
            }
          }
          if ((local_58[0xe5] != 0) && (*(int *)(local_58[0xe5] + 0x6c) != 0)) {
            local_d0 = FUN_1002f28d(local_58[0xe5]);
            local_6c = FUN_1001cac9(local_d0, &local_54, &local_60, &local_64);
            FUN_1002f322(local_58[0xe5], &local_54, &local_60, &local_64);
            local_60 = SUB(local_60, local_6c >> 1);
            local_44 = FUN_100142b4(local_54, local_60, local_64);
            if (local_60 <= local_44) {
              local_74 = 1;
            }
          }
          if (local_74 == 0) {
            local_e4 = 0;
            local_130 = 0;
            local_f0 = 0;
            local_e0 = 0;
            local_e8 = local_58[0x11a];
            local_fc = local_58[0x111];
            local_d4 = local_58[0x114];
            local_dc = local_fc;
            local_d8 = local_e8;
            FUN_1001b520(&local_dc, &local_d4, 0x640000, DAT_100b3904);
            local_dc = local_dc % 0x1680000;
            if ((((0 < local_d4) && (0 < local_58[0x114])) ||
                 ((local_d4 < 0) && (local_58[0x114] < 0))) ||
                ((-0x50000 < local_58[0x111]) && (local_58[0x111] < 0x50000))) {
              local_58[0x111] = local_dc;
              local_58[0x114] = local_d4;
              local_48 = SUB(local_58[0x111], OBJ(0x5c));
              OBJ(0x5c) = ADD(OBJ(0x5c), local_48);
              FUN_1002f6a8((void *)OBJ(0x40), local_48, 0, 0, 0);
              FUN_10089cc9(local_12c, local_fc, 0, 0, 0, 0, 0);
              FUN_10089118(local_12c, &local_130, &local_d8, &local_e0);
              FUN_10089cc9(local_12c, local_58[0x111], 0, 0, 0, 0, 0);
              FUN_10089118(local_12c, &local_e4, &local_e8, &local_f0);
              local_ec = SUB(local_e4, local_130);
              local_f4 = SUB(local_e8, local_d8);
              local_f8 = SUB(local_f0, local_e0);
              FUN_1002f3a7(OBJ(0x40), local_ec, local_f4, local_f8);
              FUN_10089cc9(local_12c, 0, OBJ(0x60), 0, 0, 0, 0);
              FUN_10089118(local_12c, &local_ec, &local_f4, &local_f8);
              local_58[0x100] = local_e8;
              OBJ(0x50) = ADD(OBJ(0x50), local_ec);
              OBJ(0x54) = ADD(OBJ(0x54), local_f4);
              OBJ(0x58) = ADD(OBJ(0x58), local_f8);
            }
          }
          else if ((*(unsigned short *)((int)local_58 + 0x442) & 8) == 0) {
            local_134 = (unsigned int)SUB(OBJ(0x50), *(int *)PTR_DAT_100aaf68);
            local_138 = SUB(OBJ(0x54), *(int *)(PTR_DAT_100aaf68 + 4));
            local_13c = (unsigned int)SUB(OBJ(0x58), *(int *)(PTR_DAT_100aaf68 + 8));
            FUN_100037f0(local_134, local_138, local_13c, 0xee, 0);
            *(unsigned short *)((int)local_58 + 0x442) =
                 *(unsigned short *)((int)local_58 + 0x442) | 8;
          }
        }
        if (local_1c != 0) {
          FUN_10063e41(*local_58);
        }
        local_70 = local_58[7] >> 1;
        if (local_58[0xe5] != 0) {
          if ((*(unsigned short *)((int)local_58 + 0x442) & 4) != 0) {
            FUN_1002f2d6((void *)(unsigned int)*(unsigned short *)((int)local_58 + 0x442),
                         OBJ(0x44), &local_18c, &local_190, &local_194);
            local_1d4 = local_58[7];
            local_58[7] = SUB(local_58[7], local_18c);
          }
          FUN_10063fbd(*local_58, local_1d0);
          if ((*(unsigned short *)((int)local_58 + 0x442) & 4) != 0) {
            local_58[7] = local_1d4;
          }
          local_198 = FUN_10063f34(*local_58);
          FUN_1002650e(local_1d0, local_198);
          FUN_1002f322(local_58[0xe5], &local_1d8, (int *)local_180, &local_188);
          local_1d8 = SUB(local_1d0[3], local_1d8);
          local_180[0] = (unsigned int)SUB(local_1d0[4], (int)local_180[0]);
          local_188 = SUB(local_1d0[5], local_188);
          iVar1 = ApproxLength3_Likely(local_1d8, (int)local_180[0], local_188);
          local_184 = (unsigned int)FUN_10022b50((int)local_180[0], iVar1);
          iVar1 = FUN_10006bbb(local_184);
          local_184 = (unsigned int)SUB(NEG(local_70), iVar1);
          FUN_1002f668(local_58[0xe5], (int)local_184, 0, 0, 0);
        }
        if (local_58[0xe4] != 0) {
          if ((*(unsigned short *)(local_58 + 0x110) & 0x2000) == 0) {
            OBJ(0x68) = 0;
          }
          else {
            OBJ(0x68) = local_70;
          }
          OBJ(0x6c) = local_58[3];
          OBJ(0x70) = 0;
          FUN_1002f668(local_58[0xe4], OBJ(0x68), OBJ(0x6c), OBJ(0x70), 1);
        }
        FUN_1002fbc0((int *)OBJ(0x40));
      }
      local_5c = OBJ(0x60);
      iVar1 = FUN_10006b20(local_5c);
      OBJ(0xbc) = iVar1 >> 0xd;
      iVar1 = FUN_10006b9a(local_5c);
      OBJ(0xb8) = iVar1 >> 0xd;
    }
  }
  return;
}
