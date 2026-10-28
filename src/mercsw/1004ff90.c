/* SPDX-License-Identifier: MIT */
/* mercsw 1004ff90 */
/* mercsw 1004ff90: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ad6c0;
extern int DAT_100b0864;
extern undefined DAT_101155c0[];
undefined4 __stdcall FUN_10030398(void);
int __cdecl FUN_100814bb(int param_1, int param_2);
undefined4 __cdecl FUN_100504ef(int param_1, int param_2, int * param_3);
undefined __cdecl FUN_100509fd(int param_1, int param_2);

undefined4 __cdecl FUN_1004ff90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  for (local_10 = 0; local_10 < DAT_100b0864; local_10 = local_10 + 1) {
    if (*(int *)(DAT_101155c0 + local_10 * 0x48) == *(int *)(param_1 + 4)) {
      local_c = local_c + 1;
    }
  }
  iVar3 = DAT_100ad6c0;
  iVar1 = FUN_10030398();
  local_8 = (int *)FUN_100814bb(iVar1 * local_c & 0xffff,iVar3);
  if (local_8 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    for (local_10 = 0; local_10 < DAT_100b0864; local_10 = local_10 + 1) {
      if (*(int *)(DAT_101155c0 + local_10 * 0x48) == *(int *)(param_1 + 4)) {
        FUN_100504ef(local_10,*(int *)(param_1 + 0x18),local_8);
        iVar3 = FUN_10030398();
        local_8 = (int *)((int)local_8 + iVar3);
        FUN_100509fd(local_10,*(int *)(param_1 + 0x18));
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
