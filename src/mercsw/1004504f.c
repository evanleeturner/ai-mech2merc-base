/* SPDX-License-Identifier: MIT */
/* mercsw 1004504f */
/* mercsw 1004504f: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100eef40[];
int __cdecl FUN_10044761(int param_1, short param_2);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_10051f43(int param_1);

int __cdecl FUN_1004504f(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  iVar3 = DAT_100eef40[*(ushort *)(param_1 + 0x17a) & 0xff];
  iVar4 = 0x2d0000;
  uVar2 = FUN_10044761(iVar3,(ushort)*(undefined4 *)(param_1 + 4) | 0x200);
  iVar4 = FUN_10002570(uVar2,iVar4);
  local_10 = ((int)((unsigned int)(iVar4) + (unsigned int)(0x8000))) >> 0x10;
  if (7 < local_10) {
    local_10 = 0;
  }
  if (((local_10 == 0) || (local_10 == 1)) || (local_10 == 7)) {
    if (local_10 == 0) {
      iVar3 = FUN_10051f43(2);
      if (iVar3 == 0) {
        local_10 = 6;
      }
      else {
        local_10 = 2;
      }
      if (*(char *)(local_10 + 0x1f6 + param_1) != '\0') {
        if (local_10 == 2) {
          local_10 = 6;
        }
        else {
          local_10 = 2;
        }
      }
    }
    if (local_10 == 1) {
      local_10 = 3;
    }
    if (local_10 == 7) {
      local_10 = 5;
    }
  }
  else {
    bVar1 = false;
    if (local_10 < 5) {
      local_c = 2;
      while ((local_c < 5 && (!bVar1))) {
        if (*(char *)(local_c + 0x1f6 + iVar3) == '\0') {
          bVar1 = true;
        }
        local_c = local_c + 1;
      }
      local_c = local_c + -1;
    }
    else {
      local_c = 6;
      while ((3 < local_c && (!bVar1))) {
        if (*(char *)(local_c + 0x1f6 + iVar3) == '\0') {
          bVar1 = true;
        }
        local_c = local_c + -1;
      }
      local_c = local_c + 1;
    }
    local_10 = local_c;
  }
  return local_10 * 2;
}
