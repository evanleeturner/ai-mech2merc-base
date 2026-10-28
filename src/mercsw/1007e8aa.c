/* SPDX-License-Identifier: MIT */
/* mercsw 1007e8aa */
/* mercsw 1007e8aa: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10067af1(int * param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_1002fbc0(int * param_1);
int __cdecl FUN_10006b20(int param_1);
undefined __cdecl FUN_10006b9a(int param_1);

void __cdecl FUN_1007e8aa(int * param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (param_1[0xf5] == 2)) {
    FUN_10067af1(param_1 + 9);
    FUN_10067af1(param_1 + 0x11);
    FUN_10067af1(param_1 + 0xd);
    *(int *)(*param_1 + 0x50) = param_1[0xb];
    *(int *)(*param_1 + 0x54) = param_1[0x13];
    *(int *)(*param_1 + 0x58) = param_1[0xf];
    FUN_1002f37a(*(int *)(*param_1 + 0x40),*(undefined4 *)(*param_1 + 0x50),
                 *(undefined4 *)(*param_1 + 0x54),*(undefined4 *)(*param_1 + 0x58));
    FUN_1002f668(*(int *)(*param_1 + 0x40),*(int *)(*param_1 + 0x5c),*(int *)(*param_1 + 0x60),
                 *(int *)(*param_1 + 100),0);
    FUN_1002fbc0(*(int **)(*param_1 + 0x40));
    iVar2 = *(int *)(*param_1 + 0x60);
    iVar1 = FUN_10006b20(iVar2);
    *(int *)(*param_1 + 0xbc) = iVar1 >> 0xd;
    iVar2 = FUN_10006b9a(iVar2);
    *(int *)(*param_1 + 0xb8) = iVar2 >> 0xd;
  }
  return;
}
