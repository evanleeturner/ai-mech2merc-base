/* SPDX-License-Identifier: MIT */
/* mercsw 10064114 */
/* mercsw 10064114: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_100640ee(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl FUN_1002fc9d(int param_1);
undefined __cdecl FUN_1002f462(int param_1, undefined4 * param_2);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);

void __cdecl FUN_10064114(int param_1, int param_2)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_100640ee(param_1,&local_8,&local_c,&local_10);
  puVar1 = (undefined4 *)FUN_1002fc9d(*(int *)(param_1 + 0x48));
  FUN_1002f462(param_2,puVar1);
  FUN_1002f37a(param_2,local_8,local_c,local_10);
  return;
}
