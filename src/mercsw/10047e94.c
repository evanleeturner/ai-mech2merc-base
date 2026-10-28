/* SPDX-License-Identifier: MIT */
/* mercsw 10047e94 */
/* mercsw 10047e94: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern undefined4 DAT_100aa1ac;
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100b0688;
extern undefined4 DAT_100b068c;
extern undefined DAT_100b0690;
undefined4 * __cdecl FUN_100480d9(char * param_1);
int __cdecl FUN_10047b36(char * param_1, SIZE_T * param_2, int * param_3, int * param_4);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int __cdecl __close(int _FileHandle);

undefined4 __cdecl FUN_10047e94(char * param_1, int * param_2)

{
  char *pcVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  SIZE_T *pSVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_64 [15];
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_23;
  undefined2 local_1f;
  undefined1 local_1d;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  SIZE_T local_8;
  
  (void)local_28;
  (void)local_24;
  (void)local_23;
  (void)local_1f;
  (void)local_1d;
  (void)local_1c;
  (void)local_18;
  (void)local_14;
  piVar9 = (int *)0x0;
  piVar8 = &local_10;
  pSVar7 = &local_8;
  pcVar1 = (char *)FUN_100480d9(param_1);
  local_c = FUN_10047b36(pcVar1,pSVar7,piVar8,piVar9);
  if (local_c == -1) {
    local_64[0] = 0x10000;
    local_64[1] = 0x10000;
    local_64[2] = 0x10000;
    local_64[3] = 0x10000;
    local_64[4] = 0xb;
    local_64[5] = 1;
    local_64[6] = 1;
    local_64[7] = 1;
    local_64[8] = 1;
    local_64[9] = 1;
    local_64[10] = 0;
    local_64[0xb] = 0;
    local_64[0xc] = 0;
    local_64[0xd] = 8;
    local_64[0xe] = DAT_100b0688;
    local_28 = DAT_100b068c;
    local_24 = DAT_100b0690;
    local_23 = 0;
    local_1f = 0;
    local_1d = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    pvVar2 = HeapAlloc(DAT_100adf74,1,0x54);
    *param_2 = (int)pvVar2;
    puVar5 = local_64;
    puVar6 = (undefined4 *)*param_2;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = 0xffffffff;
  }
  else {
    *param_2 = local_10;
    if (DAT_100aa1ac != 0) {
      *(undefined4 *)(*param_2 + 0x20) = 1;
    }
    __close(local_c);
    uVar3 = 1;
  }
  return uVar3;
}
