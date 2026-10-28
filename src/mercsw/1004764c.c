/* SPDX-License-Identifier: MIT */
/* mercsw 1004764c */
/* mercsw 1004764c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adca0[];
extern undefined4 DAT_100adca4[];
extern HANDLE DAT_100adf74;
extern undefined DAT_101eb5f4[];
extern undefined DAT_101eb5f8[];
extern undefined DAT_101eb5fc[];
extern undefined DAT_101eb600[];
extern undefined4 DAT_101ec400[];
extern undefined4 PTR_DAT_100af0e0;
extern char * PTR_DAT_100af14c;
ushort * __cdecl FUN_1007bbed(short * param_1, int * param_2, char * param_3, uint param_4, uint * param_5, int * param_6);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

undefined4 __cdecl FUN_1004764c(short * param_1)

{
  int iVar1;
  ushort *lpMem;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  ushort *local_1c;
  int local_14;
  int local_10;
  uint local_8;
  
  lpMem = FUN_1007bbed(param_1,(int *)PTR_DAT_100af0e0,PTR_DAT_100af14c,6,&local_8,(int *)0x0);
  if (lpMem == (ushort *)0x0) {
    uVar2 = 0;
  }
  else {
    local_1c = lpMem;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      DAT_100adca0[local_10 * 2] = *(int *)local_1c;
      DAT_100adca4[local_10 * 2] = *(int *)(local_1c + 2);
      local_1c = local_1c + 4;
    }
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      iVar1 = *(int *)local_1c;
      local_1c = local_1c + 2;
      DAT_101ec400[local_10] = iVar1;
    }
    for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
      local_28 = *(int *)local_1c;
      local_2c = *(int *)(local_1c + 2);
      local_20 = *(int *)(local_1c + 4);
      local_24 = *(int *)(local_1c + 6);
      local_1c = local_1c + 8;
      if (((((local_28 < 0) || (100 < local_28)) || (local_2c < 0)) ||
          ((100 < local_2c || (local_20 < 0)))) ||
         ((100 < local_20 || ((local_24 < 0 || (100 < local_24)))))) {
        local_24 = 0;
        local_20 = 0;
        local_2c = 0;
        local_28 = 0;
      }
      for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
        *(int *)(DAT_101eb5f4 + local_14 * 0x140 + local_10 * 0x14) = local_28;
        *(int *)(DAT_101eb5f8 + local_14 * 0x140 + local_10 * 0x14) = local_2c;
        *(int *)(DAT_101eb5fc + local_14 * 0x140 + local_10 * 0x14) = local_20;
        *(int *)(DAT_101eb600 + local_14 * 0x140 + local_10 * 0x14) = local_24;
      }
    }
    if (*param_1 == -1) {
      HeapFree(DAT_100adf74,1,lpMem);
    }
    else {
      FUN_1008664f((int)*param_1,(int *)PTR_DAT_100af0e0);
    }
    uVar2 = 1;
  }
  return uVar2;
}
