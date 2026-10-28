/* SPDX-License-Identifier: MIT */
/* mercsw 10047b36 */
/* mercsw 10047b36: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern HANDLE DAT_100adf74;
int __cdecl FID_conflict___open(char * _Filename, int _OpenFlag, ...);
long __cdecl __filelength(int _FileHandle);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int __cdecl FUN_100814bb(int param_1, int param_2);
int __cdecl __close(int _FileHandle);
int __cdecl __read(int _FileHandle, void * _DstBuf, uint _MaxCharCount);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

int __cdecl FUN_10047b36(char * param_1, SIZE_T * param_2, int * param_3, int * param_4)

{
  int _FileHandle;
  SIZE_T SVar1;
  LPVOID pvVar2;
  int iVar3;
  
  _FileHandle = FID_conflict___open(param_1,0x8000);
  if (_FileHandle == -1) {
    _FileHandle = -1;
  }
  else {
    SVar1 = __filelength(_FileHandle);
    *param_2 = SVar1;
    if (param_4 == (int *)0x0) {
      pvVar2 = HeapAlloc(DAT_100adf74,1,*param_2);
      *param_3 = (int)pvVar2;
    }
    else {
      iVar3 = FUN_100814bb(*param_2,*param_4);
      *param_3 = iVar3;
    }
    if (*param_3 == 0) {
      __close(_FileHandle);
      _FileHandle = -1;
    }
    else {
      SVar1 = __read(_FileHandle,(void *)*param_3,*param_2);
      if (SVar1 != *param_2) {
        if (param_4 == (int *)0x0) {
          HeapFree(DAT_100adf74,1,(LPVOID)*param_3);
        }
        __close(_FileHandle);
        _FileHandle = -1;
      }
    }
  }
  return _FileHandle;
}
