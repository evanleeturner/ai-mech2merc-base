/* SPDX-License-Identifier: MIT */
/* mercsw 1007c7bc */
/* mercsw 1007c7bc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100cded4[];
extern undefined DAT_100cded8[];
extern undefined DAT_100cdedc[];
extern undefined DAT_100cdee0[];
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1007bf28(int param_1);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FixedMul16(int param_1, int param_2);

void __cdecl FUN_1007c7bc(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 * 0x24;
  if ((*(int *)(DAT_100cded4 + iVar1) != 0) &&
     (iVar2 = ApproxLength3_Likely(param_2,param_3,param_4), iVar2 != 0)) {
    FUN_1007bf28(param_1);
    iVar3 = ApproxLength3_Likely(*(int *)(DAT_100cded8 + iVar1),*(int *)(DAT_100cdedc + iVar1),
                         *(int *)(DAT_100cdee0 + iVar1));
    if (iVar2 < iVar3) {
      iVar2 = FUN_10002570(iVar2 * 2,iVar3);
      iVar3 = FixedMul16(*(int *)(DAT_100cded8 + iVar1),iVar2);
      *(int *)(DAT_100cded8 + iVar1) = iVar3;
      iVar3 = FixedMul16(*(int *)(DAT_100cdedc + iVar1),iVar2);
      *(int *)(DAT_100cdedc + iVar1) = iVar3;
      iVar2 = FixedMul16(*(int *)(DAT_100cdee0 + iVar1),iVar2);
      *(int *)(DAT_100cdee0 + iVar1) = iVar2;
    }
    *(int *)(DAT_100cded8 + iVar1) = *(int *)(DAT_100cded8 + iVar1) + param_2;
    *(int *)(DAT_100cdedc + iVar1) = *(int *)(DAT_100cdedc + iVar1) + param_3;
    *(int *)(DAT_100cdee0 + iVar1) = *(int *)(DAT_100cdee0 + iVar1) + param_4;
  }
  return;
}
