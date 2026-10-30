/* SPDX-License-Identifier: MIT */
/* mercsw 10047a54 */
/* mercsw 10047a54: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 DAT_101f52d8;
extern void * DAT_101f5300;
extern undefined4 PTR_DAT_100af0cc;
int __cdecl FID_conflict___open(char * _Filename, int _OpenFlag, ...);
ushort * __cdecl FUN_1008668b(int param_1, uint buf, int * param_3);
int __cdecl __close(int _FileHandle);
int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount);
undefined __cdecl FUN_1008664f(uint param_1, int * buf);

undefined4 __cdecl FUN_10047a54(char * param_1, void * buf)

{
  int _FileHandle;
  undefined4 uVar1;
  ushort *_Buf;
  
  _FileHandle = FID_conflict___open(param_1,0x8101,0x80);
  if (_FileHandle == -1) {
    uVar1 = 0;
  }
  else {
    _Buf = FUN_1008668b(DAT_100af17c,0xd,(int *)PTR_DAT_100af0cc);
    if (_Buf == (ushort *)0x0) {
      __close(_FileHandle);
      uVar1 = 0;
    }
    else {
      __write(_FileHandle,_Buf,0x20);
      __write(_FileHandle,buf,0x300);
      __write(_FileHandle,DAT_101f5300,DAT_101f52d8);
      __close(_FileHandle);
      FUN_1008664f(0xd,(int *)PTR_DAT_100af0cc);
      uVar1 = 1;
    }
  }
  return uVar1;
}
