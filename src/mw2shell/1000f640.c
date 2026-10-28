/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f640 */
/* mw2shell 1000f640: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined * __cdecl FUN_1000e730(undefined4 param_1);
undefined4 __stdcall _FILE_read_8(undefined4, undefined4);
undefined4 __cdecl FUN_1006a0e7(int param_1, int param_2);
undefined4 __cdecl FUN_1006a267(int param_1);

undefined4 __cdecl FUN_1000f640(int param_1, undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  puVar1 = FUN_1000e730(param_2);
  iVar2 = _FILE_read_8((undefined4)(puVar1),uVar5);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_1006a0e7(iVar2,0);
  iVar4 = ((int)uVar3 >> 0x10) + 1;
  *(int *)(param_1 + 0x28) = iVar4;
  iVar2 = (uVar3 & 0xffff) + 1;
  *(int *)(param_1 + 0x2c) = iVar2;
  if ((*(uint *)(param_1 + 0x1c) & 0x80) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - iVar4 / 2;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar2;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar5 = FUN_1006a267(*(int *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}
