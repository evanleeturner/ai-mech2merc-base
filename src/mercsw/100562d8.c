/* SPDX-License-Identifier: MIT */
/* mercsw 100562d8 */
/* mercsw 100562d8: Ghidra's C, repaired by tools/ghidra_repair.py */

uint __cdecl FUN_100562d8(int * param_1, int param_2, int param_3, byte param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  
  piVar2 = (int *)*param_1;
  iVar3 = piVar2[1];
  if ((iVar3 + 1 == 0 || iVar3 < -1) || (iVar4 = piVar2[2], iVar4 < 0)) {
    return 0xffffffff;
  }
  iVar10 = param_1[1];
  iVar5 = iVar10;
  if (iVar10 < 1) {
    iVar5 = 0;
  }
  iVar11 = param_1[2];
  iVar6 = iVar11;
  if (iVar11 < 1) {
    iVar6 = 0;
  }
  iVar7 = param_1[3];
  if (iVar3 <= param_1[3]) {
    iVar7 = iVar3;
  }
  iVar8 = param_1[4];
  if (iVar4 <= param_1[4]) {
    iVar8 = iVar4;
  }
  if ((iVar5 <= iVar7) && (iVar6 <= iVar8)) {
    iVar10 = param_2 + iVar10;
    iVar11 = param_3 + iVar11;
    if ((((iVar5 <= iVar10) && (iVar10 <= iVar7)) && (iVar6 <= iVar11)) && (iVar11 <= iVar8)) {
      pbVar9 = (byte *)(iVar11 * (iVar3 + 1) + *piVar2 + iVar10);
      bVar1 = *pbVar9;
      *pbVar9 = param_4;
      return (uint)bVar1;
    }
    return 0xfffffffd;
  }
  return 0xfffffffe;
}
