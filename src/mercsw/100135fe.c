/* SPDX-License-Identifier: MIT */
/* mercsw 100135fe */
/* mercsw 100135fe: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa558;
extern undefined4 DAT_100aa55c;
extern undefined4 DAT_100aa560;
extern int DAT_100adf38;
extern undefined4 DAT_100eef40[];
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_1007fc1d(int * param_1, int * param_2);

void __cdecl FUN_100135fe(int param_1, int param_2)

{
  int iVar1;
  int local_8;
  
  if (param_2 != DAT_100adf38) {
    iVar1 = *(int *)(DAT_100eef40[param_2] + 0x20);
    DAT_100aa558 = *(undefined4 *)(param_1 + 2);
    DAT_100aa55c = *(undefined4 *)(param_1 + 6);
    DAT_100aa560 = *(undefined4 *)(param_1 + 10);
    *(undefined4 *)(iVar1 + 0x434) = *(undefined4 *)(param_1 + 0xe);
    *(undefined4 *)(iVar1 + 0x438) = *(undefined4 *)(param_1 + 0x12);
    *(undefined4 *)(iVar1 + 0x43c) = *(undefined4 *)(param_1 + 0x16);
    local_8 = FUN_1000fc30(*(int *)(iVar1 + 0x434),*(int *)(iVar1 + 0x438),*(int *)(iVar1 + 0x43c));
    if (1500000 < local_8) {
      local_8 = 1500000;
    }
    iVar1 = FUN_10011e60(200,local_8,1500000);
    FUN_10003742(0x105,iVar1,0x40,5,0x32);
    FUN_1007fc1d(*(int **)(DAT_100eef40[DAT_100adf38] + 0x20),
                 *(int **)(DAT_100eef40[param_2] + 0x20));
  }
  return;
}
