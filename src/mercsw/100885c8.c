/* SPDX-License-Identifier: MIT */
/* mercsw 100885c8 */
extern int DAT_100b3904;
extern int DAT_100c8dc0[];
extern unsigned char DAT_100c8990[];

extern long long __cdecl __ftol(void);

int __cdecl FUN_100885c8(int *param_1)
{
  char *iVar1;
  long long lVar2;
  int local_c;
  char *pA;
  char *pB;
  int *pC;
  int tmp;
  int t4;
  unsigned int sh;

  iVar1 = (char *)param_1[5];
  local_c = (int)*(signed char *)(iVar1 + 0x15);

  __builtin_memcpy(&pA, iVar1 + 0x2a, 4);
  if ((pA == 0) || (*pA == '\0')) {
    __builtin_memcpy(&pB, iVar1 + 0x2e, 4);
    if ((pB != 0) && (*pB != '\0')) {
      __builtin_memcpy(&pC, iVar1 + 4, 4);
      *pC = 0;
      /* UNRESOLVED: x87 st0 input to __ftol (FPU loads not in decompile) */
      lVar2 = __ftol();
      tmp = (int)lVar2;
      __builtin_memcpy(iVar1 + 0x1a, &tmp, 4);
      local_c = 1;
    }
  }
  else {
    if (param_1[2] != 0) {
      (*(void (__cdecl **)(int, int))(DAT_100c8dc0[*param_1] + 0x10))
          (*(int *)(DAT_100c8990 + *param_1 * 0x74), param_1[1]);
    }
    __builtin_memcpy(&pC, iVar1 + 4, 4);
    *pC = 0;
    tmp = *(int *)(iVar1 + 0x10);
    __builtin_memcpy(iVar1 + 0x1a, &tmp, 4);
    local_c = 1;
  }

  if (*(char *)(iVar1 + 0x15) == '\0') {
    char *pD;
    __builtin_memcpy(&pD, iVar1 + 0x22, 4);
    if ((pD != 0) && (*pD != '\0')) {
      __builtin_memcpy(&pC, iVar1 + 4, 4);
      if (*pC < 0) {
        *pC = 0;
      }
      sh = (unsigned int)(*(unsigned char *)(iVar1 + 0x1e)) & 0x1f;
      *pC = (int)((unsigned int)*pC + (((unsigned int)DAT_100b3904 * 3u) << sh));
      if (0x8000 < *pC) {
        *pC = 0x8000;
      }
      __builtin_memcpy(&tmp, iVar1 + 0x1a, 4);
      tmp = (int)((unsigned int)tmp + (unsigned int)*pC);
      __builtin_memcpy(iVar1 + 0x1a, &tmp, 4);
      if (0x10000 < tmp) {
        t4 = 0x10000;
        __builtin_memcpy(iVar1 + 0x1a, &t4, 4);
      }
      local_c = 1;
    }
    __builtin_memcpy(&pD, iVar1 + 0x26, 4);
    if ((pD != 0) && (*pD != '\0')) {
      __builtin_memcpy(&pC, iVar1 + 4, 4);
      if (0 < *pC) {
        *pC = 0;
      }
      sh = (unsigned int)(*(unsigned char *)(iVar1 + 0x1e)) & 0x1f;
      *pC = (int)((unsigned int)*pC - (((unsigned int)DAT_100b3904 * 3u) << sh));
      if (*pC < -0x8000) {
        *pC = -0x8000;
      }
      __builtin_memcpy(&tmp, iVar1 + 0x1a, 4);
      tmp = (int)((unsigned int)tmp + (unsigned int)*pC);
      __builtin_memcpy(iVar1 + 0x1a, &tmp, 4);
      if (tmp < -0x10000) {
        t4 = -0x10000;
        __builtin_memcpy(iVar1 + 0x1a, &t4, 4);
      }
      local_c = 1;
    }
    if (local_c == 0) {
      __builtin_memcpy(&pC, iVar1 + 4, 4);
      *pC = 0;
    }
  }

  *(char *)(iVar1 + 0x15) = (char)local_c;
  return local_c;
}
