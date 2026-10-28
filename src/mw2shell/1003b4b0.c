/* SPDX-License-Identifier: MIT */
/* mw2shell 1003b4b0 */
/* mw2shell 1003b4b0: Ghidra's C, repaired by tools/ghidra_repair.py */
uint __fastcall FUN_10010e00(int param_1);
undefined __fastcall FUN_10010d80(void * param_1);
undefined4 __cdecl FUN_10065b64(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __thiscall FUN_10012f10(void * this, int param_1, int param_2, int param_3, int param_4);
undefined __thiscall FUN_10013380(void * this, int param_1);

void __fastcall FUN_1003b4b0(int * param_1)

{
  uint uVar1;
  
  if (param_1[0xd6] != 0) {
    uVar1 = FUN_10010e00(param_1[0xd6]);
    if ((char)uVar1 == '\0') {
      FUN_10010d80((void *)param_1[0xd6]);
    }
  }
  FUN_10065b64((int *)(param_1[2] + 0x6a),*param_1,0,0x13f,0xef);
  FUN_10012f10((void *)param_1[2],param_1[3],param_1[4],param_1[5],param_1[6]);
  FUN_10013380((void *)param_1[2],0);
  FUN_10013380((void *)param_1[2],1);
  return;
}
