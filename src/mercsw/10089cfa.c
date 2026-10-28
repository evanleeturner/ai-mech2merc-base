/* SPDX-License-Identifier: MIT */
/* mercsw 10089cfa */
/* mercsw 10089cfa: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef unsigned long long ulonglong;
ulonglong __fastcall FUN_10035bb7(undefined4 param_1);
int __cdecl FUN_10006d19(uint param_1);
undefined __stdcall FUN_10006d3e(void);
int __cdecl FUN_10006bbb(uint param_1);

void __thiscall FUN_10089cfa(void * this, int param_1, int * param_2, undefined4 * param_3, undefined4 * param_4)

{
  ulonglong uVar1;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x14) < 0x1ff7ceda) && (-0x1ff7ceda < *(int *)(param_1 + 0x14))) {
    local_8 = FUN_10006bbb(*(uint *)(param_1 + 0x14));
    local_8 = -local_8;
  }
  else {
    uVar1 = FUN_10035bb7((undefined4)(this));
    if ((int)(uint)uVar1 < 0x1e8481) {
      if (*(int *)(param_1 + 0x14) < 0) {
        local_14 = 0x5a0000;
      }
      else {
        local_14 = 0xffa60000;
      }
      local_8 = 0;
      local_c = FUN_10006d3e();
      goto LAB_10089e01;
    }
    local_8 = FUN_10006d19((uint)uVar1);
    if (*(int *)(param_1 + 0x14) < 0) {
      local_8 = -local_8;
    }
  }
  local_14 = FUN_10006d3e();
  local_c = FUN_10006d3e();
LAB_10089e01:
  *param_3 = local_14;
  *param_2 = local_8;
  *param_4 = local_c;
  return;
}
