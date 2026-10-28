/* SPDX-License-Identifier: MIT */
/* mw2shell 100319b0 */
/* mw2shell 100319b0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 * __cdecl FUN_1000a180(int param_1);
undefined __cdecl FUN_1000a890(int param_1);

void __cdecl FUN_100319b0(int param_1)

{
  byte *pbVar1;
  
  if (*(int *)(param_1 + 0x84f) == 1) {
    *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + -0x32;
    FUN_1000a180(0x254f);
    pbVar1 = (byte *)(*(int *)(param_1 + 0x364) * 0x12 + 0x771 + param_1);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  FUN_1000a890(param_1);
  return;
}
