/* SPDX-License-Identifier: MIT */
/* mercsw 10073127 */
/* mercsw 10073127: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern char s__d________d_100b4e98[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __stdcall FUN_1005d8e0(void);
int __cdecl FUN_1005db1f(int param_1);
char * __cdecl _strchr(char * _Str, int _Val);
int __cdecl _sscanf(char * _Src, char * _Format, ...);
int __cdecl FUN_1007b9d2(uint param_1, char * str);
int __cdecl _atoi(char * _Str);
int __cdecl FUN_10032c10(int param_1);
undefined4 __cdecl FUN_1000c8ee(int param_1);
undefined * __cdecl FUN_1000c9e3(int param_1);
undefined __cdecl StopAndReleaseSoundSample(int param_1);
undefined4 __cdecl FUN_1001d5cb(int param_1);
undefined __cdecl FUN_1000393d(int * param_1);

undefined4 __cdecl FUN_10073127(int param_1, char * str)

{
  undefined *puVar1;
  int iVar2;
  char local_7c [100];
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  char *local_8;
  
  if (param_1 == 0) {
    local_c = HeapAlloc(DAT_100adf74,1,0x1e);
    if (local_c == (int *)0x0) {
      return 0;
    }
    iVar2 = FUN_1005d8e0();
    local_18 = (int *)FUN_1005db1f(iVar2);
    *local_18 = (int)local_c;
    local_c[1] = -1;
    local_c[2] = 0;
    local_c[6] = 1;
    local_8 = _strchr(str,0x3b);
    if (local_8 != (char *)0x0) {
      *local_8 = '\0';
      local_8 = local_8 + 1;
      _sscanf(local_8,s__d________d_100b4e98,local_c,local_7c,local_c + 5);
      *local_c = *local_c * 100;
    }
    iVar2 = FUN_1007b9d2(10,local_7c);
    *(short *)(local_c + 7) = (short)iVar2;
    local_14 = _atoi(str);
    local_14 = FUN_10032c10(local_14);
    local_10 = FUN_1000c8ee(local_14);
    if (local_10 == -1) {
      return 0;
    }
    puVar1 = FUN_1000c9e3(local_10);
    local_c[3] = (int)puVar1;
  }
  else if (param_1 == 1) {
    iVar2 = FUN_1005d8e0();
    local_18 = (int *)FUN_1005db1f(iVar2);
    local_c = (int *)*local_18;
    if (local_c == (int *)0x0) {
      return 0;
    }
    if ((local_c[3] == 0) || (local_c[5] == 0)) {
      StopAndReleaseSoundSample((int)local_c);
      return 0;
    }
    if (*(int *)local_c[3] == 0) {
      StopAndReleaseSoundSample((int)local_c);
      return 0;
    }
    iVar2 = FUN_1001d5cb(*(int *)local_c[3]);
    local_c[4] = iVar2;
    FUN_1000393d(local_c);
  }
  else if (param_1 == 2) {
    iVar2 = FUN_1005d8e0();
    local_18 = (int *)FUN_1005db1f(iVar2);
    local_c = (int *)*local_18;
    if (local_c == (int *)0x0) {
      return 1;
    }
    StopAndReleaseSoundSample((int)local_c);
  }
  return 1;
}
