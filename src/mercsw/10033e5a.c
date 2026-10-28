/* SPDX-License-Identifier: MIT */
/* mercsw 10033e5a */
/* mercsw 10033e5a: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10023525(int param_1, int * param_2, int * param_3, uint * param_4);
undefined4 __cdecl FUN_1003ba89(int * param_1, int * param_2, int * param_3);
undefined __cdecl FUN_1003510c(int param_1, int param_2, int param_3);

void __cdecl FUN_10033e5a(int * param_1)

{
  int iVar1;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  (void)local_8;
  if (((((byte)((uint)*(undefined4 *)(*param_1 + 0xdc) >> 8) & 0xf) == 2) &&
      ((*(byte *)(*param_1 + 0xdd) & 0x10) == 0)) &&
     (*(int *)(param_1[0xf8] * 0x40 + param_1[0x15] + 8) == 1)) {
    FUN_10023525(*param_1,&local_1c,&local_18,&local_14);
    iVar1 = FUN_1003ba89((int *)&local_14,&local_10,&local_c);
    if (iVar1 != 0) {
      local_8 = local_14;
      FUN_1003510c(local_14,local_10,0x5d);
    }
  }
  return;
}
