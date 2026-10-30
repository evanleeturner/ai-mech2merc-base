/* SPDX-License-Identifier: MIT */
/* mercsw 10044054 */
extern int DAT_100b38fc;
extern double _DAT_100a1220;
extern int DAT_100adf38;

extern unsigned int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
extern unsigned int __cdecl FUN_10002570(unsigned int param_1, int param_2);
extern int __cdecl FixedMul16(int param_1, int param_2);
extern void __cdecl FUN_100444ea(int param_1, int *param_2, int param_3, short param_4, int param_5, int param_6);
extern int __cdecl FUN_10014768(int *param_1, int *param_2, int param_3);
extern int __cdecl FUN_1004448b(int param_1);
extern unsigned int __cdecl FUN_100446b5(int param_1, int param_2, int param_3, int param_4, int param_5);
extern long long __cdecl __ftol(void);
extern unsigned int __cdecl FUN_1002a132(int param_1);
extern int __cdecl ClampSymmetric(int param_1, int param_2);

int __cdecl FUN_10044054(int *param_1)
{
  short sVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int bVar5;
  long long lVar6;
  int iVar7;
  int local_54;
  int local_50;
  int local_44[14];
  int local_c;
  unsigned int local_8;
  unsigned int local_1e6;

  local_50 = 0;
  iVar3 = param_1[8];
  if ((*(int *)(iVar3 + 0x3b8) == 0) ||
     ((((short)param_1[0x79] == 0 && (*(int *)(param_1[0x13] + 8) == 0)) ||
      (*(char *)(param_1[0x13] + 0x30) != '\0')))) {
    bVar5 = 0;
  }
  else if (DAT_100b38fc < param_1[0x78]) {
    bVar5 = param_1[0x77] != 0;
  }
  else {
    if ((short)param_1[0x79] == 0) {
      local_8 = ApproxLength3_Likely(*(int *)(iVar3 + 0x428), 0, *(int *)(iVar3 + 0x430));
      uVar2 = FUN_10002570(local_8, 500000);
      __builtin_memcpy((void *)((int)param_1 + 0x1e6), &uVar2, 4);
      if (*param_1 != 1) {
        __builtin_memcpy(&local_1e6, (void *)((int)param_1 + 0x1e6), 4);
        local_1e6 = local_1e6 >> 1;
        __builtin_memcpy((void *)((int)param_1 + 0x1e6), &local_1e6, 4);
      }
      __builtin_memcpy(&local_1e6, (void *)((int)param_1 + 0x1e6), 4);
      if ((double)local_1e6 < _DAT_100a1220) {
        local_1e6 = 0x4ccc;
        __builtin_memcpy((void *)((int)param_1 + 0x1e6), &local_1e6, 4);
      }
    }
    for (sVar1 = 0; sVar1 < 4; sVar1 = sVar1 + 1) {
      iVar7 = 0;
      __builtin_memcpy(&local_1e6, (void *)((int)param_1 + 0x1e6), 4);
      iVar3 = FixedMul16(local_1e6, 0x13880000);
      FUN_100444ea((int)param_1, local_44, (int)(short)param_1[0x79], sVar1, iVar3 >> 0x10, iVar7);
      iVar3 = FUN_10014768(local_44, &local_c, param_1[1]);
      if (iVar3 == 0) {
        if ((sVar1 == 0) &&
           (uVar4 = FUN_1002a132((int)param_1),
           (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0x10001)) {
          param_1[0x77] = 0;
          *(unsigned short *)(param_1 + 0x79) = 0;
        }
        if ((sVar1 == 0) && ((short)param_1[0x79] != 0)) {
          iVar7 = 1;
          __builtin_memcpy(&local_1e6, (void *)((int)param_1 + 0x1e6), 4);
          iVar3 = FixedMul16(local_1e6, 0x13880000);
          FUN_100444ea((int)param_1, local_44, -(int)(short)param_1[0x79], 1, iVar3 >> 0x10, iVar7);
          iVar3 = FUN_10014768(local_44, &local_c, param_1[1]);
          if ((iVar3 != 0) && (bVar5 = FUN_1004448b(local_c), bVar5 == 0)) {
            lVar6 = __ftol();
            local_50 = local_50 + (int)lVar6;
          }
        }
        break;
      }
      bVar5 = FUN_1004448b(local_c);
      if (bVar5 != 0) break;
      if ((short)param_1[0x79] == 0) {
        uVar2 = FUN_100446b5((int)param_1, local_c, param_1[0x14], param_1[0x15], param_1[0x16]);
        *(short *)(param_1 + 0x79) = (short)uVar2;
        param_1[0x77] = local_c;
      }
      lVar6 = __ftol();
      local_50 = local_50 + (int)lVar6;
    }
    if (local_50 != 0) {
      local_50 = ClampSymmetric(local_50, 0x3333333);
      *(int *)(param_1[0x13] + 0xc) = local_50;
      if (param_1[1] == DAT_100adf38) {
        local_54 = param_1[0x75];
      }
      else {
        local_54 = 0x400;
      }
      if (sVar1 == 0) {
        *(int *)(param_1[0x13] + 8) = local_54;
      }
      else {
        *(unsigned int *)(param_1[0x13] + 8) = 0x100;
      }
      if (*param_1 == 6) {
        *(unsigned int *)(param_1[0x13] + 8) = 0;
        *(unsigned int *)(param_1[0x13] + 0xc) = 0;
      }
    }
    if (param_1[1] == DAT_100adf38) {
      param_1[0x78] = DAT_100b38fc + 10;
    }
    else {
      param_1[0x78] = (-(unsigned int)(param_1[0x77] == 0) & 0x5b) + 0x5a + DAT_100b38fc;
    }
    bVar5 = local_50 != 0;
  }
  return bVar5;
}
