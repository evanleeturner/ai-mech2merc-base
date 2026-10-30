/* SPDX-License-Identifier: MIT */
/* mercsw 1000f651 */
/* mercsw 1000f651: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101ec750[];
extern undefined DAT_101ec780[];
extern undefined DAT_101ec78c[];
extern undefined DAT_101ec794[];
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10044cc4(int param_1, int * param_2);

undefined4 __cdecl FUN_1000f651(int param_1, int param_2, int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_3 + 8) == 1) {
    iVar1 = FUN_1004d5e3(*(int *)(param_1 + 4));
    for (local_1c = 0; local_1c < 0xff; local_1c = local_1c + 1) {
      iVar2 = local_1c * 0x60;
      local_14 = (int *)(DAT_101ec750 + iVar2);
      if ((((*(int *)(DAT_101ec78c + iVar2) != 0) && (*(int *)(DAT_101ec780 + iVar2) != 0)) &&
          (((*local_14 == 3 || (((*local_14 == 4 || (*local_14 == 10)) || (*local_14 == 0xc)))) ||
           (*local_14 == 9)))) &&
         (iVar2 = FUN_1004d5e3(*(int *)(DAT_101ec794 + iVar2)), iVar2 != iVar1)) {
        FUN_1002f322(local_14[0xc],(undefined4 *)(&local_c),(undefined4 *)(&local_10),(undefined4 *)(&local_18));
        iVar2 = *(int *)(param_1 + 0x50) - local_c;
        iVar3 = *(int *)(param_1 + 0x54) - local_10;
        local_8 = *(int *)(param_1 + 0x58) - local_18;
        iVar4 = ApproxLength3_Likely(iVar2,iVar3,local_8);
        if ((iVar4 < 0xc351) &&
           (0 < local_14[5] * local_8 + local_14[4] * iVar3 + local_14[3] * iVar2)) {
          *(undefined4 *)(param_3 + 8) = 2;
          *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_2 + 0x2c);
          *(undefined4 *)(param_3 + 0x10) = 0;
          *(undefined4 *)(param_3 + 0x1c) = 0;
          *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x1c);
          FUN_10044cc4(param_3,*(int **)(param_1 + 0x20));
        }
      }
    }
  }
  return 1;
}
