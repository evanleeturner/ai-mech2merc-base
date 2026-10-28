/* SPDX-License-Identifier: MIT */
/* mercsw 1004c4b2 */
/* mercsw 1004c4b2: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7);
undefined __cdecl FUN_10006b9a(int param_1);
int __cdecl FUN_10003d60(int param_1, int param_2);
int __cdecl FUN_10006b20(int param_1);
int __cdecl FUN_100142b4(int param_1, int param_2, int param_3);

undefined4 __cdecl FUN_1004c4b2(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  FUN_10083a59(*(int *)(param_1 + 0x50) - param_2,*(int *)(param_1 + 0x54) - param_3,
               *(int *)(param_1 + 0x58) - param_4,&local_24,&local_18,&local_14,&local_10);
  local_8 = (int)local_14 / 1000;
  iVar1 = FUN_10006b9a(local_10);
  iVar2 = FUN_10006b9a(local_24);
  iVar1 = FUN_10003d60(iVar2 * 1000,iVar1);
  iVar2 = FUN_10006b9a(local_10);
  iVar3 = FUN_10006b20(local_24);
  iVar2 = FUN_10003d60(iVar3 * 1000,iVar2);
  iVar3 = FUN_10006b20(local_10);
  local_20 = 0;
  while( true ) {
    if (local_8 <= local_20) {
      return 1;
    }
    param_2 = param_2 - iVar1;
    param_3 = param_3 + iVar3 * -1000;
    param_4 = param_4 - iVar2;
    local_1c = FUN_100142b4(param_2,param_3,param_4);
    if ((local_c < local_1c + -1000) || (local_1c + 1000 < local_c)) break;
    local_20 = local_20 + 1;
  }
  return 0;
}
