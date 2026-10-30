/* SPDX-License-Identifier: MIT */
/* mercsw 1004b9f3 */
/* mercsw 1004b9f3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38dc;
extern undefined4 DAT_100b3904;
extern undefined DAT_100ef030[];
extern undefined DAT_100ef034[];
undefined4 __cdecl FUN_1000dd98(int param_1);
undefined4 __cdecl FUN_1001cac9(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
int __cdecl FixedMul16(int param_1, int param_2);
undefined __cdecl FUN_1004bd53(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_1004b9f3(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  ushort *local_c;
  int local_8;
  
  local_10 = DAT_100b38dc;
  while (iVar2 = local_10 + -1, local_10 != 0) {
    local_c = (ushort *)(DAT_100ef030 + iVar2 * 0x40);
    local_10 = iVar2;
    if (((*local_c & 4) == 0) &&
       (local_20 = FUN_1000dd98(*(int *)(DAT_100ef034 + iVar2 * 0x40)), local_20 != 0)) {
      local_28 = FUN_1001cac9(local_20,(undefined4 *)(&local_2c),(undefined4 *)(&local_30),(undefined4 *)(&local_34));
      local_14 = local_2c - param_2;
      local_18 = local_30 - param_3;
      local_1c = local_34 - param_4;
      local_24 = param_5 + local_28;
      local_8 = ApproxLength3_Likely(local_14,local_18,local_1c);
      if (local_8 < local_24) {
        iVar2 = local_2c;
        iVar3 = local_30;
        iVar4 = local_34;
        iVar1 = FixedMul16(param_6,DAT_100b3904);
        FUN_1004bd53(param_1,local_20,iVar1,iVar2,iVar3,iVar4);
      }
    }
  }
  return;
}
