/* SPDX-License-Identifier: MIT */
/* mw2shell 100363c0 */
/* mw2shell 100363c0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_10093c7c[];
extern HANDLE DAT_10098224;
extern char s__s_BWD_10093c74[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
int __cdecl FUN_1005bae0(FILE * param_1);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

LPVOID __stdcall FUN_100363c0(int param_1, undefined4 param_2, undefined4 param_3)

{
  FILE *_File;
  size_t dwBytes;
  LPVOID _DstBuf;
  char local_20 [32];
  
  if (param_1 != -2) {
    return (LPVOID)0x0;
  }
  _sprintf(local_20,s__s_BWD_10093c74,param_3);
  _File = FID_conflict___wfopen(local_20,DAT_10093c7c);
  if (_File == (FILE *)0x0) {
    return (LPVOID)0x0;
  }
  dwBytes = FUN_1005bae0(_File);
  _DstBuf = HeapAlloc(DAT_10098224,1,dwBytes);
  _fread(_DstBuf,dwBytes,1,_File);
  _fclose(_File);
  return _DstBuf;
}
