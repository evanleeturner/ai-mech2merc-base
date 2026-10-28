/* SPDX-License-Identifier: MIT */
/* mercsw 1007d8c1 */
/* mercsw 1007d8c1: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aafa4;
extern undefined4 DAT_100aafb4;
extern undefined4 DAT_100b6814;
extern undefined4 DAT_100b6818;
extern undefined4 * DAT_100b681c;
extern undefined4 DAT_100b6824;
extern undefined4 DAT_100b6828;
extern undefined4 DAT_100c96b0;
extern undefined4 DAT_100c96bc;
extern undefined4 DAT_100c9ec0;
extern undefined4 DAT_100c9ec4;
extern undefined4 DAT_100c9ec8;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1008072a(int param_1, int param_2);
int __cdecl FUN_1007d2bc(int param_1, int param_2, int param_3);

int __cdecl FUN_1007d8c1(int param_1, int param_2, int param_3, int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *local_28;
  int local_8;
  
  uVar5 = DAT_100c9ec8;
  uVar4 = DAT_100c9ec4;
  uVar3 = DAT_100c9ec0;
  local_8 = DAT_100c96bc;
  uVar2 = DAT_100c96b0;
  bVar1 = false;
  bVar7 = DAT_100aafa4 == 3;
  if ((bVar7) || (DAT_100b6828 != 0)) {
    DAT_100c9ec4 = *(undefined4 *)PTR_DAT_100aaf68;
    DAT_100c9ec8 = *(undefined4 *)(PTR_DAT_100aaf68 + 4);
    DAT_100c9ec0 = *(undefined4 *)(PTR_DAT_100aaf68 + 8);
    DAT_100c96b0 = 0;
  }
  if (((DAT_100b6818 != 0) || (bVar7)) || (DAT_100b6828 != 0)) {
    iVar6 = FUN_1008072a(param_1,param_2);
    iVar6 = (int)(iVar6 * DAT_100b6814 + (iVar6 * DAT_100b6814 >> 0x1f & 0x7fU)) >> 7;
    if (0 < iVar6) {
      local_8 = local_8 + iVar6;
    }
  }
  DAT_100c96b0 = 0;
  if (((0 < DAT_100aafb4) && (!bVar7)) &&
     (local_8 = local_8 - (((int)((unsigned int)(param_4) << (0xb))) / DAT_100aafb4 >> 4), local_8 < 0)) {
    local_8 = 0;
  }
  if (((DAT_100b6824 != 0) && (local_8 < 0x80)) && (!bVar7)) {
    local_28 = DAT_100b681c;
    while ((local_28 != (undefined4 *)0x0 && (!bVar1))) {
      iVar6 = FUN_1007d2bc(param_1,param_2,(int)local_28);
      if (iVar6 != 0) {
        DAT_100c9ec4 = local_28[5];
        DAT_100c9ec8 = local_28[6];
        DAT_100c9ec0 = local_28[7];
        iVar6 = FUN_1008072a(param_1,param_2);
        if ((0 < iVar6) && (local_8 = local_8 + iVar6, 0x7f < local_8)) {
          bVar1 = true;
        }
      }
      local_28 = (undefined4 *)*local_28;
    }
  }
  DAT_100c9ec4 = uVar4;
  DAT_100c9ec8 = uVar5;
  DAT_100c9ec0 = uVar3;
  DAT_100c96b0 = uVar2;
  local_8 = ((param_3 >> 1) * local_8) / 0x440;
  if (local_8 < 1) {
    local_8 = 0;
  }
  else if (0xf < local_8) {
    local_8 = 0xf;
  }
  return local_8;
}
