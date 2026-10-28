/* SPDX-License-Identifier: MIT */
/* mercsw 10080241 */
/* mercsw 10080241: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef long long longlong;
extern undefined4 DAT_10160eb0;
int * __cdecl FUN_10080130(int param_1);
int __stdcall FUN_10035f3b(void);

int * __cdecl FUN_10080241(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_48;
  int local_44;
  int local_3c;
  int local_30;
  int *local_2c;
  int *local_24;
  int local_20;
  int local_18;
  int local_8;
  
  local_24 = *(int **)(param_1 + 0x24);
  if (local_24 == (int *)0x0) {
    local_24 = FUN_10080130(param_1);
  }
  local_2c = *(int **)(param_2 + 0x24);
  if (local_2c == (int *)0x0) {
    local_2c = FUN_10080130(param_2);
  }
  piVar8 = (int *)FUN_10035f3b();
  local_3c = *local_24;
  local_48 = local_24[1];
  local_18 = local_24[5];
  local_30 = local_24[6];
  iVar9 = local_24[2];
  local_44 = local_24[8];
  local_8 = local_24[9];
  local_20 = local_24[10];
  iVar1 = *local_2c;
  iVar2 = local_2c[1];
  iVar3 = local_2c[5];
  iVar4 = local_2c[6];
  iVar10 = local_2c[2];
  iVar5 = local_2c[8];
  iVar6 = local_2c[9];
  iVar7 = local_2c[10];
  if (iVar9 < iVar7) {
    iVar10 = iVar10 - iVar9;
    if (iVar10 != 0) {
      iVar9 = DAT_10160eb0 - iVar9;
      local_3c = (int)(((longlong)(iVar1 - local_3c) * (longlong)iVar9) / (longlong)iVar10) +
                 local_3c;
      local_48 = (int)(((longlong)(iVar2 - local_48) * (longlong)iVar9) / (longlong)iVar10) +
                 local_48;
      local_18 = (int)(((longlong)(iVar3 - local_18) * (longlong)iVar9) / (longlong)iVar10) +
                 local_18;
      local_30 = (int)(((longlong)(iVar4 - local_30) * (longlong)iVar9) / (longlong)iVar10) +
                 local_30;
      local_44 = (int)(((longlong)(iVar5 - local_44) * (longlong)iVar9) / (longlong)iVar10) +
                 local_44;
      local_8 = (int)(((longlong)(iVar6 - local_8) * (longlong)iVar9) / (longlong)iVar10) + local_8;
      local_20 = (int)(((longlong)(iVar7 - local_20) * (longlong)iVar9) / (longlong)iVar10) +
                 local_20;
    }
  }
  else {
    iVar9 = iVar9 - iVar10;
    if (iVar9 != 0) {
      iVar10 = DAT_10160eb0 - iVar10;
      local_3c = (int)(((longlong)(local_3c - iVar1) * (longlong)iVar10) / (longlong)iVar9) + iVar1;
      local_48 = (int)(((longlong)(local_48 - iVar2) * (longlong)iVar10) / (longlong)iVar9) + iVar2;
      local_18 = (int)(((longlong)(local_18 - iVar3) * (longlong)iVar10) / (longlong)iVar9) + iVar3;
      local_30 = (int)(((longlong)(local_30 - iVar4) * (longlong)iVar10) / (longlong)iVar9) + iVar4;
      local_44 = (int)(((longlong)(local_44 - iVar5) * (longlong)iVar10) / (longlong)iVar9) + iVar5;
      local_8 = (int)(((longlong)(local_8 - iVar6) * (longlong)iVar10) / (longlong)iVar9) + iVar6;
      local_20 = (int)(((longlong)(local_20 - iVar7) * (longlong)iVar10) / (longlong)iVar9) + iVar7;
    }
  }
  *piVar8 = local_3c;
  piVar8[1] = local_48;
  piVar8[2] = DAT_10160eb0;
  piVar8[5] = local_18;
  piVar8[6] = local_30;
  piVar8[8] = local_44;
  piVar8[9] = local_8;
  piVar8[10] = local_20;
  return piVar8;
}
