/* SPDX-License-Identifier: MIT */
/* mercsw 10025417 */
/* mercsw 10025417: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_100258ea(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int * param_7, int * param_8);
undefined4 * __cdecl FUN_10025799(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, uint param_7);

undefined4 * __cdecl FUN_10025417(int * param_1, byte param_2, int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70 [25];
  int local_c;
  int local_8;
  
  if ((param_2 & 1) == 0) {
    local_7c = *param_1;
    local_98 = ((int)((unsigned int)(param_1[1]) + (unsigned int)(*param_1))) >> 1;
  }
  else {
    local_7c = (((int)((unsigned int)(param_1[1]) + (unsigned int)(*param_1))) >> 1) + 1;
    local_98 = param_1[1];
  }
  if ((param_2 & 2) == 0) {
    local_84 = param_1[4];
    local_a0 = ((int)((unsigned int)(param_1[5]) + (unsigned int)(param_1[4]))) >> 1;
  }
  else {
    local_84 = (((int)((unsigned int)(param_1[5]) + (unsigned int)(param_1[4]))) >> 1) + 1;
    local_a0 = param_1[5];
  }
  if ((local_7c < local_98) && (local_84 < local_a0)) {
    local_88 = 0;
    local_80 = 0x7fffffff;
    local_9c = -0x7fffffff;
    for (local_c = 0; local_c < *(short *)(param_3 + 6); local_c = local_c + 1) {
      local_90 = *(int *)(param_3 + 8) + param_3 + local_c * 0x24;
      iVar3 = FUN_100258ea(local_90,param_3,local_7c,local_98,local_84,local_a0,&local_78,&local_94)
      ;
      if (iVar3 != 0) {
        uVar1 = local_88 + 1;
        if (0x19 < (int)uVar1) {
          local_80 = 0x7fffffff;
          local_9c = -0x7fffffff;
          local_88 = uVar1;
          local_74 = (int *)(FUN_10025799(local_7c,local_98,0x7fffffff,0x80000001,local_84,local_a0,0));
          if (local_74 == (int *)0x0) {
            return (undefined4 *)0x0;
          }
          for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
            puVar2 = FUN_10025417(local_74,(byte)local_8,param_3);
            local_74[local_8 + 7] = (int)puVar2;
            local_8c = local_74[local_8 + 7];
            if (local_8c != 0) {
              if (local_9c < *(int *)(local_8c + 0xc)) {
                local_9c = *(int *)(local_8c + 0xc);
              }
              if (*(int *)(local_8c + 8) < local_80) {
                local_80 = *(int *)(local_8c + 8);
              }
            }
          }
          local_74[3] = local_9c;
          local_74[2] = local_80;
          if (local_74[2] != 0x7fffffff) {
            return (undefined4 *)(local_74);
          }
          local_74[3] = 0;
          local_74[2] = local_74[3];
          return (undefined4 *)(local_74);
        }
        if (local_9c < local_94) {
          local_9c = local_94;
        }
        if (local_78 < local_80) {
          local_80 = local_78;
        }
        local_70[local_88] = local_90;
        local_88 = uVar1;
      }
    }
    if (local_88 == 0) {
      local_9c = 0;
      local_80 = 0;
    }
    puVar2 = FUN_10025799(local_7c,local_98,local_80,local_9c,local_84,local_a0,local_88);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else if (0 < (int)local_88) {
      piVar4 = local_70;
      piVar5 = (int *)(puVar2 + 0xb);
      for (local_88 = local_88 & 0x3fffffff; local_88 != 0; local_88 = local_88 - 1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar5 = (char)*piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
        piVar5 = (int *)((int)piVar5 + 1);
      }
    }
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}
