/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c000 */
/* mw2shell 1004c000: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_10083508;
extern char DAT_1009b6d4[];
extern char s_MW2MSN_CFG_1009b6d8[];
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

void __cdecl FUN_1004c000(undefined4 * param_1)

{
  FILE *_File;
  int iVar1;
  undefined4 *puVar2;
  
  _File = FID_conflict___wfopen(s_MW2MSN_CFG_1009b6d8,DAT_1009b6d4);
  if (_File != (FILE *)0x0) {
    _fread(param_1,0x9d4,1,_File);
    _fclose(_File);
    puVar2 = (undefined4 *)(DAT_10083508 + 0x23d3);
    for (iVar1 = 0x275; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}
