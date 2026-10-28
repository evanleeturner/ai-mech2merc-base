/* SPDX-License-Identifier: MIT */
/* mw2shell 10058400 */
/* mw2shell 10058400: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_100583f0[];
extern undefined LAB_100585e0[];
extern undefined LAB_10058680[];
extern undefined LAB_10058730[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined DAT_100c49d0[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int * __cdecl FUN_10058400(int param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (param_3 == 0) {
    return (int *)0x0;
  }
  iVar4 = 1;
  piVar1 = HeapAlloc(DAT_10098224,1,*(int *)(param_3 + 4) * 0x70 + 0x118);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  piVar1[2] = 100;
  piVar1[3] = *(int *)(DAT_100a6744 + 0x40c);
  piVar1[4] = 0;
  piVar1[5] = (int)DAT_100c49d0;
  piVar1[6] = 0;
  iVar3 = 0;
  local_8 = 1;
  piVar1[7] = (int)LAB_100583f0;
  piVar1[8] = 0;
  piVar1[9] = -1;
  piVar1[10] = -1;
  piVar1[0xb] = -1;
  if (0 < *(int *)(param_3 + 4)) {
    do {
      iVar2 = FUN_10018060(param_3,iVar3);
      iVar5 = iVar4 + 1;
      piVar1[iVar4 * 0xe] = param_1;
      piVar1[iVar4 * 0xe + 1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + param_2;
      piVar1[iVar4 * 0xe + 2] = 0x96;
      piVar1[iVar4 * 0xe + 3] = *(int *)(DAT_100a6744 + 0x40c);
      piVar1[iVar4 * 0xe + 4] = 0;
      piVar1[iVar4 * 0xe + 5] = (int)DAT_100c49d0;
      piVar1[iVar4 * 0xe + 6] = 0;
      piVar1[iVar4 * 0xe + 7] = (int)LAB_100585e0;
      piVar1[iVar4 * 0xe + 8] = (int)LAB_10058730;
      piVar1[iVar4 * 0xe + 9] = iVar3;
      iVar3 = iVar3 + 1;
      piVar1[iVar4 * 0xe + 10] = param_4;
      piVar1[iVar4 * 0xe + 0xb] = 0;
      iVar4 = iVar4 + 2;
      piVar1[iVar5 * 0xe] = param_1 + 0x96;
      piVar1[iVar5 * 0xe + 1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + param_2;
      piVar1[iVar5 * 0xe + 2] = -1;
      piVar1[iVar5 * 0xe + 3] = *(int *)(DAT_100a6744 + 0x40c);
      piVar1[iVar5 * 0xe + 4] = 0;
      piVar1[iVar5 * 0xe + 5] = (int)DAT_100c49d0;
      piVar1[iVar5 * 0xe + 6] = 0;
      piVar1[iVar5 * 0xe + 7] = (int)LAB_10058680;
      piVar1[iVar5 * 0xe + 8] = 0;
      piVar1[iVar5 * 0xe + 9] = *(int *)(iVar2 + 0x24);
      local_8 = local_8 + 1;
      piVar1[iVar5 * 0xe + 10] = param_4;
      piVar1[iVar5 * 0xe + 0xb] = 0;
    } while (iVar3 < *(int *)(param_3 + 4));
  }
  piVar1[iVar4 * 0xe] = -1;
  return piVar1;
}
