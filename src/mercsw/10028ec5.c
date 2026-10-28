/* SPDX-License-Identifier: MIT */
/* mercsw 10028ec5 */
/* mercsw 10028ec5: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1002954c(ushort param_1);
int __cdecl FUN_10028bde(int param_1, ushort param_2, short param_3, ushort * param_4, ushort * param_5);

ushort __cdecl FUN_10028ec5(int param_1, ushort param_2, short param_3)

{
  int iVar1;
  ushort local_c [2];
  ushort local_8 [2];
  
  if ((*(byte *)(param_1 + 0x17e) & 3) == 0) {
    if (param_3 == -2) {
      param_3 = (short)(*(int *)(param_1 + 0x19a) / 100);
    }
    else if (param_3 == -1) {
      param_3 = (short)(*(int *)(param_1 + 0x196) / 100);
    }
    else if (param_3 == 0) {
      iVar1 = FUN_1002954c(param_2);
      param_3 = (short)(iVar1 / 100);
    }
    FUN_10028bde(param_1,param_2,param_3,local_c,local_8);
    if (*(int *)(param_1 + 0x1a8) != 0) {
      local_8[0] = local_c[0];
    }
  }
  else {
    local_8[0] = 0;
  }
  return local_8[0];
}
