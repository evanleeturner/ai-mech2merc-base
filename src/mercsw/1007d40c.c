/* SPDX-License-Identifier: MIT */
/* mercsw 1007d40c */
/* mercsw 1007d40c: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aae80;
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
extern int DAT_10115160;
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_100807b5(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
int __cdecl FUN_1007d2bc(int param_1, int param_2, int param_3);

void __cdecl FUN_1007d40c(int param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *local_28;
  int local_1c;
  int local_c;
  
  uVar5 = DAT_100c9ec8;
  uVar4 = DAT_100c9ec4;
  uVar3 = DAT_100c9ec0;
  uVar2 = DAT_100c96b0;
  if (((param_3 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    bVar7 = DAT_100aafa4 == 3;
    if ((bVar7) || (DAT_100b6828 != 0)) {
      DAT_100c9ec4 = *(uint *)PTR_DAT_100aaf68;
      DAT_100c9ec8 = *(uint *)(PTR_DAT_100aaf68 + 4);
      DAT_100c9ec0 = *(uint *)(PTR_DAT_100aaf68 + 8);
      DAT_100c96b0 = 0;
    }
    for (local_1c = 0; local_1c < DAT_10115160; local_1c = local_1c + 1) {
      piVar1 = *(int **)(param_3 + local_1c * 4);
      if ((*(byte *)((int)piVar1 + 0x1d) & 2) == 0) {
        piVar1[0xb] = DAT_100c96bc;
        if (((DAT_100b6818 != 0) || (bVar7)) || (DAT_100b6828 != 0)) {
          iVar6 = FUN_100807b5(*piVar1,piVar1[1],piVar1[2],piVar1[8],piVar1[9],piVar1[10]);
          iVar6 = (int)(iVar6 * DAT_100b6814 + (iVar6 * DAT_100b6814 >> 0x1f & 0x7fU)) >> 7;
          if (0 < iVar6) {
            piVar1[0xb] = piVar1[0xb] + iVar6;
          }
        }
        if (((0 < DAT_100aafb4) && (!bVar7)) &&
           (piVar1[0xb] = piVar1[0xb] - (((int)((unsigned int)(piVar1[2]) << (0xb))) / DAT_100aafb4 >> 4), piVar1[0xb] < 0))
        {
          piVar1[0xb] = 0;
        }
      }
    }
    DAT_100c96b0 = 1;
    if (((DAT_100b6824 != 0) && (!bVar7)) && (DAT_100aae80 == 0)) {
      for (local_28 = DAT_100b681c; local_28 != (undefined4 *)0x0;
          local_28 = (undefined4 *)*local_28) {
        iVar6 = FUN_1007d2bc(param_1,param_2,(int)local_28);
        if (iVar6 != 0) {
          iVar6 = (uint)*(byte *)(*(int *)(param_1 + 4) + param_1) * 0x44 + param_2;
          DAT_100c9ec4 = local_28[5] - *(int *)(iVar6 + 0xc);
          DAT_100c9ec8 = local_28[6] - *(int *)(iVar6 + 0x10);
          DAT_100c9ec0 = local_28[7] - *(int *)(iVar6 + 0x14);
          if (((DAT_100c9ec4 == 0) && (DAT_100c9ec8 == 0)) && (DAT_100c9ec0 == 0)) {
            bVar7 = true;
          }
          else {
            if ((((int)((DAT_100c9ec4 ^ (int)DAT_100c9ec4 >> 0x1f) - ((int)DAT_100c9ec4 >> 0x1f)) <
                  0xffff) &&
                ((int)((DAT_100c9ec8 ^ (int)DAT_100c9ec8 >> 0x1f) - ((int)DAT_100c9ec8 >> 0x1f)) <
                 0xffff)) &&
               ((int)((DAT_100c9ec0 ^ (int)DAT_100c9ec0 >> 0x1f) - ((int)DAT_100c9ec0 >> 0x1f)) <
                0xffff)) {
              DAT_100c9ec4 = DAT_100c9ec4 * 0x10000;
              DAT_100c9ec8 = DAT_100c9ec8 * 0x10000;
              DAT_100c9ec0 = DAT_100c9ec0 * 0x10000;
            }
            bVar7 = false;
          }
          for (local_1c = 0; local_1c < DAT_10115160; local_1c = local_1c + 1) {
            piVar1 = *(int **)(param_3 + local_1c * 4);
            if (((*(byte *)((int)piVar1 + 0x1d) & 2) == 0) && (piVar1[0xb] < 0x80)) {
              if (bVar7) {
                local_c = 0x80;
              }
              else {
                local_c = FUN_100807b5(*piVar1,piVar1[1],piVar1[2],piVar1[8],piVar1[9],piVar1[10]);
              }
              if ((0 < local_c) && (piVar1[0xb] = piVar1[0xb] + local_c, 0x80 < piVar1[0xb])) {
                piVar1[0xb] = 0x80;
              }
            }
          }
        }
      }
    }
    DAT_100c96b0 = uVar2;
    DAT_100c9ec0 = uVar3;
    DAT_100c9ec4 = uVar4;
    DAT_100c9ec8 = uVar5;
    for (local_1c = 0; local_1c < DAT_10115160; local_1c = local_1c + 1) {
      iVar6 = *(int *)(param_3 + local_1c * 4);
      if ((*(byte *)(iVar6 + 0x1d) & 2) == 0) {
        *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) * (param_4 >> 1);
        *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) / 0x440;
        if (*(int *)(iVar6 + 0x2c) < 1) {
          *(undefined4 *)(iVar6 + 0x2c) = 0;
        }
        else if (0xf < *(int *)(iVar6 + 0x2c)) {
          *(undefined4 *)(iVar6 + 0x2c) = 0xf;
        }
        *(byte *)(iVar6 + 0x1d) = *(byte *)(iVar6 + 0x1d) | 2;
      }
    }
  }
  return;
}
