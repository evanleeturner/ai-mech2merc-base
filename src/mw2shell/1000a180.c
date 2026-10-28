/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a180 */
/* mw2shell 1000a180: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10083878[];
extern undefined4 DAT_100839fc;
extern undefined DAT_10083a00[];
extern undefined DAT_10083c70[];

undefined4 * __cdecl FUN_1000a180(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *local_14;
  int local_c;
  
  iVar2 = param_1 / 100;
  local_14 = (undefined4 *)(param_1 / 100);
  iVar4 = param_1 % 100;
  if (0 < param_1) {
    local_14 = (undefined4 *)0x8;
    piVar5 = (int *)(DAT_10083878);
    do {
      local_c = 0xc;
      do {
        iVar6 = *piVar5;
        if (param_1 == iVar6) {
          iVar6 = 0;
        }
        else if ((0 < iVar6) && ((iVar6 < 7000 || (9999 < iVar6)))) {
          if ((iVar6 / 100 == iVar2) && (iVar4 < iVar6 % 100)) {
            iVar6 = iVar6 + -1;
          }
          else if ((param_1 < 7000) && (9999 < iVar6)) {
            if ((iVar6 + -10000) / 100 == param_1) {
              iVar6 = 0;
            }
            else if (((iVar6 + -10000) / 10000 == iVar2) && (iVar4 < (iVar6 / 100) % 100)) {
              iVar6 = iVar6 + -100;
            }
          }
        }
        *piVar5 = iVar6;
        piVar5 = piVar5 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_14 = (undefined4 *)((int)local_14 + -1);
    } while (local_14 != (undefined4 *)0x0);
    local_14 = (undefined4 *)0x0;
    piVar3 = (int *)(DAT_10083a00);
    piVar5 = (int *)(DAT_10083a00);
    do {
      iVar6 = *piVar3;
      if (param_1 == iVar6) {
        iVar6 = -1;
        DAT_100839fc = DAT_100839fc + -1;
      }
      else if ((0 < iVar6) && ((iVar6 < 7000 || (9999 < iVar6)))) {
        if ((iVar6 / 100 == iVar2) && (iVar4 < iVar6 % 100)) {
          iVar6 = iVar6 + -1;
        }
        else if ((param_1 < 7000) && (9999 < iVar6)) {
          if ((iVar6 + -10000) / 100 == param_1) {
            iVar6 = -1;
            DAT_100839fc = DAT_100839fc + -1;
          }
          else if (((iVar6 + -10000) / 10000 == iVar2) && (iVar4 < (iVar6 / 100) % 100)) {
            iVar6 = iVar6 + -100;
          }
        }
      }
      *piVar3 = iVar6;
      piVar7 = piVar5;
      if (iVar6 != -1) {
        iVar1 = piVar3[1];
        *piVar5 = iVar6;
        piVar7 = piVar5 + 2;
        local_14 = (undefined4 *)((int)local_14 + 1);
        piVar5[1] = iVar1;
      }
      piVar3 = piVar3 + 2;
      piVar5 = piVar7;
    } while (piVar3 < (int *)(DAT_10083c70));
    if ((int)local_14 < 0x4e) {
      local_14 = (undefined4 *)(DAT_10083a00 + (int)local_14 * 2);
      do {
        *local_14 = 0xffffffff;
        local_14 = local_14 + 2;
      } while (local_14 < (undefined4 *)(DAT_10083c70));
    }
  }
  return local_14;
}
