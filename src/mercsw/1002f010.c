/* SPDX-License-Identifier: MIT */
/* mercsw 1002f010 */
/* mercsw 1002f010: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ad6c0;
extern undefined4 DAT_100ada48;
extern HANDLE DAT_100adf74;
int __cdecl FUN_100814bb(int param_1, int param_2);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int __cdecl FUN_1002ff42(int param_1);
undefined __cdecl FUN_1008975d(undefined4 * param_1);

int * __cdecl FUN_1002f010(int param_1, byte param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *local_8;
  
  if ((param_2 & 2) == 0) {
    if ((param_2 & 4) == 0) {
      return (int *)0x0;
    }
    local_8 = HeapAlloc(DAT_100adf74,1,0x7c);
    if (local_8 == (int *)0x0) {
      return (int *)0x0;
    }
    local_8[0x1d] = 4;
  }
  else {
    local_8 = (int *)FUN_100814bb(0x7c,DAT_100ad6c0);
    if (local_8 == (int *)0x0) {
      return (int *)0x0;
    }
    local_8[0x1d] = 2;
  }
  *local_8 = param_1;
  local_8[1] = 0;
  local_8[2] = 0;
  if (param_1 != 0) {
    if ((param_2 & 0x10) == 0) {
      local_8[2] = *(int *)(param_1 + 4);
      *(int **)(param_1 + 4) = local_8;
    }
    else {
      iVar1 = FUN_1002ff42(param_1);
      if (iVar1 == 0) {
        *(int **)(param_1 + 4) = local_8;
      }
      else {
        *(int **)(iVar1 + 8) = local_8;
      }
    }
  }
  FUN_1008975d((undefined4 *)(local_8 + 3));
  if (param_1 == 0) {
    FUN_1008975d((undefined4 *)(local_8 + 0xf));
  }
  else {
    piVar2 = (int *)(param_1 + 0x3c);
    piVar3 = local_8 + 0xf;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  local_8[0x1b] = 0;
  local_8[0x1d] = local_8[0x1d] | 1;
  local_8[0x1c] = 0;
  local_8[0x1e] = DAT_100ada48;
  DAT_100ada48 = (DAT_100ada48 + 7U & 0x7f) + 0x40;
  return local_8;
}
