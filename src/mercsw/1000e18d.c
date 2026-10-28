/* SPDX-License-Identifier: MIT */
/* mercsw 1000e18d */
/* mercsw 1000e18d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 PTR_DAT_100af0d0;
extern char * PTR_DAT_100af13c;
extern char s_unitbox_100a75f0[];
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
ushort * __cdecl FUN_1007bbed(short * param_1, int * param_2, char * param_3, uint param_4, uint * param_5, int * param_6);
undefined __cdecl FUN_1000e242(int * param_1, int param_2, int param_3);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_1000e18d(int * param_1)

{
  ushort *lpMem;
  short local_1c;
  char acStack_1a [14];
  short *local_c;
  uint local_8;
  
  local_c = &local_1c;
  local_1c = -1;
  _strncpy(acStack_1a,s_unitbox_100a75f0,0xc);
  *(undefined1 *)(local_c + 7) = 0;
  lpMem = FUN_1007bbed(local_c,(int *)PTR_DAT_100af0d0,PTR_DAT_100af13c,2,&local_8,(int *)0x0);
  if (lpMem != (ushort *)0x0) {
    FUN_1000e242(param_1,(int)lpMem,local_8);
    if (*local_c == -1) {
      HeapFree(DAT_100adf74,1,lpMem);
    }
    else {
      FUN_1008664f((int)*local_c,(int *)PTR_DAT_100af0d0);
    }
  }
  return;
}
