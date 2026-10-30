/* SPDX-License-Identifier: MIT */
/* mercsw 1007fc1d */
/* mercsw 1007fc1d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf34;
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
undefined __cdecl FUN_1007fcc3(int * param_1, int * param_2, int param_3);

void __cdecl FUN_1007fc1d(int * param_1, int * param_2)

{
  int iVar1;
  
  if ((*(char *)(DAT_100adf34 + 3) != '\0') &&
     (iVar1 = ApproxLength3_Likely(param_1[0x10d] - param_2[0x10d],param_1[0x10e] - param_2[0x10e],
                           param_1[0x10f] - param_2[0x10f]), 200000 < iVar1)) {
    iVar1 = FUN_10002570(iVar1 - 200000,1300000);
    FUN_1007fcc3(param_1,param_2,iVar1 * 3);
  }
  return;
}
