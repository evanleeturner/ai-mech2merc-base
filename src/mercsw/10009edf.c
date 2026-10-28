/* SPDX-License-Identifier: MIT */
/* mercsw 10009edf */
/* mercsw 10009edf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7b30[];
extern undefined4 DAT_100aafb0;
extern undefined4 DAT_10215658;
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined4 __cdecl FUN_1004d60d(int param_1);

uint __cdecl FUN_10009edf(ushort * param_1, int param_2, uint param_3)

{
  int iVar1;
  byte bVar3;
  int iVar2;
  ushort uVar4;
  uint local_14;
  uint local_8;
  
  if (((*(int *)(DAT_100a7b30 + DAT_10215658 * 4) == 0) || (param_1 == (ushort *)0x0)) ||
     (param_2 == 0)) {
    local_14 = 0;
  }
  else {
    local_14 = *param_1 & 0xf000;
    if ((local_14 != 0x8000) && (local_14 != 0x9000)) {
      iVar1 = *(int *)(*(int *)(DAT_100a7b30 + DAT_10215658 * 4) + 0x74);
      local_14 = 0;
      if (DAT_100aafb0 != 0) {
        local_14 = 0xf0;
      }
      uVar4 = *(ushort *)(*(int *)(param_1 + 0x10) + 2) & 0xf00;
      bVar3 = (byte)(param_3 >> 8);
      if (uVar4 < 0x201) {
        if (uVar4 == 0x200) {
          iVar2 = FUN_1004d60d((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x14));
          return local_14 | *(uint *)(iVar1 + 0xc + iVar2 * 4);
        }
        if (uVar4 == 0x100) {
          iVar2 = FUN_1004d5e3((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x14));
          return local_14 | *(uint *)(iVar1 + iVar2 * 4);
        }
      }
      else {
        if (uVar4 == 0x400) {
          return local_14 | *(uint *)(iVar1 + 0x18);
        }
        if (uVar4 == 0x800) {
          if ((bVar3 & 0xf0) == 0x30) {
            local_8 = *(uint *)(iVar1 + 0x28);
          }
          else {
            local_8 = (param_3 & 0xf00) >> 4;
          }
          return local_8 | 0x4000;
        }
      }
      switch(*(ushort *)(*(int *)(param_1 + 0x10) + 2) & 0xf0) {
      case 0x10:
      case 0x20:
      case 0x60:
        local_14 = param_3;
        break;
      default:
        if ((bVar3 & 0xf0) == 0x30) {
          local_8 = *(uint *)(iVar1 + 0x28);
        }
        else {
          local_8 = (param_3 & 0xf00) >> 4;
        }
        local_14 = local_8 | 0x4000;
        break;
      case 0x40:
        local_14 = local_14 | *(uint *)(iVar1 + 0x1c);
        break;
      case 0x50:
        local_14 = local_14 | *(uint *)(iVar1 + 0x20);
        break;
      case 0x80:
        local_14 = local_14 | *(uint *)(iVar1 + 0x24);
      }
    }
  }
  return local_14;
}
