/* SPDX-License-Identifier: MIT */
/* mw2shell 1006808c */
/* mw2shell 1006808c: Ghidra's C, repaired by tools/ghidra_repair.py */
uint __cdecl FUN_10065029(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

uint __cdecl FUN_1006808c(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_30;
  int local_2c;
  int local_28;
  int local_14;
  int local_10;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    uVar8 = FUN_10065029(param_1,param_2 - param_4,param_3 - param_5,param_2 + param_4,
                         param_3 + param_5,0,param_6);
  }
  else {
    piVar1 = (int *)*param_1;
    iVar13 = piVar1[1];
    iVar9 = iVar13 + 1;
    if ((iVar9 == 0 || iVar13 < -1) || (iVar2 = piVar1[2], iVar2 < 0)) {
      return 0xffffffff;
    }
    iVar3 = param_1[1];
    iVar10 = iVar3;
    if (iVar3 < 1) {
      iVar10 = 0;
    }
    iVar4 = param_1[2];
    iVar11 = iVar4;
    if (iVar4 < 1) {
      iVar11 = 0;
    }
    iVar12 = param_1[3];
    if (iVar13 <= param_1[3]) {
      iVar12 = iVar13;
    }
    iVar13 = param_1[4];
    if (iVar2 <= param_1[4]) {
      iVar13 = iVar2;
    }
    if ((iVar12 < iVar10) || (iVar13 < iVar11)) {
      return 0xfffffffe;
    }
    iVar2 = *piVar1;
    uVar7 = (undefined1)param_6;
    iVar3 = param_2 + iVar3;
    iVar4 = param_3 + iVar4;
    local_10 = 0;
    local_14 = param_5;
    iVar5 = param_5 * param_5;
    uVar6 = param_4 * param_4;
    local_28 = 0;
    local_2c = uVar6 * 2 * param_5;
    local_30 = ((uVar6 >> 2) + iVar5) - uVar6 * param_5;
    while (local_28 - local_2c < 0) {
      iVar15 = iVar3 + local_10;
      iVar14 = iVar4 + local_14;
      if ((((iVar10 <= iVar15) && (iVar15 <= iVar12)) && (iVar11 <= iVar14)) && (iVar14 <= iVar13))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      iVar15 = iVar3 + local_10;
      iVar14 = iVar4 - local_14;
      if (((iVar10 <= iVar15) && (iVar15 <= iVar12)) && ((iVar11 <= iVar14 && (iVar14 <= iVar13))))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      iVar15 = iVar3 - local_10;
      iVar14 = iVar4 + local_14;
      if (((iVar10 <= iVar15) && (iVar15 <= iVar12)) && ((iVar11 <= iVar14 && (iVar14 <= iVar13))))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      iVar15 = iVar3 - local_10;
      iVar14 = iVar4 - local_14;
      if ((((iVar10 <= iVar15) && (iVar15 <= iVar12)) && (iVar11 <= iVar14)) && (iVar14 <= iVar13))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      if (-1 < local_30) {
        local_14 = local_14 + -1;
        param_5 = param_5 + -1;
        local_2c = local_2c + uVar6 * -2;
        local_30 = local_30 - local_2c;
      }
      local_10 = local_10 + 1;
      local_28 = local_28 + iVar5 * 2;
      local_30 = local_30 + local_28 + iVar5;
    }
    local_30 = local_30 +
               ((int)(((((int)(uVar6 - iVar5) >> 1) + (uVar6 - iVar5)) - local_28) - local_2c) >> 1)
    ;
    do {
      iVar15 = iVar3 + local_10;
      iVar14 = iVar4 + local_14;
      if (((iVar10 <= iVar15) && (iVar15 <= iVar12)) && ((iVar11 <= iVar14 && (iVar14 <= iVar13))))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      iVar15 = iVar3 + local_10;
      iVar14 = iVar4 - local_14;
      if (((iVar10 <= iVar15) && (iVar15 <= iVar12)) && ((iVar11 <= iVar14 && (iVar14 <= iVar13))))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      iVar15 = iVar3 - local_10;
      iVar14 = iVar4 + local_14;
      if ((((iVar10 <= iVar15) && (iVar15 <= iVar12)) && (iVar11 <= iVar14)) && (iVar14 <= iVar13))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      iVar15 = iVar3 - local_10;
      iVar14 = iVar4 - local_14;
      if (((iVar10 <= iVar15) && (iVar15 <= iVar12)) && ((iVar11 <= iVar14 && (iVar14 <= iVar13))))
      {
        *(undefined1 *)(iVar14 * iVar9 + iVar2 + iVar15) = uVar7;
      }
      if (local_30 < 0) {
        local_10 = local_10 + 1;
        local_28 = local_28 + iVar5 * 2;
        local_30 = local_30 + local_28;
      }
      local_14 = local_14 + -1;
      local_2c = local_2c + uVar6 * -2;
      uVar8 = local_2c - uVar6;
      local_30 = local_30 - uVar8;
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return uVar8;
}
