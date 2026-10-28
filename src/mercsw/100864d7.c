/* SPDX-License-Identifier: MIT */
/* mercsw 100864d7 */
/* mercsw 100864d7: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
typedef struct FILE FILE;
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100ba7bc;
extern undefined4 DAT_100ba7c0;
extern char DAT_100ba824[];
extern ushort * DAT_100c9054;
extern char s_Cache_table______________________100ba828[];
extern char s_ID__5d_Type__4s_Lock__d_Size__7d_100ba850[];
extern char s_ID__5d_Type__4s_Lock__d_Size__7d_100ba8a0[];
extern char s_Purge_list_______________________100ba878[];
extern char s_dbugcch_d_log_100ba814[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
int __cdecl _fprintf(FILE * _File, char * _Format, ...);
DWORD __stdcall HeapSize(HANDLE, DWORD, const void *);
int __cdecl _fclose(FILE * _File);

void __stdcall FUN_100864d7(void)

{
  int iVar1;
  FILE *_File;
  SIZE_T SVar2;
  int local_78;
  undefined4 local_74;
  undefined1 local_70;
  ushort *local_6c;
  char local_68 [100];
  
  (void)local_70;
  iVar1 = DAT_100ba7c0;
  DAT_100ba7c0 = DAT_100ba7c0 + 1;
  _sprintf(local_68,s_dbugcch_d_log_100ba814,iVar1);
  _File = _fopen(local_68,DAT_100ba824);
  local_70 = 0;
  _fprintf(_File,s_Cache_table______________________100ba828);
  for (local_78 = 0; local_78 < 0x3f1; local_78 = local_78 + 1) {
    for (local_6c = *(ushort **)(DAT_100ba7bc + local_78 * 4); local_6c != (ushort *)0x0;
        local_6c = *(ushort **)(local_6c + 4)) {
      local_74 = *(undefined4 *)(local_6c + 2);
      SVar2 = HeapSize(DAT_100adf74,1,local_6c);
      _fprintf(_File,s_ID__5d_Type__4s_Lock__d_Size__7d_100ba850,(uint)*local_6c,&local_74,
               (int)(short)local_6c[1],SVar2);
    }
  }
  _fprintf(_File,s_Purge_list_______________________100ba878);
  for (local_6c = DAT_100c9054; local_6c != (ushort *)0x0; local_6c = *(ushort **)(local_6c + 6)) {
    local_74 = *(undefined4 *)(local_6c + 2);
    SVar2 = HeapSize(DAT_100adf74,1,local_6c);
    _fprintf(_File,s_ID__5d_Type__4s_Lock__d_Size__7d_100ba8a0,(uint)*local_6c,&local_74,
             (int)(short)local_6c[1],SVar2);
  }
  _fclose(_File);
  return;
}
