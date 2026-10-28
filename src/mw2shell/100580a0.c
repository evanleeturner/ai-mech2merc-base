/* SPDX-License-Identifier: MIT */
/* mw2shell 100580a0 */
/* mw2shell 100580a0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_10058290[];
extern undefined LAB_10058340[];
extern undefined LAB_100583e0[];
extern undefined LAB_100583f0[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined DAT_100c49d0[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int * __cdecl FUN_100580a0(int param_1, int param_2, int param_3, int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  if (param_3 == 0) {
    return (int *)0x0;
  }
  iVar5 = 1;
  piVar2 = HeapAlloc(DAT_10098224,1,*(int *)(param_3 + 4) * 0x70 + 0x118);
  *piVar2 = param_1;
  piVar2[1] = param_2;
  piVar2[2] = -1;
  piVar2[3] = *(int *)(DAT_100a6744 + 0x40c);
  piVar2[4] = 0;
  piVar2[5] = (int)DAT_100c49d0;
  piVar2[6] = 0;
  iVar4 = 0;
  local_4 = 1;
  piVar2[7] = (int)LAB_100583f0;
  piVar2[8] = 0;
  piVar2[9] = -1;
  piVar2[10] = -1;
  piVar2[0xb] = -1;
  if (0 < *(int *)(param_3 + 4)) {
    do {
      iVar3 = FUN_10018060(param_3,iVar4);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2064) == '\0')) {
        iVar6 = iVar5 + 1;
        piVar1 = piVar2 + iVar5 * 0xe;
        *piVar1 = param_1;
        piVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_4 + param_2;
        piVar1[2] = 0x96;
        piVar1[3] = *(int *)(DAT_100a6744 + 0x40c);
        piVar1[4] = 0;
        piVar1[5] = (int)DAT_100c49d0;
        piVar1[6] = 0;
        piVar1[7] = (int)LAB_10058340;
        piVar1[8] = (int)LAB_100583e0;
        piVar1[9] = iVar4;
        piVar1[10] = param_4;
        piVar1[0xb] = 0;
        iVar5 = iVar5 + 2;
        piVar2[iVar6 * 0xe] = param_1 + 0x96;
        piVar2[iVar6 * 0xe + 1] = *(int *)(DAT_100a6744 + 0x40c) * local_4 + param_2;
        piVar2[iVar6 * 0xe + 2] = -1;
        piVar2[iVar6 * 0xe + 3] = *(int *)(DAT_100a6744 + 0x40c);
        piVar2[iVar6 * 0xe + 4] = 0;
        piVar2[iVar6 * 0xe + 5] = (int)DAT_100c49d0;
        piVar2[iVar6 * 0xe + 6] = 0;
        piVar2[iVar6 * 0xe + 7] = (int)LAB_10058290;
        piVar2[iVar6 * 0xe + 8] = 0;
        piVar2[iVar6 * 0xe + 9] = *(int *)(iVar3 + 0x3c);
        piVar2[iVar6 * 0xe + 10] = -1;
        piVar2[iVar6 * 0xe + 0xb] = 0;
        local_4 = local_4 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 4));
  }
  piVar2[iVar5 * 0xe] = -1;
  return piVar2;
}
