/* SPDX-License-Identifier: MIT */
/* mercsw 10014db6 */
/* mercsw 10014db6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa540;
extern undefined4 DAT_100aa544;
extern undefined4 DAT_100aa548;
int __cdecl FUN_10015b30(int param_1, int param_2);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined4 __cdecl FUN_10015009(int param_1, int param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_100266c9(int * param_1, int param_2, int param_3, int param_4);

undefined4 __cdecl FUN_10014db6(int param_1, int param_2, int * param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = FUN_10015b30(iVar1,param_3[9]);
  iVar5 = FUN_10015b30(iVar2,param_3[10]);
  iVar6 = FUN_10015b30(iVar3,param_3[0xb]);
  iVar6 = iVar4 + iVar5 + iVar6;
  if (iVar6 < 0) {
    iVar4 = (uint)*(byte *)(*(int *)(param_1 + 4) + param_1) * 0x44 + param_2;
    iVar5 = FUN_10015b30(iVar1,*(int *)(iVar4 + 0xc));
    iVar8 = FUN_10015b30(iVar2,*(int *)(iVar4 + 0x10));
    iVar4 = FUN_10015b30(iVar3,*(int *)(iVar4 + 0x14));
    iVar9 = FUN_10015b30(iVar2,param_3[1]);
    iVar10 = FUN_10015b30(iVar1,*param_3);
    iVar11 = FUN_10015b30(iVar3,param_3[2]);
    iVar4 = (iVar9 + iVar10 + iVar11) - (iVar5 + iVar8 + iVar4);
    if (iVar4 < 1) {
      uVar7 = 0;
    }
    else if (-(iVar4 / iVar6) < 0x8000) {
      iVar4 = FUN_10002570(-iVar4,iVar6);
      if ((iVar4 < 1) || (param_3[0xc] < iVar4)) {
        uVar7 = 0;
      }
      else {
        iVar8 = FUN_10003d60(param_3[9],iVar4);
        iVar5 = *param_3;
        iVar9 = FUN_10003d60(param_3[10],iVar4);
        iVar6 = param_3[1];
        iVar10 = FUN_10003d60(param_3[0xb],iVar4);
        iVar4 = param_3[2];
        iVar11 = FUN_10015009(param_1,param_2,iVar5 + iVar8,iVar6 + iVar9,iVar4 + iVar10);
        if (iVar11 == 0) {
          uVar7 = 0;
        }
        else {
          FUN_100266c9(param_3,iVar5 + iVar8,iVar6 + iVar9,iVar4 + iVar10);
          DAT_100aa540 = iVar1 >> 0xd;
          DAT_100aa544 = iVar2 >> 0xd;
          DAT_100aa548 = iVar3 >> 0xd;
          uVar7 = 1;
        }
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
