/* SPDX-License-Identifier: MIT */
/* mercsw 1000d659 */
/* mercsw 1000d659: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7584;
extern undefined DAT_100ef030[];
extern undefined4 DAT_101f5480;
extern undefined DAT_101f64a4[];
extern undefined DAT_101f64a8[];
extern undefined DAT_101f64ac[];
extern undefined DAT_101f64ad[];
extern undefined DAT_101f64b8[];
extern undefined DAT_101f64c0[];
int __cdecl FUN_1000d403(int param_1);
undefined __cdecl FUN_1000dd06(int param_1);
undefined4 __cdecl FUN_1000d875(int param_1, int param_2);
undefined __cdecl FUN_1007c203(int * param_1, undefined * param_2, int param_3);
undefined4 __cdecl FUN_1000e3ec(uint param_1);
undefined __cdecl FUN_1000e4a8(int * param_1);

void __stdcall FUN_1000d659(void)

{
  int iVar1;
  int iVar2;
  uint local_c;
  
  for (local_c = 0; (int)local_c < (int)DAT_100a7584; local_c = local_c + 1) {
    iVar1 = local_c * 0x7c;
    if (-1 < *(int *)(DAT_101f64a8 + iVar1)) {
      if (((DAT_101f64ad[*(int *)(DAT_101f64a8 + iVar1) * 0x7c] & 2) != 0) &&
         ((DAT_101f64ad[iVar1] & 2) == 0)) {
        DAT_101f5480 = 1;
        FUN_1000d403(local_c);
      }
      if ((DAT_101f64ad[*(int *)(DAT_101f64a8 + iVar1) * 0x7c] & 8) == 0) {
        if (((DAT_101f64ad[iVar1] & 8) != 0) && ((DAT_101f64ad[iVar1] & 2) == 0)) {
          DAT_101f5480 = 1;
          *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) & 0xfffff7ff;
          iVar2 = FUN_1000d875(local_c,*(int *)(DAT_101f64a4 + iVar1));
          if (iVar2 == 0) {
            *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) & 0x800;
          }
          else if ((*(int *)(DAT_101f64b8 + local_c * 0x7c) != -1) &&
                  (((int)*(short *)(DAT_100ef030 + *(int *)(DAT_101f64b8 + local_c * 0x7c) * 0x40)
                   & 0x8000U) != 0)) {
            FUN_1007c203(*(int **)(DAT_101f64c0 + local_c * 0x7c),(undefined *)(FUN_1000e4a8),0);
            FUN_1000e3ec(local_c);
          }
        }
      }
      else if ((DAT_101f64ad[iVar1] & 8) == 0) {
        DAT_101f5480 = 1;
        *(uint *)(DAT_101f64ac + iVar1) = *(uint *)(DAT_101f64ac + iVar1) | 0x800;
        FUN_1000dd06(local_c);
      }
    }
  }
  return;
}
