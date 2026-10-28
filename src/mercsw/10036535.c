/* SPDX-License-Identifier: MIT */
/* mercsw 10036535 */
/* mercsw 10036535: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100b38d8;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef044[];
extern undefined DAT_10215698[];
int __cdecl FUN_1002ab38(int param_1);

undefined * __cdecl FUN_10036535(undefined4 param_1, int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = FUN_1002ab38(*(int *)(param_2 + 0xc));
  if (uVar3 < DAT_100b38d8) {
    if (*(short *)(DAT_100eef40[uVar3] + 0x176) == 5) {
      puVar4 = (undefined *)0x0;
    }
    else {
      uVar2 = *(ushort *)(DAT_100eef40[uVar3] + 0x17a);
      uVar1 = uVar2 & 0xff;
      uVar2 = uVar2 & 0xf00;
      if (uVar2 == 0x100) {
        puVar4 = DAT_10215698 + (short)uVar1 * 0x54;
      }
      else if (uVar2 == 0x200) {
        puVar4 = (undefined *)(DAT_100eef40[(short)uVar1] + 0x110);
      }
      else if (uVar2 == 0x400) {
        puVar4 = DAT_100ef044 + (short)uVar1 * 0x40;
      }
      else {
        puVar4 = (undefined *)0x0;
      }
    }
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  return puVar4;
}
