/* SPDX-License-Identifier: MIT */
/* mercsw 1007fcc3 */
/* mercsw 1007fcc3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa55c;
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
undefined __cdecl FUN_100065c4(int param_1, int * param_2, int param_3, uint param_4);
undefined __stdcall FUN_10006d3e(void);

void __cdecl FUN_1007fcc3(int * param_1, int * param_2, int param_3)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    local_8 = -2;
  }
  else {
    local_8 = *(int *)(*param_2 + 4);
  }
  if ((int)DAT_100aa55c < -0xddb4) {
    if (param_2 == (int *)0x0) {
      local_c = param_3;
    }
    else {
      if (param_1[0x106] < 1) {
        local_14 = 1;
      }
      else {
        local_14 = param_1[0x106];
      }
      local_c = FUN_10011e60((int)((unsigned int)(param_3) << (2)),param_2[0x106],local_14);
      if (local_c < param_3) {
        local_c = param_3;
      }
    }
    FUN_100065c4(local_8,param_1,local_c,1);
  }
  else if (DAT_100aa55c < 0xb506) {
    iVar1 = FUN_10006d3e();
    local_10 = (iVar1 - *(int *)(*param_1 + 0x60)) - *(int *)(*param_1 + 0x6c);
    if (local_10 < -0xb40000) {
      local_10 = local_10 + 0x1680000;
    }
    else if (0xb40000 < local_10) {
      local_10 = local_10 + -0x1680000;
    }
    if (local_10 < 1) {
      if ((local_10 < -0x2cffff) && (-0x870001 < local_10)) {
        FUN_100065c4(local_8,param_1,param_3,6);
      }
      else {
        FUN_100065c4(local_8,param_1,param_3,4);
      }
    }
    else if ((local_10 < 0x2d0000) || (0x870000 < local_10)) {
      FUN_100065c4(local_8,param_1,param_3,2);
    }
    else {
      FUN_100065c4(local_8,param_1,param_3,5);
    }
  }
  else {
    FUN_100065c4(local_8,param_1,param_3 >> 1,7);
    FUN_100065c4(local_8,param_1,param_3 >> 1,8);
  }
  return;
}
