/* SPDX-License-Identifier: MIT */
/* mercsw 100636e5 */
/* mercsw 100636e5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7bc8[];
extern undefined DAT_100a7bcc[];
undefined __cdecl FUN_10062d5f(int param_1, int param_2);
undefined __cdecl FUN_10044cc4(int param_1, int * param_2);

void __cdecl FUN_100636e5(int * param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[0xf8];
  FUN_10062d5f((int)param_1,0);
  iVar3 = param_1[0xf8];
  do {
    iVar4 = param_1[0xf8] * 0x40 + param_1[0x15];
    iVar1 = *(int *)(iVar4 + 4) * 0x68;
    if (*(int *)(iVar4 + 8) == 1) {
      *(undefined4 *)(iVar4 + 8) = 2;
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(DAT_100a7bcc + iVar1);
      *(undefined4 *)(iVar4 + 0x10) = 0;
      FUN_10044cc4(iVar4,param_1);
      if ((*(int *)(DAT_100a7bc8 + iVar1) == 0) || ((*(ushort *)(param_1 + 0x110) & 0x80) == 0)) {
        *(undefined4 *)(iVar4 + 0x1c) = 0;
        *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar4 + 0x1c);
      }
      else {
        *(uint *)(iVar4 + 0x18) = *(uint *)(*param_1 + 0xdc) & 0xff;
        *(uint *)(iVar4 + 0x1c) = *(uint *)(*param_1 + 0xdc) & 0xf00;
      }
    }
    FUN_10062d5f((int)param_1,0);
  } while (param_1[0xf8] != iVar3);
  param_1[0xf8] = iVar2;
  return;
}
