/* SPDX-License-Identifier: MIT */
/* mercsw 1001355e */
/* mercsw 1001355e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1d8;
extern undefined2 * DAT_100aa1dc;
extern undefined2 DAT_100aa2b4;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_10006f9a(undefined4 param_1, undefined4 param_2, undefined4 param_3);

void __cdecl FUN_1001355e(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_100aa1dc;
  *DAT_100aa1dc = DAT_100aa2b4;
  *(int *)(puVar2 + 1) = -param_2;
  *(int *)(puVar2 + 3) = -param_3;
  *(int *)(puVar2 + 5) = -param_4;
  iVar1 = *(int *)(DAT_100eef40[DAT_100adf38] + 0x20);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(iVar1 + 0x434);
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(iVar1 + 0x438);
  *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(iVar1 + 0x43c);
  FUN_10006f9a(*(undefined4 *)(*(int *)(DAT_100aa1d8 + 0x10) + param_1 * 4),(undefined4)(puVar2),0x1a);
  return;
}
