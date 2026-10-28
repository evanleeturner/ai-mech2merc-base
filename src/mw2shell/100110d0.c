/* SPDX-License-Identifier: MIT */
/* mw2shell 100110d0 */
/* mw2shell 100110d0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char DAT_1008e954[];
extern undefined4 DAT_100b07f0;
extern undefined DAT_100b07f8;
extern undefined DAT_100b0a30;
extern char s_mw2prm_cfg_1008e958[];
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);
undefined __stdcall FUN_10035ef0(void);

void __cdecl FUN_100110d0(int * param_1, undefined1 * param_2, undefined4 * param_3)

{
  char cVar1;
  int iVar2;
  FILE *_File;
  size_t sVar3;
  int iVar4;
  
  _File = FID_conflict___wfopen(s_mw2prm_cfg_1008e958,DAT_1008e954);
  if (_File != (FILE *)0x0) {
    sVar3 = _fread(&DAT_100b07f0,0x344,1,_File);
    if (sVar3 != 1) {
      _fclose(_File);
      return;
    }
    _fclose(_File);
    if (*param_1 != 0) {
      *param_1 = DAT_100b07f0;
      *param_2 = DAT_100b07f8;
      *param_3 = (undefined4)(&DAT_100b0a30);
    }
    iVar4 = 0;
    cVar1 = (char)DAT_100b0a30;
    while (' ' < cVar1) {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar1 = *(char *)((int)&DAT_100b0a30 + iVar2);
    }
    *(undefined1 *)((int)&DAT_100b0a30 + iVar4) = 0;
    FUN_10035ef0();
  }
  return;
}
