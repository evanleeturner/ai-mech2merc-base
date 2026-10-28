/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d7f0 */
/* mw2shell 1000d7f0: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1000d7f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 8;
  piVar3 = (int *)(param_1 + 0x760);
  do {
    uVar1 = *(ushort *)(piVar3 + 4);
    *(ushort *)(piVar3 + 4) = uVar1 & 0xff00;
    iVar2 = (piVar3[2] + *piVar3) / 5;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else if (0xf < iVar2) {
      iVar2 = 0xf;
    }
    uVar1 = ((ushort)iVar2 & 0xf) | (uVar1 & 0xff00);
    *(ushort *)(piVar3 + 4) = uVar1;
    iVar2 = (piVar3[3] + *piVar3) / 5;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else if (0xf < iVar2) {
      iVar2 = 0xf;
    }
    uVar1 = (int)((unsigned int)(((ushort)iVar2 & 0xf)) << (4)) | uVar1;
    *(ushort *)(piVar3 + 4) = uVar1;
    *(ushort *)(piVar3 + 4) = uVar1 | 0x800;
    iVar4 = iVar4 + -1;
    piVar3 = (int *)((int)piVar3 + 0x12);
  } while (iVar4 != 0);
  return;
}
