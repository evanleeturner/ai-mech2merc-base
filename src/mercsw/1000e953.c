/* SPDX-License-Identifier: MIT */
/* mercsw 1000e953 */
extern int DAT_100a7b68;
extern int DAT_100a7b60;
extern int DAT_100a7b6c;
extern int DAT_100a7b70;
extern int DAT_100a7b74;
extern int DAT_100a7b78;
extern int DAT_100a7b7c;
extern int DAT_100a7b80;
extern int DAT_100a7b4c;
extern int DAT_100a7b48;
extern int DAT_100aaf70;
extern int DAT_100aafa0;
extern int DAT_100aafa4;
extern int DAT_100aaf8c;
extern int DAT_100aaf90;
extern int DAT_100ab094;
extern int DAT_100ad69c;
extern int DAT_100b0f18;
extern int DAT_100af098;
extern unsigned int DAT_100c9678;
extern unsigned int *DAT_101f5300;
extern unsigned char DAT_101f52e0[];
extern int DAT_10160c00[];
extern char *PTR_DAT_100aaf68;
extern void *DAT_100aafc8;

extern void FUN_1003bed0(void);
extern void FUN_1003bc5a(void);
extern void FUN_1003c0e4(void);

extern void __cdecl FUN_100603ff(int param_1);
extern void __cdecl FUN_1003b59a(int param_1);
extern void __cdecl FUN_10058e74(void *param_1, char param_2);
extern void __cdecl FUN_1003b954(int *param_1);
extern void __cdecl FUN_1003b2f0(char *param_1);
extern void __cdecl FUN_100186c5(int param_1);
extern void __cdecl FUN_1000dde1(int param_1, unsigned int *param_2, unsigned int *param_3, unsigned int *param_4);
extern void __cdecl FUN_1003b8f6(int param_1, int param_2);
extern void __cdecl FUN_10054c14(int param_1);
extern void __cdecl FUN_1003cd85(int *param_1);
extern void __cdecl FUN_10054925(int param_1);
extern void __cdecl FUN_1003b8cd(int param_1, int param_2);
extern void __cdecl FUN_1000f06a(int param_1);
extern void __cdecl FUN_1005f8cf(void);

void __stdcall FUN_1000e953(void)
{
  int iVar1;
  unsigned char uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int local_10;
  int local_8;

  uVar4 = DAT_100c9678;
  if (DAT_100a7b68 != 0) {
    uVar2 = (unsigned char)DAT_100ad69c;
    puVar5 = DAT_101f5300;
    for (uVar3 = DAT_100c9678 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = (((unsigned int)uVar2 << 8 | (unsigned int)uVar2) << 16) |
                ((unsigned int)uVar2 << 8 | (unsigned int)uVar2);
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(unsigned char *)puVar5 = uVar2;
      puVar5 = (unsigned int *)((int)puVar5 + 1);
    }
    FUN_100603ff(DAT_100a7b68);
  }
  if (DAT_100a7b60 != 0) {
    FUN_1003b59a((int)PTR_DAT_100aaf68);
    DAT_100a7b60 = 0;
  }
  if (DAT_100aaf70 == 0) {
    FUN_1003b954((int *)PTR_DAT_100aaf68);
    FUN_1003b2f0(PTR_DAT_100aaf68);
    if ((DAT_100aafa0 == 0) && (DAT_100aafa4 == 0)) {
      if ((DAT_100aaf8c != 0) || (DAT_100aaf90 != 0)) {
        FUN_100186c5((int)PTR_DAT_100aaf68);
      }
    }
    else {
      FUN_10058e74(&DAT_101f52e0, (char)DAT_100ad69c);
    }
    if (((DAT_100a7b6c != 0) && (DAT_100a7b70 != 0)) && (DAT_100a7b74 != -1)) {
      FUN_1000dde1(DAT_100a7b74, (unsigned int *)(PTR_DAT_100aaf68 + 0x1c),
                   (unsigned int *)(PTR_DAT_100aaf68 + 0x20),
                   (unsigned int *)(PTR_DAT_100aaf68 + 0x24));
    }
    DAT_100a7b80 = 0;
    if (DAT_100a7b78 != 0) {
      iVar1 = *(int *)(PTR_DAT_100aaf68 + 0x40);
      FUN_1003b8f6((int)PTR_DAT_100aaf68, 0x7fffffff);
      DAT_100aafc8 = (void *)FUN_1003bed0;
      FUN_10054c14(DAT_100a7b78);
      DAT_100a7b80 = (int)((unsigned int)DAT_100a7b80 + (unsigned int)DAT_100b0f18);
      FUN_1003b8f6((int)PTR_DAT_100aaf68, iVar1);
      DAT_100aafc8 = (void *)FUN_1003bc5a;
    }
    FUN_1003cd85((int *)PTR_DAT_100aaf68);
    local_10 = 0;
    local_8 = DAT_10160c00[0];
    while (local_8 != 0) {
      FUN_10054925(local_8);
      local_10 = local_10 + 1;
      local_8 = DAT_10160c00[local_10];
    }
    DAT_100a7b80 = (int)((unsigned int)DAT_100a7b80 + (unsigned int)DAT_100b0f18);
    if (((DAT_100ab094 != 0) && (DAT_100a7b7c != 0)) && (DAT_100a7b4c != 0)) {
      iVar1 = *(int *)(PTR_DAT_100aaf68 + 0x3c);
      FUN_1003b8cd((int)PTR_DAT_100aaf68, 8);
      DAT_100aafc8 = (void *)FUN_1003c0e4;
      FUN_10054c14(DAT_100a7b7c);
      DAT_100a7b80 = (int)((unsigned int)DAT_100a7b80 + (unsigned int)DAT_100b0f18);
      FUN_1003b8cd((int)PTR_DAT_100aaf68, iVar1);
      DAT_100aafc8 = (void *)FUN_1003bc5a;
    }
    if (DAT_100a7b48 != 0) {
      FUN_1000f06a(DAT_100af098);
    }
    FUN_1005f8cf();
    FUN_100603ff(0);
  }
  else {
    FUN_10058e74(&DAT_101f52e0, (char)DAT_100ad69c);
  }
  return;
}
