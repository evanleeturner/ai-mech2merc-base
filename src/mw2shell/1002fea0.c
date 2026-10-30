/* SPDX-License-Identifier: MIT */
/* mw2shell 1002fea0 */
/* mw2shell 1002fea0: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl MultiplyBy625(int param_1);

int __cdecl ComputeSlotGridDifferenceScore_Likely(int param_1, int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  iVar7 = 0;
  iVar8 = param_1 + 0x760;
  iVar5 = param_2 + 0x760;
  local_c = 0;
  local_8 = 8;
  piVar6 = (int *)(param_1 + 0x368);
  piVar2 = (int *)(param_2 + 0x368);
  do {
    uVar1 = ((*(int *)(iVar5 + 8) - *(int *)(iVar8 + 8)) - *(int *)(iVar8 + 0xc)) +
            *(int *)(iVar5 + 0xc);
    uVar3 = (int)uVar1 >> 0x1f;
    local_c = (local_c - uVar3) + (uVar1 ^ uVar3);
    iVar4 = 0xc;
    do {
      if ((*piVar6 != *piVar2) && ((*piVar6 != 0 || (*piVar2 != -1)))) {
        iVar7 = iVar7 + 1;
      }
      piVar2 = piVar2 + 1;
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar8 = iVar8 + 0x12;
    iVar5 = iVar5 + 0x12;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = MultiplyBy625(local_c);
  return iVar5 + iVar7 * 50000;
}
