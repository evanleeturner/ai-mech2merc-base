/* SPDX-License-Identifier: MIT */
/* mercsw 1004256a */
extern void __cdecl FUN_1002950f(int, short);
extern void __cdecl FUN_1002a4e0(int, short, unsigned short, int);
extern int __cdecl FUN_1004521e(int *);
extern int __cdecl FUN_10044bba(int, int);
extern int __cdecl FUN_10043e6b(int);
extern unsigned char __cdecl FUN_100447ff(int, int);
extern int __cdecl FUN_10051f43(int);
extern unsigned int __cdecl FUN_100428b0(short *, short);
extern int __cdecl FUN_1002a132(int);

int __cdecl FUN_1004256a(int *param_1)
{
  short *psVar1;
  int *piVar2;
  int iVar4;
  unsigned int uVar5;
  short local_c;
  short local_8;
  unsigned int tmp_u;
  int tmp_i;

  local_c = -1;
  __builtin_memcpy(&psVar1, (char *)param_1 + 0x202, 4);
  piVar2 = (int *)param_1[8];
  do {
    FUN_1002950f((int)param_1, (short)param_1[0x5e]);
    if (param_1[0x72] != 0) {
      if (param_1[0x72] == -2) {
        FUN_1002a4e0((int)param_1, 4, *(unsigned short *)((char *)param_1 + 0x17a), 0);
        tmp_i = 1;
        __builtin_memcpy((char *)param_1 + 0x17e, &tmp_i, 4);
      }
      else {
        local_c = (short)param_1[0x72];
      }
      param_1[0x72] = 0;
      return (int)local_c;
    }
    if (*param_1 == 1) {
      iVar4 = FUN_1004521e(piVar2);
      if (iVar4 != 0) {
        local_c = 10;
        return (int)local_c;
      }
      if ((*(unsigned short *)((char *)param_1 + 0x17a) & 0x200) == 0) {
        local_c = 0;
        return (int)local_c;
      }
      iVar4 = FUN_10044bba((int)param_1, 0x14);
      if (iVar4 != 0) {
        __builtin_memcpy(&tmp_u, (char *)param_1 + 0x1f2, 4);
        if (((tmp_u >> 1) & 1) != 0) {
          iVar4 = FUN_10043e6b((int)param_1);
          if (iVar4 != 0) {
            if (FUN_100447ff((int)param_1, param_1[0x33]) != 0) {
              if (*(short *)((char *)param_1 + 0x1c6) == 0) {
                local_c = 9;
              }
              else {
                local_c = 0;
              }
              if ((local_c == 0) && (iVar4 = FUN_10051f43(2), iVar4 != 0)) {
                local_c = 8;
              }
              return (int)local_c;
            }
          }
        }
      }
    }
    if (*(short *)((char *)param_1 + 0x1c6) == -1) {
      iVar4 = FUN_10051f43((int)*psVar1 - (int)psVar1[1]);
      local_c = *(short *)(unsigned int)((unsigned int)*(int *)(psVar1 + 2) +
                                         (unsigned int)((int)(short)iVar4 * 0x12));
    }
    else {
      uVar5 = FUN_100428b0(psVar1, *(short *)((char *)param_1 + 0x1c6));
      local_8 = (short)uVar5;
      if (local_8 == -1) {
        local_8 = 0;
      }
      iVar4 = FUN_10051f43((int)*(short *)(unsigned int)((unsigned int)*(int *)(psVar1 + 2) + 2u +
                                                         (unsigned int)((int)local_8 * 0x12)));
      local_c = *(short *)(unsigned int)((unsigned int)iVar4 * 2u + 4u +
                                         (unsigned int)*(int *)(psVar1 + 2) +
                                         (unsigned int)((int)local_8 * 0x12));
    }
    if ((*(short *)((char *)param_1 + 0x1c6) == 4) && (param_1[0x76] == 1)) {
      local_c = 5;
      return (int)local_c;
    }
    if (local_c == 4) {
      iVar4 = FUN_10044bba((int)param_1, 0x14);
      __builtin_memcpy(&tmp_u, (char *)param_1 + 0x1f2, 4);
      if ((iVar4 == 0) || (((tmp_u >> 1) & 1) == 0)) {
        local_c = -1;
      }
    }
    if ((local_c == 4) && (iVar4 = FUN_1002a132((int)param_1), piVar2[0x105] < iVar4)) {
      local_c = 0;
    }
    if ((local_c == 3) && (piVar2[0x105] < 0xa0000)) {
      local_c = 2;
    }
    if ((local_c == 5) && (param_1[0x1e] != 0)) {
      local_c = 0;
    }
    if (local_c != -1) {
      return (int)local_c;
    }
  } while (1);
}
