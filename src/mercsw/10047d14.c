/* SPDX-License-Identifier: MIT */
/* mercsw 10047d14 */
/* mercsw 10047d14: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern undefined4 DAT_100aa1ac;
extern HANDLE DAT_100adf74;
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 * __cdecl FUN_100480d9(char * param_1);
int __cdecl FUN_10047b36(char * param_1, SIZE_T * param_2, int * param_3, int * param_4);
int __cdecl __close(int _FileHandle);

undefined4 __cdecl FUN_10047d14(char * param_1, int * param_2)

{
  LPVOID pvVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  pvVar1 = HeapAlloc(DAT_100adf74,9,0x17);
  *param_2 = (int)pvVar1;
  piVar7 = (int *)0x0;
  ppuVar6 = &local_10;
  puVar5 = &local_8;
  pcVar2 = (char *)FUN_100480d9(param_1);
  local_c = FUN_10047b36(pcVar2,(SIZE_T *)(puVar5),(int *)ppuVar6,piVar7);
  if (local_c == -1) {
    if (*param_2 == 0) {
      return 0xffffffff;
    }
  }
  else {
    puVar4 = (undefined4 *)*param_2;
    for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *local_10;
      local_10 = local_10 + 1;
      puVar4 = puVar4 + 1;
    }
    for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)local_10;
      local_10 = (undefined4 *)((int)local_10 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  __close(local_c);
  if (DAT_100aa1ac == 0) {
    *(undefined4 *)(*param_2 + 0xf) = 0;
    *(undefined4 *)(*param_2 + 0xb) = 0;
    *(undefined4 *)(*param_2 + 0x13) = 0;
    *(undefined1 *)(*param_2 + 9) = 1;
    *(undefined1 *)*param_2 = 0;
    *(undefined1 *)(*param_2 + 2) = 1;
    *(undefined1 *)(*param_2 + 3) = 1;
    *(undefined1 *)(*param_2 + 1) = 0;
  }
  else {
    *(undefined1 *)(*param_2 + 5) = 2;
    *(undefined1 *)(*param_2 + 1) = 0;
  }
  return 1;
}
