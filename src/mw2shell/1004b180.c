/* SPDX-License-Identifier: MIT */
/* mw2shell 1004b180 */
/* mw2shell 1004b180: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 DAT_100a6798;
int __stdcall FUN_1004b0f0(void);
int __stdcall FUN_1004b140(void);

int __cdecl FUN_1004b180(char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(DAT_10083508 + 0x23a3);
  iVar1 = *(int *)(DAT_10083508 + 0x23a7);
  iVar2 = *(int *)(DAT_100a6798 + 4);
  iVar3 = *(int *)(DAT_10083508 + 0x23af);
  iVar4 = *(int *)(DAT_10083508 + 0x23b3);
  iVar5 = *(int *)(DAT_10083508 + 0x23ab);
  iVar6 = FUN_1004b0f0();
  iVar7 = FUN_1004b140();
  iVar8 = *(int *)(DAT_10083508 + 0x1fa) *
          (iVar7 + (iVar8 + iVar1) * iVar2 + iVar3 + iVar4 + iVar5 + 1 + iVar6);
  if (param_1 == '\x01') {
    *(int *)(DAT_10083508 + 0x12a) = *(int *)(DAT_10083508 + 0x12a) - iVar8;
  }
  return iVar8;
}
