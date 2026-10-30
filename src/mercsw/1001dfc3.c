/* SPDX-License-Identifier: MIT */
/* mercsw 1001dfc3 */
/* mercsw 1001dfc3: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount);

uint __cdecl FUN_1001dfc3(int fileHandle, void * param_2, uint param_3)

{
  uint _MaxCharCount;
  uint uVar1;
  uint local_c;
  void *local_8;
  
  local_c = param_3;
  local_8 = param_2;
  while( true ) {
    if (local_c == 0) {
      return param_3;
    }
    _MaxCharCount = local_c;
    if (0x3fff < local_c) {
      _MaxCharCount = 0x4000;
    }
    uVar1 = __write(fileHandle,local_8,_MaxCharCount);
    if (uVar1 != _MaxCharCount) break;
    local_c = local_c - _MaxCharCount;
    local_8 = (void *)((int)local_8 + _MaxCharCount);
  }
  return 0xffffffff;
}
