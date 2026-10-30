/* SPDX-License-Identifier: MIT */
/* mercsw 10034a3b */
/* mercsw 10034a3b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adc20;
extern undefined4 DAT_100adc24;
extern undefined4 DAT_100c6b8c;
extern undefined4 DAT_100c6b90;
extern undefined4 DAT_10114e20;
int __cdecl FixedMul16(int param_1, int param_2);
undefined __cdecl FUN_1003517a(int param_1, int param_2, int param_3, int * param_4);
undefined __cdecl FUN_10016cdd(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10034a3b(undefined4 param_1, undefined4 param_2, int param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  iVar3 = DAT_100adc20;
  piVar1 = *(int **)(DAT_10114e20 + 0xa4);
  iVar2 = FixedMul16(DAT_100c6b8c,(param_3 + 0x168) % 0x168);
  iVar3 = iVar3 - iVar2;
  if (iVar3 < 0) {
    local_8 = FixedMul16(DAT_100c6b8c,0x168);
  }
  else {
    local_8 = FixedMul16(DAT_100c6b8c,0x168);
    local_8 = -local_8;
  }
  local_8 = iVar3 + local_8;
  FUN_1003517a(iVar3,DAT_100adc24,0x19,piVar1);
  FUN_1003517a(local_8,DAT_100adc24,0x19,piVar1);
  if (param_4 != 0) {
    if (param_4 < 0) {
      FUN_10016cdd(piVar1,DAT_100adc20 + param_4,DAT_100adc24 - DAT_100c6b90,-param_4,DAT_100c6b90,
                   0xf);
    }
    else {
      FUN_10016cdd(piVar1,DAT_100adc20,DAT_100adc24 - DAT_100c6b90,param_4,DAT_100c6b90,0xf);
    }
  }
  FUN_1003517a(DAT_100adc20,DAT_100adc24,0x13,piVar1);
  return;
}
