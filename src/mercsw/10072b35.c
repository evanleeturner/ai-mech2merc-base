/* SPDX-License-Identifier: MIT */
/* mercsw 10072b35 */
void * __stdcall HeapAlloc(void *hHeap, unsigned int dwFlags, unsigned int dwBytes);
int __cdecl FUN_1005d8e0(void);
void * __cdecl FUN_1005db1f(int param_1);
char * __cdecl _strchr(const char *str, int c);
int __cdecl _sscanf(const char *buffer, const char *format, ...);
long long __cdecl __ftol(void);
int __cdecl _atoi(const char *str);
int __cdecl FUN_10032c10(int param_1);
int __cdecl FUN_1000c8ee(int param_1);
void * __cdecl FUN_1000c9e3(int param_1);
int __cdecl FUN_1001d5cb(int param_1);
int __cdecl FixedMul16(int param_1, int param_2);
void __cdecl FUN_1002f6a8(void *param_1, int param_2, int param_3, int param_4, int param_5);
void __cdecl FUN_1002fbc0(int *param_1);
extern void *DAT_100adf74;

int __cdecl FUN_10072b35(int param_1, char *param_2, int param_3)
{
  int **puVar1;
  void *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long long lVar6;
  float local_14;
  float local_18;
  float local_1c;
  float local_20;
  int *local_10;
  char *local_c;
  int local_8;

  if (param_1 == 0) {
    local_10 = HeapAlloc(DAT_100adf74, 1, 0x1c);
    if (local_10 == NULL) {
      return 0;
    }
    iVar3 = FUN_1005d8e0();
    puVar1 = (int **)FUN_1005db1f(iVar3);
    *puVar1 = local_10;
    local_10[4] = 0;
    local_10[3] = local_10[4];
    local_10[2] = local_10[3];
    local_10[1] = 0;
    local_c = _strchr(param_2, 0x3b);
    if (local_c != NULL) {
      *local_c = '\0';
      local_c = local_c + 1;
      _sscanf(local_c, "%f,%f,%f,%f", &local_14, &local_18, &local_1c, &local_20);
      lVar6 = __ftol();
      local_10[2] = (int)lVar6;
      lVar6 = __ftol();
      local_10[3] = (int)lVar6;
      lVar6 = __ftol();
      local_10[4] = (int)lVar6;
      lVar6 = __ftol();
      local_10[5] = (int)lVar6;
      if (local_10[5] == 0) {
        local_10[5] = 0xb5;
      }
      local_10[6] = param_3;
    }
    iVar3 = _atoi(param_2);
    iVar3 = FUN_10032c10(iVar3);
    iVar3 = FUN_1000c8ee(iVar3);
    if (iVar3 == -1) {
      return 0;
    }
    puVar2 = FUN_1000c9e3(iVar3);
    *local_10 = (int)puVar2;
  }
  else if (param_1 == 1) {
    iVar3 = FUN_1005d8e0();
    local_10 = *(int **)FUN_1005db1f(iVar3);
    if (local_10 == NULL) {
      return 0;
    }
    if (*local_10 == 0) {
      return 0;
    }
    if (*(int *)*local_10 == 0) {
      return 0;
    }
    iVar3 = FUN_1001d5cb(*(int *)*local_10);
    local_10[1] = iVar3;
    iVar3 = ((param_3 - local_10[6]) * 0x10000) / local_10[5];
    iVar4 = FixedMul16(local_10[2], iVar3);
    iVar5 = FixedMul16(local_10[3], iVar3);
    local_8 = FixedMul16(local_10[4], iVar3);
    local_10[6] = param_3;
    FUN_1002f6a8((void *)local_10[1], iVar4, iVar5, local_8, 0);
    FUN_1002fbc0((int *)local_10[1]);
  }
  return 1;
}
