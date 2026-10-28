/* SPDX-License-Identifier: MIT */
/* mercsw 10063e41 */
/* mercsw 10063e41: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b3788;
int __cdecl FUN_10067af1(int * param_1);
undefined __cdecl FUN_10063fbd(int param_1, int * param_2);
undefined4 __cdecl FUN_10014768(int * param_1, int * param_2, uint param_3);
undefined4 __cdecl FUN_1002634e(int param_1);

int __cdecl FUN_10063e41(int param_1)

{
  int iVar1;
  int local_4c [14];
  int local_14;
  int local_10;
  ushort local_c;
  int local_8;
  
  local_10 = 0;
  FUN_10067af1((int *)(param_1 + 0xa8));
  FUN_10063fbd(param_1,local_4c);
  local_8 = FUN_10014768(local_4c,&local_10,*(uint *)(param_1 + 4));
  if (((local_8 != 0) && (local_10 != 0)) &&
     ((local_c = *(ushort *)(local_10 + 2), (local_c & 0x100) != 0 || ((local_c & 0x200) != 0)))) {
    local_14 = FUN_1002634e((int)local_4c);
    iVar1 = local_14;
    if (local_14 < 0x7d1) {
      iVar1 = 2000;
    }
    *(int *)(param_1 + 0xb0) = iVar1;
    if ((undefined4)(*(int *)(param_1 + 4)) == DAT_100adf38) {
      DAT_100b3788 = local_10;
    }
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xb0);
  FUN_10067af1((int *)(param_1 + 0x98));
  return local_10;
}
