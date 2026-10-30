/* SPDX-License-Identifier: MIT */
/* mw2shell 1001d450 */
/* mw2shell 1001d450: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_1001d2b0[];
extern undefined LAB_1001d3a0[];
extern undefined LAB_1001d400[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern void * DAT_100a674c;
extern undefined DAT_100c49d0[];
extern char s_MechWarrior_Assignment_10090244[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int __cdecl CenterTextAtX_Likely(void * param_1, int param_2, char * param_3);
undefined __cdecl FUN_1001d130(int param_1);

int * __cdecl FUN_1001d450(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  piVar4 = HeapAlloc(DAT_10098224,1,(*(int *)(param_3 + 4) + 1) * 0x70);
  iVar5 = CenterTextAtX_Likely(DAT_100a674c,0xd2,s_MechWarrior_Assignment_10090244);
  *piVar4 = iVar5;
  piVar4[1] = param_2;
  piVar4[3] = *(int *)((int)DAT_100a674c + 0x40c) + 5;
  piVar4[4] = 0;
  piVar4[5] = (int)DAT_100c49d0;
  piVar4[6] = 0;
  piVar4[7] = (int)LAB_1001d400;
  iVar6 = 1;
  piVar4[8] = 0;
  piVar4[9] = -1;
  piVar4[10] = -1;
  piVar4[0xb] = -1;
  local_4 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 4)) {
    do {
      iVar2 = iVar5 + iVar6;
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 1;
      piVar4[iVar2 * 0xe] = param_1;
      iVar1 = iVar5 + 1;
      piVar4[iVar2 * 0xe + 1] =
           *(int *)(DAT_100a6744 + 0x40c) * iVar1 + *(int *)((int)DAT_100a674c + 0x40c) + param_2;
      piVar4[iVar2 * 0xe + 2] = 0;
      piVar4[iVar2 * 0xe + 3] = *(int *)(DAT_100a6744 + 0x40c) + 5;
      piVar4[iVar2 * 0xe + 4] = 0;
      piVar4[iVar2 * 0xe + 5] = (int)DAT_100c49d0;
      piVar4[iVar2 * 0xe + 6] = 0;
      piVar4[iVar2 * 0xe + 7] = (int)LAB_1001d3a0;
      piVar4[iVar2 * 0xe + 8] = 0;
      piVar4[iVar2 * 0xe + 9] = iVar5;
      piVar4[iVar2 * 0xe + 10] = -1;
      piVar4[iVar2 * 0xe + 0xb] = -1;
      piVar3 = piVar4 + (iVar5 + iVar6) * 0xe;
      *piVar3 = 0x96;
      piVar3[1] = *(int *)(DAT_100a6744 + 0x40c) * iVar1 + *(int *)((int)DAT_100a674c + 0x40c) +
                  param_2;
      piVar3[2] = 0xe6;
      piVar3[3] = *(int *)(DAT_100a6744 + 0x40c) + 5;
      piVar3[4] = 0;
      piVar3[5] = (int)DAT_100c49d0;
      piVar3[6] = 0;
      piVar3[7] = (int)LAB_1001d2b0;
      piVar3[8] = (int)FUN_1001d130;
      piVar3[9] = iVar5;
      piVar3[10] = param_4;
      piVar3[0xb] = -1;
      iVar5 = iVar1;
    } while (iVar1 < *(int *)(param_3 + 4));
  }
  piVar4[(local_4 + iVar6) * 0xe] = -1;
  return piVar4;
}
