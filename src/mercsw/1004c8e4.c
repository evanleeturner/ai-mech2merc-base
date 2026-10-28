/* SPDX-License-Identifier: MIT */
/* mercsw 1004c8e4 */
/* mercsw 1004c8e4: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10067af1(int * param_1);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_1002fbc0(int * param_1);

void __cdecl FUN_1004c8e4(int * param_1)

{
  if (param_1 != (int *)0x0) {
    param_1[0xf1] = 0;
    FUN_10067af1(param_1 + 1);
    FUN_10067af1(param_1 + 5);
    if (param_1[0xe5] != 0) {
      FUN_1002f668(param_1[0xe5],param_1[7],0,0,0);
    }
    if (param_1[0xe4] != 0) {
      *(undefined4 *)(*param_1 + 0x68) = 0;
      *(int *)(*param_1 + 0x6c) = param_1[3];
      *(undefined4 *)(*param_1 + 0x70) = 0;
      FUN_1002f668(param_1[0xe4],*(int *)(*param_1 + 0x68),*(int *)(*param_1 + 0x6c),
                   *(int *)(*param_1 + 0x70),0);
    }
    FUN_1002fbc0(*(int **)(*param_1 + 0x40));
  }
  return;
}
