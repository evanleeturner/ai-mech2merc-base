/* SPDX-License-Identifier: MIT */
/* mercsw 1002ce4e */
/* mercsw 1002ce4e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c2dec;
extern undefined4 PTR_DAT_100c2be0;
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
int __cdecl __isctype(int _C, int _Type);
int __cdecl _atoi(char * _Str);
undefined4 * __cdecl FUN_1001d9b0(short * param_1, undefined4 * param_2);
uint __cdecl FUN_1002cf43(int param_1);
undefined * __stdcall FUN_1002d233(void);
undefined __cdecl FUN_1001dd9f(int * param_1);
undefined __stdcall FUN_1004726c(void);
undefined __stdcall FUN_1003289f(void);

undefined * __cdecl FUN_1002ce4e(char * param_1)

{
  int iVar1;
  uint uVar2;
  uint local_44;
  undefined4 local_40 [8];
  short local_20;
  char acStack_1e [14];
  undefined *local_10;
  short *local_c;
  int *local_8;
  
  local_10 = (undefined *)0x0;
  local_c = &local_20;
  _strncpy(acStack_1e,param_1,0xc);
  *(undefined1 *)(local_c + 7) = 0;
  if (DAT_100c2dec < 2) {
    local_44 = *(ushort *)(PTR_DAT_100c2be0 + *param_1 * 2) & 4;
  }
  else {
    local_44 = __isctype((int)*param_1,4);
  }
  if (local_44 == 0) {
    *local_c = -1;
  }
  else {
    iVar1 = _atoi(param_1);
    *local_c = (short)iVar1;
  }
  local_8 = (int *)(FUN_1001d9b0(local_c,local_40));
  if (local_8 != (int *)0x0) {
    uVar2 = FUN_1002cf43((int)local_8);
    if (uVar2 != 0) {
      local_10 = FUN_1002d233();
    }
    FUN_1001dd9f(local_8);
    FUN_1004726c();
    FUN_1003289f();
  }
  return local_10;
}
