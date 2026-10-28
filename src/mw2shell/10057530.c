/* SPDX-License-Identifier: MIT */
/* mw2shell 10057530 */
/* mw2shell 10057530: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100986b4;
extern undefined DAT_100a1ae8[];
extern char DAT_100a3650[];
extern undefined4 PTR_DAT_100985ec;
extern char s_MW2LOGO_d_cel_100a3640[];
ushort * __cdecl FUN_100425b0(int param_1, uint param_2, int * param_3);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

undefined4 __cdecl FUN_10057530(short param_1, short param_2)

{
  ushort *_DstBuf;
  FILE *_File;
  uint uVar1;
  char local_10 [16];
  
  _DstBuf = FUN_100425b0(DAT_100986b4,(int)*(short *)(DAT_100a1ae8 + param_1 * 0xe),
                         (int *)PTR_DAT_100985ec);
  if (_DstBuf == (ushort *)0x0) {
    return 3;
  }
  _sprintf(local_10,s_MW2LOGO_d_cel_100a3640,(int)param_2);
  _File = FID_conflict___wfopen(local_10,DAT_100a3650);
  if (_File == (FILE *)0x0) {
    return 1;
  }
  _fread(_DstBuf,1,0x1002,_File);
  uVar1 = _fclose(_File);
  return uVar1 & 0xffff0000;
}
