/* SPDX-License-Identifier: MIT */
/* mercsw 10054fa4 */
/* mercsw 10054fa4: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10055664(int * param_1, int * param_2, uint param_3, uint * param_4);
undefined __cdecl FUN_100558df(int * param_1, int * param_2, uint param_3, uint * param_4);

int __cdecl FUN_10054fa4(undefined4 * param_1, int param_2, uint * param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int local_7dc;
  uint local_7d8 [240];
  uint local_418 [12];
  uint local_3e8 [240];
  uint *local_28;
  int local_24;
  uint *local_20;
  uint local_1c;
  uint *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  (void)local_20;
  local_c = 0x3fff;
  local_10 = 0x3fff;
  local_1c = 0xffffc000;
  local_14 = local_7d8;
  local_7dc = param_2;
  while (local_7dc != 0) {
    puVar4 = (uint *)*param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar4;
    puVar5 = local_14;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_14 = local_14 + 0xc;
    local_7dc = local_7dc + -1;
    local_20 = puVar4;
  }
  local_24 = 0;
  local_28 = local_7d8;
  local_14 = local_3e8;
  local_18 = local_28 + (param_2 + -1) * 0xc;
  for (local_7dc = 0; iVar1 = local_24, local_7dc < param_2; local_7dc = local_7dc + 1) {
    puVar4 = local_28 + local_7dc * 0xc;
    local_8 = puVar4;
    if ((int)local_10 < (int)puVar4[3]) {
      if ((int)local_18[3] <= (int)local_10) {
        FUN_10055664((int *)local_18,(int *)puVar4,local_10,local_418);
        puVar4 = local_418;
        puVar3 = local_14;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        local_14 = local_14 + 0xc;
        local_24 = local_24 + 1;
      }
    }
    else if ((int)local_10 < (int)local_18[3]) {
      FUN_10055664((int *)local_18,(int *)puVar4,local_10,local_418);
      puVar4 = local_418;
      puVar3 = local_14;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar4 = local_8;
      puVar3 = local_14 + 0xc;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0x18;
      local_24 = local_24 + 2;
    }
    else {
      puVar3 = local_14;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0xc;
      local_24 = local_24 + 1;
    }
    local_18 = local_8;
  }
  local_24 = 0;
  local_28 = local_3e8;
  local_14 = local_7d8;
  local_18 = local_28 + (iVar1 + -1) * 0xc;
  for (local_7dc = 0; iVar2 = local_24, local_7dc < iVar1; local_7dc = local_7dc + 1) {
    puVar4 = local_28 + local_7dc * 0xc;
    local_8 = puVar4;
    if ((int)puVar4[3] < -0x4000) {
      if (-0x4001 < (int)local_18[3]) {
        FUN_10055664((int *)local_18,(int *)puVar4,0xffffc000,local_418);
        puVar4 = local_418;
        puVar3 = local_14;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        local_14 = local_14 + 0xc;
        local_24 = local_24 + 1;
      }
    }
    else if ((int)local_18[3] < -0x4000) {
      FUN_10055664((int *)local_18,(int *)puVar4,0xffffc000,local_418);
      puVar4 = local_418;
      puVar3 = local_14;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar4 = local_8;
      puVar3 = local_14 + 0xc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0x18;
      local_24 = local_24 + 2;
    }
    else {
      puVar3 = local_14;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0xc;
      local_24 = local_24 + 1;
    }
    local_18 = local_8;
  }
  local_24 = 0;
  local_28 = local_7d8;
  local_14 = local_3e8;
  local_18 = local_28 + (iVar2 + -1) * 0xc;
  for (local_7dc = 0; iVar1 = local_24, local_7dc < iVar2; local_7dc = local_7dc + 1) {
    puVar4 = local_28 + local_7dc * 0xc;
    local_8 = puVar4;
    if ((int)puVar4[4] < (int)local_1c) {
      if ((int)local_1c <= (int)local_18[4]) {
        FUN_100558df((int *)local_18,(int *)puVar4,local_1c,local_418);
        puVar4 = local_418;
        puVar3 = local_14;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        local_14 = local_14 + 0xc;
        local_24 = local_24 + 1;
      }
    }
    else if ((int)local_18[4] < (int)local_1c) {
      FUN_100558df((int *)local_18,(int *)puVar4,local_1c,local_418);
      puVar4 = local_418;
      puVar3 = local_14;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar4 = local_8;
      puVar3 = local_14 + 0xc;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0x18;
      local_24 = local_24 + 2;
    }
    else {
      puVar3 = local_14;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0xc;
      local_24 = local_24 + 1;
    }
    local_18 = local_8;
  }
  local_24 = 0;
  local_28 = local_3e8;
  local_14 = local_7d8;
  local_18 = local_28 + (iVar1 + -1) * 0xc;
  for (local_7dc = 0; local_7dc < iVar1; local_7dc = local_7dc + 1) {
    puVar4 = local_28 + local_7dc * 0xc;
    local_8 = puVar4;
    if ((int)local_c < (int)puVar4[4]) {
      if ((int)local_18[4] <= (int)local_c) {
        FUN_100558df((int *)local_18,(int *)puVar4,local_c,local_418);
        puVar4 = local_418;
        puVar3 = local_14;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        local_14 = local_14 + 0xc;
        local_24 = local_24 + 1;
      }
    }
    else if ((int)local_c < (int)local_18[4]) {
      FUN_100558df((int *)local_18,(int *)puVar4,local_c,local_418);
      puVar4 = local_418;
      puVar3 = local_14;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar4 = local_8;
      puVar3 = local_14 + 0xc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0x18;
      local_24 = local_24 + 2;
    }
    else {
      puVar3 = local_14;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + 0xc;
      local_24 = local_24 + 1;
    }
    local_18 = local_8;
  }
  local_8 = local_7d8;
  local_7dc = local_24;
  while (local_7dc != 0) {
    *param_3 = local_8[3];
    param_3[1] = local_8[4];
    param_3[3] = local_8[5];
    param_3[4] = local_8[6];
    param_3[2] = local_8[0xb];
    param_3[5] = local_8[2];
    local_8 = local_8 + 0xc;
    param_3 = param_3 + 6;
    local_7dc = local_7dc + -1;
  }
  return local_24;
}
