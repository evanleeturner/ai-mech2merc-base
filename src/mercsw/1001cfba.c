/* SPDX-License-Identifier: MIT */
/* mercsw 1001cfba */
/* mercsw 1001cfba: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1001b971(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int * param_10, int * param_11, int * param_12);
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);

void __cdecl FUN_1001cfba(int param_1, int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_34;
  int *local_30;
  uint local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_24 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x20000000;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  if (2 < *(ushort *)(param_1 + 2)) {
    if (*(short *)(param_1 + 2) == 3) {
      piVar2 = (int *)((uint)*(byte *)(*(int *)(param_1 + 4) + param_1) * 0x44 + param_2);
      piVar3 = (int *)((uint)*(byte *)(*(int *)(param_1 + 4) + 1 + param_1) * 0x44 + param_2);
      piVar4 = (int *)((uint)*(byte *)(*(int *)(param_1 + 4) + 2 + param_1) * 0x44 + param_2);
      FUN_1001b971(*piVar2,piVar2[1],piVar2[2],*piVar3,piVar3[1],piVar3[2],*piVar4,piVar4[1],
                   piVar4[2],&local_c,&local_14,&local_18);
      *(int *)(param_1 + 0x14) = local_c;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
      *(int *)(param_1 + 0x18) = local_14;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x1c) = local_18;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      local_1c = (int *)((uint)*(byte *)(*(int *)(param_1 + 4) + param_1) * 0x44 + param_2);
      local_28 = (uint)*(ushort *)(param_1 + 2);
      while (local_28 != 0) {
        local_10 = (int *)((uint)*(byte *)(*(int *)(param_1 + 4) + (local_28 - 1) + param_1) * 0x44
                          + param_2);
        local_8 = ApproxLength3_Likely(*local_1c - *local_10,local_1c[1] - local_10[1],
                               local_1c[2] - local_10[2]);
        if (local_24 < local_8) {
          local_20 = local_10;
          local_30 = local_1c;
          local_24 = local_8;
        }
        local_1c = local_10;
        local_28 = local_28 - 1;
      }
      if (local_24 != 0) {
        local_34 = -1;
        local_28 = (uint)*(ushort *)(param_1 + 2);
        do {
          do {
            uVar1 = local_28 - 1;
            if (local_28 == 0) {
              return;
            }
            local_10 = (int *)((uint)*(byte *)(*(int *)(param_1 + 4) + uVar1 + param_1) * 0x44 +
                              param_2);
            local_28 = uVar1;
          } while ((local_20 == local_10) || (local_30 == local_10));
          iVar5 = FUN_1001b971(*local_20,local_20[1],local_20[2],*local_30,local_30[1],local_30[2],
                               *local_10,local_10[1],local_10[2],&local_c,&local_14,&local_18);
          if (local_34 < iVar5) {
            *(int *)(param_1 + 0x14) = local_c;
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x14);
            *(int *)(param_1 + 0x18) = local_14;
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
            *(int *)(param_1 + 0x1c) = local_18;
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
            local_34 = iVar5;
          }
        } while (iVar5 < 0x11);
      }
    }
  }
  return;
}
