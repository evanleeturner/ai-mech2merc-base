/* SPDX-License-Identifier: MIT */
/* mercsw 1002fa9c */
/* mercsw 1002fa9c: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_100895ca(int * param_1, int * param_2, undefined4 * param_3);
undefined __cdecl FUN_1001b72b(ushort * param_1, int * param_2);

void __cdecl FUN_1002fa9c(int * param_1)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_8;
  
  param_1[0x1d] = param_1[0x1d] & 0xfffffffe;
  if (*param_1 == 0) {
    piVar3 = param_1 + 3;
    piVar4 = param_1 + 0xf;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
  }
  else {
    FUN_100895ca((int *)(*param_1 + 0x3c),param_1 + 3,(undefined4 *)(param_1 + 0xf));
  }
  puVar1 = (ushort *)param_1[0x1b];
  if (puVar1 != (ushort *)0x0) {
    FUN_1001b72b(puVar1,param_1 + 0xf);
    *(int **)(puVar1 + 0xc) = param_1;
  }
  for (local_8 = (int *)param_1[1]; local_8 != (int *)0x0; local_8 = (int *)local_8[2]) {
    FUN_1002fa9c(local_8);
  }
  return;
}
