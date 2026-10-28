/* SPDX-License-Identifier: MIT */
/* mercsw 1000fa08 */
/* mercsw 1000fa08: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101ec750[];
extern undefined DAT_101ec780[];
extern undefined DAT_101ec78c[];
extern undefined DAT_101ec794[];
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
int __cdecl FUN_10051f43(int param_1);

undefined4 __cdecl FUN_1000fa08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = FUN_1004d5e3(*(int *)(param_1 + 4));
  for (local_20 = 0; local_20 < 0xff; local_20 = local_20 + 1) {
    iVar2 = local_20 * 0x60;
    local_18 = (int *)(DAT_101ec750 + iVar2);
    if ((((*(int *)(DAT_101ec78c + iVar2) != 0) && (*(int *)(DAT_101ec780 + iVar2) != 0)) &&
        (((*local_18 == 3 || (((*local_18 == 4 || (*local_18 == 10)) || (*local_18 == 0xc)))) ||
         (*local_18 == 9)))) &&
       (iVar2 = FUN_1004d5e3(*(int *)(DAT_101ec794 + iVar2)), iVar2 != iVar1)) {
      FUN_1002f322(local_18[0xc],(undefined4 *)(&local_10),(undefined4 *)(&local_14),(undefined4 *)(&local_1c));
      iVar2 = *(int *)(param_1 + 0x50) - local_10;
      iVar3 = *(int *)(param_1 + 0x54) - local_14;
      local_8 = *(int *)(param_1 + 0x58) - local_1c;
      local_c = FUN_1000fc30(iVar2,iVar3,local_8);
      if (local_c < 0xc351) {
        if (local_18[0x15] < 0) {
          iVar4 = local_c + -0x9c4;
          if (iVar4 < 1) {
            local_18[0x15] = 0;
          }
          else if (0 < local_18[3] * iVar2 + local_18[5] * local_8 + local_18[4] * iVar3) {
            iVar2 = FUN_10051f43(100);
            if (iVar2 < 0x4c) {
              if (iVar4 < 100) {
                local_18[0x15] = 0x9c4;
              }
              else {
                iVar2 = FUN_10051f43(iVar4 / 100);
                local_18[0x15] = iVar2 * 100 + 0x9c4;
              }
            }
            else {
              local_18[0x15] = 0;
            }
          }
        }
        if ((0 < local_18[0x15]) && (local_c <= local_18[0x15])) {
          local_18[0xf] = local_18[0xf] | 0x8000;
        }
      }
    }
  }
  return 1;
}
