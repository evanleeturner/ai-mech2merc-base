/* SPDX-License-Identifier: MIT */
/* mercsw 10013817 */
/* mercsw 10013817: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1c0;
extern undefined2 * DAT_100aa1e8;
extern undefined2 DAT_100aa2bc;
extern undefined DAT_100ef030[];
extern undefined4 DAT_101eb51c;
undefined __cdecl FUN_10006e00(undefined4 param_1, undefined4 param_2);

void __stdcall FUN_10013817(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  byte local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  puVar1 = DAT_100aa1e8;
  local_10 = 0;
  local_14 = 0;
  puVar2 = (undefined4 *)(DAT_100aa1e8 + 1);
  *DAT_100aa1e8 = DAT_100aa2bc;
  *puVar2 = DAT_100aa1c0;
  local_8 = (byte *)(puVar1 + 3);
  for (local_c = 0; local_c < 0xfe; local_c = local_c + 1) {
    local_14 = (int)((unsigned int)(local_14) << (1));
    if ((*(ushort *)(DAT_100ef030 + local_c * 0x40) & 4) != 0) {
      local_14 = local_14 | 1;
    }
    local_10 = local_10 + 1;
    if (local_10 == 8) {
      local_10 = 0;
      *local_8 = local_14;
      local_8 = local_8 + 1;
      local_14 = 0;
    }
  }
  FUN_10006e00((undefined4)(DAT_100aa1e8),DAT_101eb51c);
  return;
}
