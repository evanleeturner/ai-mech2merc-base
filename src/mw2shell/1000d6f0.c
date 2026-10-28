/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d6f0 */
/* mw2shell 1000d6f0: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined1 __cdecl FUN_1000d6f0(int param_1, int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar7 = 0;
  piVar1 = (int *)(param_2 * 0x12 + 0x760 + param_1);
  uVar2 = *(ushort *)(piVar1 + 4);
  iVar5 = *piVar1;
  iVar6 = (int)(short)((uVar2 & 0xf0) >> 4);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar3 = piVar1[3];
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar6 != 0) {
    iVar7 = ((iVar3 + iVar5) * -0x30000) / ((int)((unsigned int)(iVar6) << (0x10))) + 0xf;
  }
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else if (0xf < iVar7) {
    iVar7 = 0xf;
  }
  iVar5 = *piVar1;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  iVar6 = piVar1[2];
  iVar3 = iVar6;
  if (iVar6 < 0) {
    iVar3 = 0;
  }
  if ((uVar2 & 0xf) != 0) {
    iVar4 = ((iVar3 + iVar5) * -0x30000) / (int)((int)((unsigned int)((uVar2 & 0xf)) << (0x10))) + 0xf;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else if (0xf < iVar4) {
    iVar4 = 0xf;
  }
  if (iVar7 <= iVar4) {
    iVar7 = iVar4;
  }
  if (((iVar6 < 1) && (piVar1[3] < 1)) && (*piVar1 < 1)) {
    return 3;
  }
  if (0xb < iVar7) {
    return 2;
  }
  return 0 < iVar7;
}
