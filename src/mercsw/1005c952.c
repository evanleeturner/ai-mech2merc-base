/* SPDX-License-Identifier: MIT */
/* mercsw 1005c952 */
/* mercsw 1005c952: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b2f98[];
extern undefined DAT_100b3188[];
extern undefined DAT_101f5300[];
extern undefined PTR_DAT_100b2cf0[];
int __cdecl FUN_10066209(int param_1, int param_2);
int __cdecl FUN_10065e40(undefined4 param_1, int param_2, int param_3);
int * __cdecl FUN_100660e1(int param_1, int * param_2, int * param_3);
int __cdecl FUN_10065ebf(int param_1, int param_2, int param_3);

void __stdcall FUN_1005c952(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  int local_14;
  
  for (local_14 = 0; local_14 < 0x22; local_14 = local_14 + 1) {
    ppuVar3 = (undefined **)(PTR_DAT_100b2cf0 + local_14 * 5);
    FUN_10066209((int)ppuVar3,(int)ppuVar3);
    FUN_10065e40((undefined4)(DAT_101f5300),(int)ppuVar3,(int)ppuVar3);
    FUN_100660e1((int)ppuVar3,(int *)(DAT_100b2f98 + local_14 * 8),
                 (int *)(DAT_100b2f98 + local_14 * 8));
    iVar1 = *(int *)(DAT_100b3188 + local_14 * 4);
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(*(int *)(iVar1 + 4) + 4);
      *puVar2 = (undefined4)(DAT_101f5300);
      FUN_10065ebf((int)ppuVar3,(int)puVar2,(int)puVar2);
      puVar2 = *(undefined4 **)(*(int *)(iVar1 + 4) + 8);
      *puVar2 = (undefined4)(DAT_101f5300);
      FUN_10065ebf((int)ppuVar3,(int)puVar2,(int)puVar2);
      **(undefined4 **)(*(int *)(iVar1 + 4) + 0xc) = (undefined4)(DAT_101f5300);
    }
  }
  return;
}
