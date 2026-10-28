/* SPDX-License-Identifier: MIT */
/* mw2shell 1003c1e0 */
/* mw2shell 1003c1e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_1003c460[];
extern undefined LAB_1003c4b0[];
extern undefined LAB_1003c510[];
extern undefined LAB_1003c560[];
extern undefined LAB_1003c5e0[];
extern undefined LAB_1003c680[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined4 DAT_100a67b4;
extern undefined DAT_100c48d0[];
extern undefined DAT_100c49d0[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

undefined4 * __cdecl FUN_1003c1e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_10;
  int local_c;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x2f0);
  iVar2 = 0xe;
  do {
    if (-1 < *piVar4) {
      iVar5 = iVar5 + 1;
    }
    piVar4 = piVar4 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = HeapAlloc(DAT_10098224,1,(iVar5 + 2) * 0x70);
  *puVar3 = 0x172;
  local_10 = 1;
  puVar3[1] = 0x59;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  puVar3[4] = 0;
  puVar3[5] = (undefined4)(DAT_100c48d0);
  puVar3[6] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0xffffffff;
  puVar3[10] = 0xffffffff;
  puVar3[0xb] = 0xffffffff;
  if (*(int *)(DAT_100a67b4 + 4) == 0) {
    puVar3[7] = (undefined4)(LAB_1003c510);
  }
  else {
    puVar3[7] = (undefined4)(LAB_1003c460);
    local_10 = 2;
    puVar3[0x15] = (undefined4)(LAB_1003c4b0);
    puVar3[0xe] = 0x22d;
    puVar3[0xf] = 0x59;
    puVar3[0x10] = 0xffffffff;
    puVar3[0x11] = 0xffffffff;
    puVar3[0x12] = 0;
    puVar3[0x13] = (undefined4)(DAT_100c48d0);
    puVar3[0x14] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0xffffffff;
    puVar3[0x18] = 0xffffffff;
    puVar3[0x19] = 0xffffffff;
  }
  iVar5 = 0;
  local_c = local_10 + -1;
  iVar2 = 0;
  puVar7 = (uint *)(param_1 + 0x2f4);
  do {
    if (-1 < (int)puVar7[-1]) {
      puVar1 = puVar3 + (local_10 + iVar5) * 0xe;
      *puVar1 = 0x172;
      puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * (local_10 + local_c) + 0x59;
      puVar1[2] = 200;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0;
      puVar1[5] = (undefined4)(DAT_100c49d0);
      puVar1[6] = 0;
      puVar1[7] = (undefined4)(LAB_1003c680);
      puVar1[8] = (undefined4)(LAB_1003c560);
      if (4 < ((byte)(*puVar7 >> 8) & 7)) {
        *puVar7 = *puVar7 & 0xfffff0ff;
      }
      iVar6 = iVar5 + 1;
      puVar1[9] = (int)puVar7[-1] / 100;
      puVar1[10] = iVar2;
      puVar1[0xb] = 0xffffffff;
      puVar1[0xd] = 0xffffffff;
      puVar1[0xc] = param_1;
      iVar5 = iVar5 + 2;
      puVar1 = puVar3 + (local_10 + iVar6) * 0xe;
      *puVar1 = 0x22d;
      puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * (local_10 + local_c) + 0x59;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0;
      puVar1[5] = (undefined4)(DAT_100c49d0);
      puVar1[6] = 0;
      puVar1[7] = (undefined4)(LAB_1003c5e0);
      puVar1[8] = 0;
      puVar1[9] = 0xffffffff;
      puVar1[10] = iVar2;
      puVar1[0xb] = 0xffffffff;
      puVar1[0xd] = (*puVar7 & 0x700) >> 8;
      puVar1[0xc] = param_1;
      local_c = local_c + 1;
    }
    puVar7 = puVar7 + 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xe);
  puVar3[(local_10 + iVar5) * 0xe] = 0xffffffff;
  return puVar3;
}
