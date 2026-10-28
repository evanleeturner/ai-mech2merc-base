/* SPDX-License-Identifier: MIT */
/* mercsw 1004d7d2 */
/* mercsw 1004d7d2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100b9f60;
extern undefined4 DAT_10123120;
extern undefined DAT_10215684[];
extern undefined DAT_10215688[];
extern undefined DAT_1021568c[];
extern undefined DAT_10215690[];
undefined4 __cdecl FUN_1004d20b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5);

undefined4 __cdecl FUN_1004d7d2(int param_1, int param_2)

{
  ushort uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = 0;
  local_c = 0;
  local_10 = 0;
  local_18 = 0;
  local_8 = 0;
  DAT_10123120 = DAT_100b38fc / 0xb5;
  if (((*(char *)(param_1 + 0x128) != '\0') && (*(char *)(param_1 + 0x12a) == '\x01')) &&
     (uVar1 = (ushort)*(byte *)(param_1 + 0x129), (int)(uint)uVar1 < (int)DAT_100b9f60)) {
    local_1c = *(undefined4 *)(DAT_10215688 + (uint)uVar1 * 0x54);
    local_c = *(undefined4 *)(DAT_1021568c + (uint)uVar1 * 0x54);
    local_10 = *(undefined4 *)(DAT_10215690 + (uint)uVar1 * 0x54);
    local_18 = *(undefined4 *)(DAT_10215684 + (uint)uVar1 * 0x54);
    local_8 = 1;
  }
  FUN_1004d20b(param_2,local_1c,local_c,local_10,local_18);
  *(int *)(param_1 + 4) = DAT_10123120;
  *(int *)(param_1 + 0xa1) = DAT_10123120;
  return local_8;
}
