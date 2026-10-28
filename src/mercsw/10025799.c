/* SPDX-License-Identifier: MIT */
/* mercsw 10025799 */
/* mercsw 10025799: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern char s_Not_enough_memory_for_quadtrees__100aca28[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined __cdecl FUN_1006a38c(char * param_1);

undefined4 * __cdecl FUN_10025799(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, uint param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_10;
  
  puVar1 = HeapAlloc(DAT_100adf74,1,param_7 * 4 + 0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1006a38c(s_Not_enough_memory_for_quadtrees__100aca28);
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    local_10 = 4;
    while (local_10 != 0) {
      puVar1[local_10 + 6] = 0;
      local_10 = local_10 + -1;
    }
    if (0 < (int)param_7) {
      puVar4 = puVar1 + 0xb;
      for (uVar2 = param_7 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  return puVar1;
}
