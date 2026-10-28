/* SPDX-License-Identifier: MIT */
/* mercsw 10047899 */
/* mercsw 10047899: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 PTR_DAT_100af0e4;
extern char * PTR_DAT_100af150;
ushort * __cdecl FUN_1007bbed(short * param_1, int * param_2, char * param_3, uint param_4, uint * param_5, int * param_6);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

undefined4 __cdecl FUN_10047899(short * param_1, int param_2, int param_3, int * param_4)

{
  undefined4 uVar1;
  ushort *lpMem;
  ushort *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    lpMem = FUN_1007bbed(param_1,(int *)PTR_DAT_100af0e4,PTR_DAT_100af150,5,&local_8,(int *)0x0);
    if (lpMem == (ushort *)0x0) {
      uVar1 = 0;
    }
    else {
      local_c = param_2;
      local_14 = lpMem;
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        *(int *)(local_c + 4) = (int)(short)*local_14;
        *(int *)(local_c + 8) = (int)(short)local_14[1];
        *(int *)(local_c + 0xc) = (int)(short)local_14[2] + (int)(short)*local_14 + -1;
        *(int *)(local_c + 0x10) = (int)(short)local_14[1] + (int)(short)local_14[3] + -1;
        local_14 = local_14 + 4;
        local_c = local_c + 0x14;
      }
      local_c = param_3;
      for (local_10 = 0; local_10 < 0x13; local_10 = local_10 + 1) {
        *(int *)(local_c + 4) = (int)(short)*local_14;
        *(int *)(local_c + 8) = (int)(short)local_14[1];
        *(int *)(local_c + 0xc) = (int)(short)local_14[2] + (int)(short)*local_14 + -1;
        *(int *)(local_c + 0x10) = (int)(short)local_14[1] + (int)(short)local_14[3] + -1;
        local_14 = local_14 + 4;
        local_c = local_c + 0x14;
      }
      *param_4 = (int)(short)*local_14;
      param_4[1] = (int)(short)local_14[1];
      if (*param_1 == -1) {
        HeapFree(DAT_100adf74,1,lpMem);
      }
      else {
        FUN_1008664f((int)*param_1,(int *)PTR_DAT_100af0e4);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
