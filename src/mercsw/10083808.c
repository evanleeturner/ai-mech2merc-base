/* SPDX-License-Identifier: MIT */
/* mercsw 10083808 */
/* mercsw 10083808: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef034[];
undefined4 __cdecl FUN_1000dd4e(int param_1);

undefined4 __stdcall FUN_10083808(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_10;
  
  local_10 = 0;
  uVar1 = *(uint *)(DAT_100eef40[DAT_100adf38] + 0xdc) & 0xf00;
  uVar2 = *(uint *)(DAT_100eef40[DAT_100adf38] + 0xdc) & 0xff;
  if (uVar1 == 0x200) {
    local_10 = *(undefined4 *)(DAT_100eef40[uVar2] + 0x40);
  }
  else if (uVar1 == 0x400) {
    local_10 = FUN_1000dd4e(*(int *)(DAT_100ef034 + uVar2 * 0x40));
  }
  return local_10;
}
