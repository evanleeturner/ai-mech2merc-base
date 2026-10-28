/* SPDX-License-Identifier: MIT */
/* mercsw 100823ef */
/* mercsw 100823ef: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b9a30[];
extern undefined DAT_100b9a32[];

undefined4 __cdecl FUN_100823ef(int param_1, int param_2, int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int local_8;
  
  if ((((param_3 == 0) || (param_1 < 0)) || (0xff < param_1)) ||
     ((param_2 < 1 || (0x100 - param_1 < param_2)))) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
      iVar1 = (local_8 + param_1) * 3;
      puVar3 = (undefined2 *)(local_8 * 3 + param_3);
      *puVar3 = *(undefined2 *)(DAT_100b9a30 + iVar1);
      *(undefined *)(puVar3 + 1) = DAT_100b9a32[iVar1];
    }
    uVar2 = 0;
  }
  return uVar2;
}
