/* SPDX-License-Identifier: MIT */
/* mercsw 10034268 */
/* mercsw 10034268: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10006b20(int param_1);
undefined __cdecl FUN_10006b9a(int param_1);
int __cdecl FUN_10015b30(int param_1, int param_2);

void __cdecl FUN_10034268(int * param_1, int * param_2, int param_3, int param_4, int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_5 == 0) {
    *param_1 = param_3;
    *param_2 = param_4;
  }
  else {
    iVar1 = FUN_10006b20((int)((unsigned int)(param_5) << (0x10)));
    iVar2 = FUN_10006b9a((int)((unsigned int)(param_5) << (0x10)));
    iVar3 = FUN_10015b30((int)((unsigned int)(param_3) << (0x10)),iVar2);
    iVar4 = FUN_10015b30((int)((unsigned int)(param_4) << (0x10)),iVar1);
    *param_1 = iVar3 - iVar4;
    iVar1 = FUN_10015b30((int)((unsigned int)(param_3) << (0x10)),iVar1);
    iVar2 = FUN_10015b30((int)((unsigned int)(param_4) << (0x10)),iVar2);
    *param_2 = iVar1 + iVar2;
    *param_1 = *param_1 >> 0x10;
    *param_2 = *param_2 >> 0x10;
  }
  return;
}
