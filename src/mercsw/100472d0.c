/* SPDX-License-Identifier: MIT */
/* mercsw 100472d0 */
/* mercsw 100472d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 PTR_DAT_100af0dc;
extern char * PTR_DAT_100af148;
ushort * __cdecl FUN_1007bbed(short * param_1, int * param_2, char * param_3, uint param_4, uint * param_5, int * param_6);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

undefined4 __cdecl FUN_100472d0(short * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7, undefined4 * param_8)

{
  ushort *lpMem;
  undefined4 uVar1;
  uint local_8;
  
  lpMem = FUN_1007bbed(param_1,(int *)PTR_DAT_100af0dc,PTR_DAT_100af148,7,&local_8,(int *)0x0);
  if (lpMem == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)lpMem;
    *param_3 = *(undefined4 *)(lpMem + 2);
    *param_4 = *(undefined4 *)(lpMem + 4);
    *param_5 = *(undefined4 *)(lpMem + 6);
    *param_6 = *(undefined4 *)(lpMem + 8);
    *param_7 = *(undefined4 *)(lpMem + 10);
    *param_8 = *(undefined4 *)(lpMem + 0xc);
    if (*param_1 == -1) {
      HeapFree(DAT_100adf74,1,lpMem);
    }
    else {
      FUN_1008664f((int)*param_1,(int *)PTR_DAT_100af0dc);
    }
    uVar1 = 1;
  }
  return uVar1;
}
