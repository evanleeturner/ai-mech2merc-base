/* SPDX-License-Identifier: MIT */
/* mercsw 10036142 */
/* mercsw 10036142: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100b38d8;
extern undefined4 DAT_100eef40[];
undefined4 __stdcall FUN_1002c39a(void);
int __cdecl FUN_1002ab38(int param_1);

int __cdecl FUN_10036142(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_10;
  
  iVar1 = FUN_1002c39a();
  if ((iVar1 + -1 < param_1) && (param_1 != 4)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  if (local_10 != 0) {
    uVar2 = FUN_1002ab38(param_1);
    if ((uVar2 < DAT_100b38d8) && (*(short *)(DAT_100eef40[uVar2] + 0x176) != 0xc)) {
      local_10 = 1;
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}
