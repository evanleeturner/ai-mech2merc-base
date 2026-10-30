/* SPDX-License-Identifier: MIT */
/* mercsw 1007ca5c */
/* mercsw 1007ca5c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
extern undefined DAT_100cf0d0[];
extern undefined DAT_100cf0d4[];
undefined4 __cdecl FUN_1002f28d(int param_1);
undefined4 __cdecl FUN_1001cac9(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined4 __cdecl IsWithinRadius3_Likely(int param_1, int param_2, int param_3, int param_4);
int __cdecl FixedMul16(int param_1, int param_2);
undefined __cdecl FUN_1007c493(int param_1, int param_2);

void __cdecl FUN_1007ca5c(int param_1, int param_2, int param_3, int param_4, int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0x80;
  while (iVar2 = local_10 + -1, local_10 != 0) {
    iVar1 = iVar2 * 0x14;
    local_10 = iVar2;
    if ((*(int *)(DAT_100cf0d0 + iVar1) != 0) && (*(int *)(DAT_100cf0d4 + iVar1) != 0)) {
      piVar5 = &local_20;
      piVar4 = &local_18;
      piVar3 = &local_14;
      iVar2 = FUN_1002f28d(*(int *)(DAT_100cf0d4 + iVar1));
      local_c = FUN_1001cac9(iVar2,(undefined4 *)(piVar3),(undefined4 *)(piVar4),(undefined4 *)(piVar5));
      local_1c = local_14 - param_1;
      local_8 = local_c + param_4;
      iVar2 = IsWithinRadius3_Likely(local_1c,local_18 - param_2,local_20 - param_3,local_8);
      if (iVar2 != 0) {
        iVar2 = FixedMul16(param_5,DAT_100b3904);
        FUN_1007c493(local_10,iVar2);
      }
    }
  }
  return;
}
