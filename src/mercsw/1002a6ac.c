/* SPDX-License-Identifier: MIT */
/* mercsw 1002a6ac */
/* mercsw 1002a6ac: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef034[];
extern undefined DAT_10215688[];
extern undefined DAT_1021568c[];
extern undefined DAT_10215690[];
int __cdecl FUN_1002954c(ushort param_1);
undefined __cdecl FUN_1000dde1(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl FUN_10082490(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002a89b(int param_1, short param_2);

void __cdecl FUN_1002a6ac(int param_1)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  bVar2 = true;
  local_c = FUN_1002954c(*(ushort *)(param_1 + 0x178));
  local_14 = *(uint *)(param_1 + 4);
  local_8 = *(ushort *)(param_1 + 0x178) & 0xff;
  uVar3 = *(ushort *)(param_1 + 0x178) & 0xf00;
  if (uVar3 == 0x100) {
    iVar1 = local_8 * 0x54;
    local_10 = *(int *)(DAT_10215688 + iVar1);
    local_18 = *(undefined4 *)(DAT_1021568c + iVar1);
    local_1c = *(int *)(DAT_10215690 + iVar1);
  }
  else if (uVar3 == 0x200) {
    iVar1 = DAT_100eef40[local_8];
    local_10 = *(int *)(iVar1 + 0x50);
    local_18 = *(undefined4 *)(iVar1 + 0x54);
    local_1c = *(int *)(iVar1 + 0x58);
  }
  else if (uVar3 == 0x400) {
    FUN_1000dde1(*(int *)(DAT_100ef034 + local_8 * 0x40),(undefined4 *)(&local_10),&local_18,(undefined4 *)(&local_1c));
    local_c = 25000;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_10082490(local_14,local_10 - local_c,local_18,local_1c);
    FUN_10082490(local_14,local_10,local_18,local_1c - local_c);
    FUN_10082490(local_14,local_c + local_10,local_18,local_1c);
    FUN_10082490(local_14,local_10,local_18,local_c + local_1c);
    FUN_1002a89b(param_1,0x100);
  }
  return;
}
