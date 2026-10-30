/* SPDX-License-Identifier: MIT */
/* mercsw 1005ca54 */
extern unsigned char *DAT_100adf34;
extern int DAT_100aa1ac;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern void *DAT_100adf74;
extern int DAT_10114e40[0x22];
extern char *DAT_10114db0[0x22];
extern int DAT_100b3220[];
extern void *PTR_DAT_100b2cf0[];
extern unsigned char DAT_100b2f98[];
extern int DAT_100b3188[];
extern int DAT_100ab0a8;
extern int DAT_100ab0ac;

extern void *__stdcall HeapAlloc(void *, unsigned long, unsigned long);

extern void __cdecl FUN_10045d90(char *param_1);
extern void __cdecl FUN_1005c34a(int param_1);
extern void __cdecl FUN_10015e98(void);
extern void __stdcall FUN_10011120(void);
extern void __cdecl FUN_10067e7c(void);
extern void __cdecl FUN_10033ae3(void);
extern void __cdecl FUN_10008608(void);

extern void FUN_100682e7(void);
extern void FUN_100689bf(void);
extern void FUN_10068a69(void);
extern void FUN_10068bb1(void);
extern void FUN_1006147f(void);
extern void FUN_10061a73(void);
extern void FUN_10060c50(void);
extern void FUN_10061ab8(void);
extern void FUN_10061bc8(void);
extern void FUN_1002db2d(void);
extern void FUN_1002e029(void);
extern void FUN_1002e711(void);
extern void FUN_1002e9c4(void);
extern void FUN_1002ea87(void);
extern void FUN_1002ed27(void);
extern void FUN_1002e635(void);

void __stdcall FUN_1005ca54(void)
{
  int iVar1;
  int local_c;

  for (local_c = 0; local_c < 0x22; local_c = local_c + 1) {
    DAT_10114e40[local_c] = 1;
  }
  DAT_10114e40[1] = 0;
  DAT_10114e40[24] = 0;
  DAT_10114e40[25] = 0;
  if ((DAT_100adf34[9] == '\0') && (DAT_100aa1ac != 0)) {
    DAT_10114e40[17] = 0;
  }
  iVar1 = *(int *)(DAT_100eef40[DAT_100adf38] + 0x20);
  for (local_c = 0; local_c < 0x22; local_c = local_c + 1) {
    DAT_10114db0[local_c] = (char *)HeapAlloc(DAT_100adf74, 1, 0x100);
    FUN_10045d90(DAT_10114db0[local_c]);
    (**(void (__cdecl **)(char *, int))(DAT_10114db0[local_c] + 0xc4))
              (DAT_10114db0[local_c], DAT_100b3220[local_c]);
    (**(void (__cdecl **)(char *, void *))(DAT_10114db0[local_c] + 0xd0))
              (DAT_10114db0[local_c], &PTR_DAT_100b2cf0[local_c * 5]);
    (**(void (__cdecl **)(char *, void *))(DAT_10114db0[local_c] + 0xd8))
              (DAT_10114db0[local_c], &DAT_100b2f98[local_c * 8]);
    (**(void (__cdecl **)(char *, int))(DAT_10114db0[local_c] + 0xdc))
              (DAT_10114db0[local_c], DAT_100b3188[local_c]);
    (**(void (__cdecl **)(char *, int))(DAT_10114db0[local_c] + 0xd4))(DAT_10114db0[local_c], 0);
    if (DAT_10114e40[local_c] == 0) {
      (**(void (__cdecl **)(char *))(DAT_10114db0[local_c] + 0xec))(DAT_10114db0[local_c]);
    }
    else {
      (**(void (__cdecl **)(char *))(DAT_10114db0[local_c] + 0xe8))(DAT_10114db0[local_c]);
    }
  }
  FUN_1005c34a(iVar1);

  *(void **)(DAT_10114db0[2] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[2] + 0xfc) = (void *)FUN_100689bf;
  *(void **)(DAT_10114db0[2] + 0xf0) = (void *)FUN_10068a69;
  *(void **)(DAT_10114db0[2] + 0xf8) = (void *)FUN_10068bb1;
  *(int *)(DAT_10114db0[2] + 0xc) = 5;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[2] + 0xd4))(DAT_10114db0[2], 1);

  *(void **)(DAT_10114db0[22] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[22] + 0xfc) = (void *)FUN_100689bf;
  *(void **)(DAT_10114db0[22] + 0xf0) = (void *)FUN_10068a69;
  *(void **)(DAT_10114db0[22] + 0xf8) = (void *)FUN_10068bb1;
  *(int *)(DAT_10114db0[22] + 0xc) = 6;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[22] + 0xd4))(DAT_10114db0[22], 9);

  *(void **)(DAT_10114db0[26] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[26] + 0xfc) = (void *)FUN_100689bf;
  *(void **)(DAT_10114db0[26] + 0xf0) = (void *)FUN_10068a69;
  *(void **)(DAT_10114db0[26] + 0xf8) = (void *)FUN_10068bb1;
  *(int *)(DAT_10114db0[26] + 0xc) = 4;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[26] + 0xd4))(DAT_10114db0[26], 10);

  *(void **)(DAT_10114db0[31] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[31] + 0xfc) = (void *)FUN_100689bf;
  *(void **)(DAT_10114db0[31] + 0xf0) = (void *)FUN_10068a69;
  *(void **)(DAT_10114db0[31] + 0xf8) = (void *)FUN_10068bb1;
  *(int *)(DAT_10114db0[31] + 0xc) = 3;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[31] + 0xd4))(DAT_10114db0[31], 0);

  *(void **)(DAT_10114db0[32] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[32] + 0xfc) = (void *)FUN_100689bf;
  *(void **)(DAT_10114db0[32] + 0xf0) = (void *)FUN_10068a69;
  *(void **)(DAT_10114db0[32] + 0xf8) = (void *)FUN_10068bb1;
  *(int *)(DAT_10114db0[32] + 0xc) = 2;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[32] + 0xd4))(DAT_10114db0[32], 0xc);

  *(void **)(DAT_10114db0[33] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[33] + 0xfc) = (void *)FUN_100689bf;
  *(void **)(DAT_10114db0[33] + 0xf0) = (void *)FUN_10068a69;
  *(void **)(DAT_10114db0[33] + 0xf8) = (void *)FUN_10068bb1;
  *(int *)(DAT_10114db0[33] + 0xc) = 1;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[33] + 0xd4))(DAT_10114db0[33], 0xd);

  *(void **)(DAT_10114db0[17] + 0xf4) = (void *)FUN_1006147f;
  *(void **)(DAT_10114db0[17] + 0xf4) = (void *)FUN_100682e7;
  *(void **)(DAT_10114db0[17] + 0xfc) = (void *)FUN_10061a73;
  *(void **)(DAT_10114db0[18] + 0xf4) = (void *)FUN_10060c50;
  *(void **)(DAT_10114db0[17] + 0xf0) = (void *)FUN_10061ab8;
  *(void **)(DAT_10114db0[17] + 0xf8) = (void *)FUN_10061bc8;
  *(int *)(DAT_10114db0[17] + 0xc) = 7;
  (**(void (__cdecl **)(char *, int))(DAT_10114db0[17] + 0xd4))(DAT_10114db0[17], 8);

  *(void **)(DAT_10114db0[19] + 0xf4) = (void *)FUN_1002db2d;
  *(void **)(DAT_10114db0[20] + 0xf4) = (void *)FUN_1002e029;
  *(void **)(DAT_10114db0[21] + 0xf4) = (void *)FUN_1002e711;
  *(void **)(DAT_10114db0[23] + 0xf4) = (void *)FUN_1002e9c4;
  *(void **)(DAT_10114db0[24] + 0xf4) = (void *)FUN_1002ea87;
  *(void **)(DAT_10114db0[25] + 0xf4) = (void *)FUN_1002ed27;
  *(void **)(DAT_10114db0[29] + 0xf4) = (void *)FUN_1002e635;

  FUN_10015e98();
  FUN_10011120();
  DAT_100ab0a8 = (int)((unsigned int)iVar1 + 0x404u);
  DAT_100ab0ac = (int)((unsigned int)iVar1 + 0xcu);
  FUN_10067e7c();
  FUN_10033ae3();
  if ((DAT_100adf34[9] != '\0') || (DAT_100aa1ac == 0)) {
    FUN_10008608();
  }
  return;
}
