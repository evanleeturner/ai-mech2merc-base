/* SPDX-License-Identifier: MIT */
/* mercsw 10062d5f */
/* mercsw 10062d5f: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100a7ba8[];
undefined __cdecl FUN_10062fc4(int param_1);

void __cdecl FUN_10062d5f(int param_1, int param_2)

{
  bool bVar1;
  int *piVar2;
  int local_1c;
  int local_8;
  
  bVar1 = false;
  if (0 < *(int *)(param_1 + 0x3dc)) {
    local_8 = *(int *)(param_1 + 0x3e0);
    for (local_1c = 1; local_1c < 0xe; local_1c = local_1c + 1) {
      local_8 = (local_8 + 1) % 0xe;
      piVar2 = (int *)(*(int *)(param_1 + 0x54) + local_8 * 0x40);
      if (((((-1 < piVar2[1]) && (*piVar2 != -1)) &&
           (piVar2[3] == *(int *)(*(int *)(param_1 + 0x3e0) * 0x40 + 0xc + *(int *)(param_1 + 0x54))
           )) && ((piVar2[2] != -1 && (local_8 != *(int *)(param_1 + 0x3e0))))) &&
         ((DAT_100a7ba8[piVar2[1] * 0x68] & 4) != 0)) {
        bVar1 = true;
        *(int *)(param_1 + 0x3e0) = local_8;
        break;
      }
    }
    if ((!bVar1) && (param_2 != 0)) {
      FUN_10062fc4(param_1);
    }
  }
  return;
}
