/* SPDX-License-Identifier: MIT */
/* mw2shell 10040af0 */
/* mw2shell 10040af0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __fastcall FUN_100501c0(int * param_1);
undefined __fastcall FUN_1005f890(void * param_1);
undefined __fastcall FUN_10050100(int * param_1);
undefined __fastcall FUN_1005f810(void * param_1);

undefined4 __cdecl FUN_10040af0(int param_1, int param_2, int param_3)

{
  undefined4 *puVar1;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 4);
    do {
      FUN_100501c0((int *)puVar1[-1]);
      if ((void *)*puVar1 != (void *)0x0) {
        FUN_1005f890((void *)*puVar1);
      }
      puVar1 = puVar1 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar1 = (undefined4 *)(param_2 * 0x2c + param_1);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10050100((int *)*puVar1);
    if ((void *)puVar1[1] != (void *)0x0) {
      FUN_1005f810((void *)puVar1[1]);
    }
  }
  return *puVar1;
}
