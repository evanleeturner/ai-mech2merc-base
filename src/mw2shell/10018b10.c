/* SPDX-License-Identifier: MIT */
/* mw2shell 10018b10 */
/* mw2shell 10018b10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_10018d40[];
extern undefined LAB_10018d90[];
extern undefined LAB_10018df0[];
extern undefined LAB_10018eb0[];
extern undefined LAB_10018fe0[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined4 DAT_100a674c;
extern undefined4 DAT_100a6798;
extern undefined DAT_100c49d0[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_100507a0(int param_1);

int * __cdecl FUN_10018b10(int param_1, int param_2, int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (param_3 == 0) {
    return (int *)0x0;
  }
  piVar2 = HeapAlloc(DAT_10098224,1,*(int *)(param_3 + 4) * 0x70 + 0xa8);
  *piVar2 = param_1;
  piVar2[1] = param_2;
  piVar2[2] = -1;
  piVar2[3] = *(int *)(DAT_100a674c + 0x40c);
  piVar2[4] = 0;
  piVar2[5] = (int)DAT_100c49d0;
  piVar2[6] = 0;
  piVar2[7] = (int)LAB_10018d40;
  piVar2[8] = 0;
  piVar2[9] = -1;
  piVar2[0xb] = 0;
  piVar2[0xe] = param_1 + 200;
  piVar2[0xf] = param_2;
  piVar2[0x10] = -1;
  piVar2[0x11] = *(int *)(DAT_100a674c + 0x40c);
  piVar2[0x12] = 0;
  piVar2[0x13] = (int)DAT_100c49d0;
  piVar2[0x14] = 0;
  iVar5 = 2;
  iVar4 = 0;
  local_8 = 2;
  piVar2[0x15] = (int)LAB_10018d90;
  piVar2[0x16] = 0;
  piVar2[0x17] = -1;
  piVar2[0x19] = 0;
  if (0 < *(int *)(param_3 + 4)) {
    do {
      piVar2[iVar5 * 0xe] = param_1;
      piVar2[iVar5 * 0xe + 1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + param_2;
      piVar2[iVar5 * 0xe + 2] = 200;
      piVar2[iVar5 * 0xe + 3] = *(int *)(DAT_100a674c + 0x40c);
      piVar2[iVar5 * 0xe + 4] = 0;
      piVar2[iVar5 * 0xe + 5] = (int)DAT_100c49d0;
      piVar2[iVar5 * 0xe + 6] = 0;
      piVar2[iVar5 * 0xe + 7] = (int)LAB_10018df0;
      piVar2[iVar5 * 0xe + 8] = (int)LAB_10018eb0;
      piVar2[iVar5 * 0xe + 9] = iVar4;
      piVar2[iVar5 * 0xe + 0xb] = 0;
      piVar1 = piVar2 + (iVar5 + 1) * 0xe;
      iVar3 = FUN_10018060(DAT_100a6798,iVar4);
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 1;
      iVar3 = FUN_100507a0(iVar3);
      piVar1[0xc] = iVar3;
      *piVar1 = param_1 + 200;
      piVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + param_2;
      piVar1[2] = 200;
      local_8 = local_8 + 1;
      piVar1[3] = *(int *)(DAT_100a6744 + 0x40c);
      piVar1[4] = 0;
      piVar1[5] = (int)DAT_100c49d0;
      piVar1[6] = 0;
      piVar1[7] = (int)LAB_10018fe0;
      piVar1[8] = 0;
      piVar1[0xb] = 0;
    } while (iVar4 < *(int *)(param_3 + 4));
  }
  piVar2[iVar5 * 0xe] = -1;
  return piVar2;
}
