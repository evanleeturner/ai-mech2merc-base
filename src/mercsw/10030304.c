/* SPDX-License-Identifier: MIT */
/* mercsw 10030304 */
/* mercsw 10030304: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1007c203(int * param_1, undefined * param_2, int param_3);
undefined __cdecl FUN_1007c066(int * param_1, undefined * param_2, int param_3);
undefined __cdecl FUN_10050ecc(int param_1);

void __cdecl FUN_10030304(int * param_1, uint param_2)

{
  if (param_1 != (int *)0x0) {
    FUN_10030304((int *)param_1[2],param_2);
    if ((param_1[0x1b] == 0) || (*(ushort *)(param_1[0x1b] + 0x16) != param_2)) {
      FUN_10030304((int *)param_1[1],param_2);
    }
    else {
      FUN_1007c203((int *)param_1[1],(undefined *)(FUN_10050ecc),param_2);
      FUN_1007c066(param_1,(undefined *)(FUN_10050ecc),param_2);
    }
  }
  return;
}
