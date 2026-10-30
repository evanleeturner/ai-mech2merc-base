/* SPDX-License-Identifier: MIT */
/* mercsw 10047fde */
/* mercsw 10047fde: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 * __cdecl FUN_100480d9(char * param_1);
int __cdecl FID_conflict___open(char * _Filename, int _OpenFlag, ...);
int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount);
int __cdecl __close(int _FileHandle);

undefined4 __cdecl FUN_10047fde(char * param_1, void * buf)

{
  char *_Filename;
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar2 = 0x80;
  iVar1 = 0x8101;
  _Filename = (char *)FUN_100480d9(param_1);
  iVar1 = FID_conflict___open(_Filename,iVar1,uVar2);
  if (iVar1 == -1) {
    local_8 = 0xffffffff;
  }
  else {
    __write(iVar1,buf,0x54);
    __close(iVar1);
    local_8 = 0;
  }
  return local_8;
}
