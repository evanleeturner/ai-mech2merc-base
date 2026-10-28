/* SPDX-License-Identifier: MIT */
/* mercsw 10072797 */
/* mercsw 10072797: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b4e60;
extern undefined4 DAT_100b4e64;
extern int DAT_100b4e68;
extern undefined DAT_100ee9d0[];
extern undefined DAT_100ee9d4[];
undefined4 __cdecl FUN_100473bb(short * param_1);

undefined4 __cdecl FUN_10072797(short * param_1)

{
  short sVar1;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  sVar1 = *param_1;
  for (local_c = 0;
      (local_c < DAT_100b4e68 && (*(int *)(DAT_100ee9d0 + local_c * 8) != (int)sVar1));
      local_c = local_c + 1) {
  }
  if (local_c < DAT_100b4e68) {
    DAT_100b4e64 = *(int *)(DAT_100ee9d4 + local_c * 8);
    local_8 = 0xffffffff;
  }
  else if (DAT_100b4e68 < 0x3c) {
    if (0 < DAT_100b4e60) {
      DAT_100b4e64 = DAT_100b4e60 + 1;
    }
    local_8 = FUN_100473bb(param_1);
    *(int *)(DAT_100ee9d4 + DAT_100b4e68 * 8) = DAT_100b4e64;
    *(int *)(DAT_100ee9d0 + DAT_100b4e68 * 8) = (int)sVar1;
    DAT_100b4e68 = DAT_100b4e68 + 1;
  }
  return local_8;
}
