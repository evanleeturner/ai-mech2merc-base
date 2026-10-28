/* SPDX-License-Identifier: MIT */
/* mercsw 1001d6b2 */
/* mercsw 1001d6b2: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
int __cdecl FUN_1001c1a3(int param_1);

int __cdecl FUN_1001d6b2(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = 0x54;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_10 = 0xd0;
  }
  for (local_8 = *(int *)(param_1 + 0x1c); local_8 != 0; local_8 = *(int *)(local_8 + 0xc)) {
    local_10 = local_10 + 0x18;
    local_14 = (int)*(short *)(local_8 + 4);
    while( true ) {
      if (local_14 == 0) break;
      local_10 = local_10 + 0x44;
      local_14 = local_14 + -1;
    }
    local_18 = *(int *)(local_8 + 8) + local_8;
    local_14 = (int)*(short *)(local_8 + 6);
    while( true ) {
      if (local_14 == 0) break;
      local_10 = (uint)*(ushort *)(local_18 + 2) + local_10 + 0x24;
      local_18 = local_18 + 0x24;
      local_14 = local_14 + -1;
    }
  }
  iVar1 = FUN_1001c1a3(param_1);
  return local_10 + iVar1;
}
