/* SPDX-License-Identifier: MIT */
/* mercsw 10023258 */
/* mercsw 10023258: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100a7ba0[];
extern undefined DAT_100a7bc8[];
extern undefined DAT_100a7be4[];
extern undefined4 DAT_100adf38;
undefined4 __cdecl FUN_1004c610(int param_1, int param_2);
undefined4 __cdecl FUN_1006312b(int param_1, int param_2);
undefined __cdecl FUN_10062d5f(int param_1, int param_2);

int __cdecl FUN_10023258(int param_1, undefined4 * param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_1c;
  int local_18;
  short local_14;
  short local_8;
  
  iVar2 = *(int *)(param_1 + 0x20);
  local_8 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    if (*(int *)(iVar2 + 0x3dc) <= (int)local_14) {
LAB_10023428:
      if (local_24 == 0) {
        FUN_10062d5f(iVar2,1);
      }
      else {
        **(int **)(param_1 + 0x4c) = **(int **)(param_1 + 0x4c) + local_18;
        if (local_8 == 0) {
          FUN_1006312b(iVar2,1);
        }
        else {
          *(int *)(iVar2 + 0x3e0) = local_8 + -1;
        }
      }
      if ((local_24 != 0) && (local_8 != 0)) {
        *param_2 = 1;
      }
      return local_24;
    }
    iVar4 = local_14 * 0x40 + *(int *)(iVar2 + 0x54);
    sVar3 = (short)*(undefined4 *)(iVar4 + 4);
    iVar1 = sVar3 * 0x68;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    if (((((*(int *)(param_1 + 0xdc) != -1) && ((*(byte *)(param_1 + 0xdd) & 0x10) == 0)) &&
         (iVar5 = FUN_1004c610(param_1,(int)(DAT_100a7ba0 + iVar1)), iVar5 == 2)) &&
        ((*(int *)(iVar4 + 0x20) == 9999 ||
         ((*(int *)(iVar4 + 0x20) < *(int *)(iVar2 + 0x60) &&
          (*(int *)(iVar2 + 0x66 + *(int *)(iVar4 + 0x20) * 0x3a) != 0)))))) &&
       (*(int *)(iVar4 + 8) != -1)) {
      if (((undefined4)(*(int *)(param_1 + 4)) != DAT_100adf38) &&
         (*(int *)(param_1 + 0x1b0) <=
          ((int)(((unsigned int)(*(int *)(DAT_100a7be4 + iVar1)) + (unsigned int)(*(int *)(iVar2 + 0x3cc))) + (unsigned int)(local_1c))) >> 0x10)) {
        local_24 = 0;
        goto LAB_10023428;
      }
      local_24 = 1;
      *(undefined4 *)(iVar4 + 0xc) = 1;
      local_1c = local_1c + *(int *)(DAT_100a7be4 + iVar1);
      if (((local_8 == 0) && (*(int *)(DAT_100a7bc8 + iVar1) != 0)) && (*(int *)(iVar4 + 8) == 1))
      {
        local_8 = local_14 + 1;
      }
      if (sVar3 == 0) {
        local_18 = 0x1e000;
      }
      if (sVar3 == 4) {
        local_18 = 0x3c000;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
