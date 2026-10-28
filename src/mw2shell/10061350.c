/* SPDX-License-Identifier: MIT */
/* mw2shell 10061350 */
/* mw2shell 10061350: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_10061430[];
extern undefined LAB_10061510[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined DAT_100c49d0[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

undefined4 * __cdecl FUN_10061350(undefined4 param_1, int param_2, int param_3, undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    puVar1 = HeapAlloc(DAT_10098224,1,(*(int *)(param_3 + 4) + 1) * 0x38);
    puVar2 = puVar1;
    if (0 < *(int *)(param_3 + 4)) {
      do {
        *puVar2 = param_1;
        iVar5 = *(int *)(DAT_100a6744 + 0x40c) * iVar3;
        iVar3 = iVar3 + 1;
        puVar2[1] = iVar5 + param_2;
        puVar2[2] = 100;
        puVar2[3] = *(undefined4 *)(DAT_100a6744 + 0x40c);
        puVar2[4] = 0;
        puVar2[5] = (undefined4)(DAT_100c49d0);
        puVar2[6] = 0;
        puVar2[7] = (undefined4)(LAB_10061430);
        puVar2[8] = (undefined4)(LAB_10061510);
        puVar2[9] = iVar4;
        iVar4 = iVar4 + 1;
        puVar2[10] = param_4;
        puVar2[0xb] = 0xffffffff;
        puVar2 = puVar2 + 0xe;
      } while (iVar4 < *(int *)(param_3 + 4));
    }
    puVar1[iVar3 * 0xe] = 0xffffffff;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
