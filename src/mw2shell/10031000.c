/* SPDX-License-Identifier: MIT */
/* mw2shell 10031000 */
/* mw2shell 10031000: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_10031120[];
extern undefined LAB_10031170[];
extern undefined LAB_100311d0[];
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined DAT_100c49d0[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);

undefined4 * __cdecl FUN_10031000(int param_1, int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 < 0) {
    return (undefined4 *)0x0;
  }
  if (-1 < param_2) {
    puVar3 = HeapAlloc(DAT_10098224,1,param_2 * 0x70 + 0x118);
    *puVar3 = 0x1cc;
    puVar3[1] = 0xe8;
    puVar3[2] = 0xffffffff;
    puVar3[3] = 0xffffffff;
    puVar3[4] = 0;
    puVar3[5] = (undefined4)(DAT_100c49d0);
    puVar3[6] = 0;
    iVar4 = 0;
    puVar3[8] = 0;
    puVar3[7] = (undefined4)(LAB_10031120);
    puVar3[9] = param_1;
    puVar3[10] = 0xffffffff;
    puVar3[0xb] = 0xffffffff;
    puVar2 = puVar3;
    if (0 < param_2) {
      do {
        iVar1 = iVar4 + 2;
        puVar2[0xe] = 0x1cc;
        iVar4 = iVar4 + 1;
        puVar2[0xf] = *(int *)(DAT_100a6744 + 0x40c) * iVar1 + 0xe8;
        puVar2[0x10] = 0xffffffff;
        puVar2[0x11] = 0xffffffff;
        puVar2[0x12] = 0;
        puVar2[0x13] = (undefined4)(DAT_100c49d0);
        puVar2[0x14] = 0;
        puVar2[0x16] = (undefined4)(LAB_100311d0);
        puVar2[0x15] = (undefined4)(LAB_10031170);
        puVar2[0x17] = param_1;
        puVar2[0x18] = 1;
        puVar2[0x19] = 0xffffffff;
        puVar2 = puVar2 + 0xe;
      } while (iVar4 < param_2);
    }
    puVar3[iVar4 * 0xe + 0xe] = 0xffffffff;
    return puVar3;
  }
  return (undefined4 *)0x0;
}
