/* SPDX-License-Identifier: MIT */
/* mercsw 100297b4 */
/* mercsw 100297b4: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1002a132(int param_1);
int __cdecl FUN_10003d60(int param_1, int param_2);

int __cdecl FUN_100297b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1002a132(param_1);
  iVar2 = (iVar1 >> 0x10) % 0x168;
  if (iVar2 < 0x2e) {
    if (iVar2 < -0x2d) {
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0xfccccccd;
    }
    else {
      iVar2 = FUN_10003d60(0x3333333,((int)((unsigned int)(iVar2) << (0x10))) / 0x2d);
      *(int *)(*(int *)(param_1 + 0x4c) + 0xc) = iVar2;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0x3333333;
  }
  return iVar1;
}
