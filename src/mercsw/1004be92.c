/* SPDX-License-Identifier: MIT */
/* mercsw 1004be92 */
/* mercsw 1004be92: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a9854;
extern undefined DAT_101f26f0[];
extern undefined DAT_101f2704[];
extern undefined DAT_101f2708[];
extern undefined DAT_101f2714[];
int __cdecl FUN_1007be21(int * param_1, undefined4 param_2);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1007bf28(int param_1);
undefined __cdecl FUN_1002fbc0(int * param_1);

void __cdecl FUN_1004be92(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_8;
  
  local_8 = 0;
  if (param_4 == 0) {
    param_4 = 0xff;
  }
  local_14 = 0;
  while ((local_14 < 0xff && (local_8 < param_4))) {
    iVar2 = local_14 * 0x2c;
    if (((*(int *)(DAT_101f2708 + iVar2) == 0) && (*(int *)(DAT_101f2714 + iVar2) == 0xb)) &&
       (*(int *)(DAT_101f26f0 + iVar2) != 0)) {
      piVar1 = *(int **)(DAT_101f26f0 + iVar2);
      iVar3 = FUN_1007be21(piVar1,1);
      if (iVar3 != -1) {
        *(undefined4 *)(DAT_101f2708 + iVar2) = 1;
        *(undefined4 *)(DAT_101f2704 + iVar2) = DAT_100a9854;
        FUN_1002f37a((int)piVar1,param_1,param_2,param_3);
        FUN_1007bf28(iVar3);
        FUN_1002fbc0(piVar1);
        local_8 = local_8 + 1;
      }
    }
    local_14 = local_14 + 1;
  }
  return;
}
