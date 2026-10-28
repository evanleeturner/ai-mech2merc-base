/* SPDX-License-Identifier: MIT */
/* mercsw 1007bbed */
/* mercsw 1007bbed: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100af17c;
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
int __cdecl FUN_1007b9d2(uint param_1, char * param_2);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
int __cdecl FUN_1001e8a8(int param_1, char * param_2, ushort param_3);
char * __cdecl _strncat(char * _Dest, char * _Source, size_t _Count);
undefined4 * __cdecl FUN_100480d9(char * param_1);
int __cdecl FUN_10047b36(char * param_1, SIZE_T * param_2, int * param_3, int * param_4);
int __cdecl __close(int _FileHandle);
int __cdecl FUN_100814bb(int param_1, int param_2);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

ushort * __cdecl FUN_1007bbed(short * param_1, int * param_2, char * param_3, uint param_4, uint * param_5, int * param_6)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint *puVar6;
  ushort **ppuVar7;
  int *piVar8;
  char local_28 [8];
  undefined1 local_20;
  undefined1 local_1c;
  ushort *local_18;
  uint local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  (void)local_20;
  (void)local_1c;
  local_18 = (ushort *)0x0;
  local_8 = (ushort *)0x0;
  local_c = 0;
  local_14 = (uint)*param_1;
  if (local_14 == 0xffffffff) {
    _strncpy(local_28,(char *)(param_1 + 1),0xc);
    local_1c = 0;
    local_14 = FUN_1007b9d2(param_4,local_28);
  }
  if (local_14 != 0xffffffff) {
    local_18 = FUN_1008668b(DAT_100af17c,local_14,param_2);
    uVar1 = FUN_1001e8a8(DAT_100af17c,(char *)param_2,(ushort)local_14);
    *param_5 = uVar1;
    if (local_18 != (ushort *)0x0) {
      local_c = 1;
    }
  }
  if (local_18 == (ushort *)0x0) {
    local_14 = 0xffffffff;
    local_20 = 0;
    _strncat(local_28,param_3,4);
    piVar8 = (int *)0x0;
    ppuVar7 = &local_18;
    puVar6 = param_5;
    pcVar2 = (char *)FUN_100480d9(local_28);
    local_10 = FUN_10047b36(pcVar2,(SIZE_T *)(puVar6),(int *)ppuVar7,piVar8);
    if (local_10 == -1) {
      local_18 = (ushort *)0x0;
    }
    else {
      __close(local_10);
      local_c = 0;
    }
  }
  if (((local_18 != (ushort *)0x0) && (param_6 != (int *)0x0)) && (0 < (int)*param_5)) {
    local_8 = local_18;
    local_18 = (ushort *)FUN_100814bb(*param_5,*param_6);
    if (local_18 != (ushort *)0x0) {
      uVar1 = *param_5;
      puVar4 = local_8;
      puVar5 = local_18;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(char *)puVar5 = (char)*puVar4;
        puVar4 = (ushort *)((int)puVar4 + 1);
        puVar5 = (ushort *)((int)puVar5 + 1);
      }
    }
    if (local_c == 0) {
      HeapFree(DAT_100adf74,1,local_8);
    }
    else {
      FUN_1008664f(local_14,param_2);
    }
  }
  *param_1 = (short)local_14;
  return local_18;
}
