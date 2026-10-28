/* SPDX-License-Identifier: MIT */
/* mercsw 10062fc4 */
/* mercsw 10062fc4: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100a7ba8[];

void __cdecl FUN_10062fc4(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_20;
  int local_1c;
  
  bVar3 = false;
  if (*(int *)(param_1 + 0x3dc) < 1) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x3e0) * 0x40 + 0xc + *(int *)(param_1 + 0x54));
  local_20 = iVar1;
  do {
    local_20 = (local_20 + 1) % 0xe;
    if (local_20 == iVar1) {
      return;
    }
    if (bVar3) {
      return;
    }
    for (local_1c = 0; local_1c < 0xe; local_1c = local_1c + 1) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 4 + local_1c * 0x40);
      if ((((-1 < iVar2) && (*(int *)(*(int *)(param_1 + 0x54) + local_1c * 0x40) != -1)) &&
          (*(int *)(*(int *)(param_1 + 0x54) + 0xc + local_1c * 0x40) == local_20)) &&
         ((*(int *)(*(int *)(param_1 + 0x54) + 8 + local_1c * 0x40) != -1 &&
          ((DAT_100a7ba8[iVar2 * 0x68] & 4) != 0)))) {
        bVar3 = true;
        *(int *)(param_1 + 0x3e0) = local_1c;
        break;
      }
    }
  } while( true );
}
