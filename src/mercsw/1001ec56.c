/* SPDX-License-Identifier: MIT */
/* mercsw 1001ec56 */
/* mercsw 1001ec56: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100ab2d4;
undefined4 __cdecl FUN_1001ead0(int param_1, char * param_2, ushort param_3, void * param_4);
undefined4 __cdecl FUN_10071045(undefined4 * param_1, int param_2);
size_t __cdecl FUN_10071107(undefined4 * param_1, void * param_2, size_t param_3);
undefined __stdcall FUN_100710f7(void);

undefined4 __cdecl FUN_1001ec56(int param_1, char * param_2, ushort param_3, void * param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  size_t sVar3;
  
  if (param_3 < 0xf000) {
    uVar1 = FUN_1001ead0(param_1,param_2,param_3,param_4);
  }
  else {
    sVar2 = FUN_10071045(DAT_100ab2d4,param_3 - 0xf000);
    if (sVar2 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    else {
      sVar3 = FUN_10071107(DAT_100ab2d4,param_4,sVar2);
      FUN_100710f7();
      if (sVar3 == sVar2) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}
