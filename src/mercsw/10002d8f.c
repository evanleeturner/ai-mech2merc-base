/* SPDX-License-Identifier: MIT */
/* mercsw 10002d8f */
/* mercsw 10002d8f: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef unsigned long long ulonglong;
extern undefined4 DAT_100a40f8;
extern char DAT_100a40fc[];
extern HANDLE DAT_100adf74;
extern undefined DAT_101e8db0[];
extern undefined DAT_101e8db4[];
extern undefined4 PTR_DAT_100af0a8;
undefined4 __stdcall _AIL_end_sample_4(undefined4);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined4 __stdcall _AIL_init_sample_4(undefined4);
undefined4 __stdcall _AIL_set_sample_user_data_12(undefined4, undefined4, undefined4);
undefined4 __stdcall _AIL_register_EOS_callback_8(undefined4, undefined4);
undefined __stdcall FUN_100033ce(undefined4 param_1);

uint __cdecl FUN_10002d8f(uint param_1, LPVOID param_2, ushort param_3, short param_4, int param_5)

{
  short *psVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (param_2 != (LPVOID)0x0) {
    param_1 = 0xffffffff;
  }
  if ((int)param_1 < 1) {
    if (param_2 == (LPVOID)0x0) {
      return 0xfffffffa;
    }
  }
  else if (((*(short *)((int)DAT_101e8db4 + param_1 * 8 + 2) != -1) &&
           (*(short *)((int)DAT_101e8db0 + param_1 * 8 + 2) != -1)) &&
          (*(short *)((int)DAT_101e8db0 + param_1 * 8 + 2) <=
           *(short *)((int)DAT_101e8db4 + param_1 * 8 + 2))) {
    return 0xfffffff6;
  }
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  if (param_4 != -1) {
    if (*(int *)(DAT_100a40f8 + 0x48 + param_4 * 4) != 0) {
      return 0xfffffff8;
    }
    local_14 = (uint)param_4;
  }
  if (local_14 == 0xffffffff) {
    local_10 = 0;
    while ((local_10 < *(uint *)(DAT_100a40f8 + 0x44) && (local_14 == 0xffffffff))) {
      if (*(char *)(DAT_100a40f8 + 0x4e9 + local_10 * 2) == '\0') {
LAB_10002fb1:
        if (*(int *)(DAT_100a40f8 + 0x48 + local_10 * 4) == 0) {
          local_14 = local_10;
        }
        else if ((int)*(char *)(DAT_100a40f8 + 0x4e8 + local_10 * 2) < (int)(uint)param_3) {
          local_c = local_10;
        }
      }
      else {
        if ((*(ushort *)(DAT_100a40f8 + 0x4e8 + local_10 * 2) & 0x100) == 0) {
          if ((((*(ushort *)(DAT_100a40f8 + 0x4e8 + local_10 * 2) & 0x400) != 0) &&
              ((param_3 & 0x400) != 0)) &&
             (*(uint *)(DAT_100a40f8 + 0x4a8 + local_10 * 4) == param_1)) {
            return 0xfffffff6;
          }
          if ((((*(ushort *)(DAT_100a40f8 + 0x4e8 + local_10 * 2) & 0x200) != 0) &&
              ((param_3 & 0x200) != 0)) &&
             (*(uint *)(DAT_100a40f8 + 0x4a8 + local_10 * 4) == param_1)) {
            _AIL_end_sample_4(*(undefined4 *)(DAT_100a40f8 + 4 + local_10 * 4));
            *(undefined4 *)(DAT_100a40f8 + 0x48 + local_10 * 4) = 0;
            *(undefined2 *)(DAT_100a40f8 + 0x4e8 + local_10 * 2) = 0;
          }
          goto LAB_10002fb1;
        }
        if ((param_3 & 0x100) != 0) {
          return 0xfffffff7;
        }
      }
      local_10 = local_10 + 1;
    }
    if (local_14 == 0xffffffff) {
      if (local_c == 0xffffffff) {
        return 0xfffffff8;
      }
      local_14 = local_c;
      _AIL_end_sample_4(*(undefined4 *)(DAT_100a40f8 + 4 + local_c * 4));
      *(undefined4 *)(DAT_100a40f8 + 0x48 + local_c * 4) = 0;
    }
  }
  if (param_2 == (LPVOID)0x0) {
    puVar5 = FUN_1008668b(0,param_1,(int *)PTR_DAT_100af0a8);
    *(ushort **)(DAT_100a40f8 + 0x368 + local_14 * 4) = puVar5;
    if (*(int *)(DAT_100a40f8 + 0x368 + local_14 * 4) == 0) {
      return 0xfffffffa;
    }
  }
  else {
    *(LPVOID *)(DAT_100a40f8 + 0x368 + local_14 * 4) = param_2;
  }
  puVar3 = *(undefined4 **)(DAT_100a40f8 + 0x368 + local_14 * 4);
  iVar6 = local_14 * 0xe + DAT_100a40f8;
  *(undefined4 *)(iVar6 + 0x88) = *puVar3;
  *(undefined4 *)(iVar6 + 0x8c) = puVar3[1];
  *(undefined4 *)(iVar6 + 0x90) = puVar3[2];
  *(undefined2 *)(iVar6 + 0x94) = *(undefined2 *)(puVar3 + 3);
  piVar2 = (int *)(DAT_100a40f8 + 0x368 + local_14 * 4);
  *piVar2 = *piVar2 + 0xe;
  iVar6 = _strncmp((char *)(local_14 * 0xe + DAT_100a40f8 + 0x88),DAT_100a40fc,4);
  if (iVar6 == 0) {
    *(ushort *)(DAT_100a40f8 + 0x4e8 + local_14 * 2) = param_3;
    *(uint *)(DAT_100a40f8 + 0x4a8 + local_14 * 4) = param_1;
    *(undefined4 *)(DAT_100a40f8 + 0x168 + local_14 * 4) =
         *(undefined4 *)(DAT_100a40f8 + 0x90 + local_14 * 0xe);
    *(uint *)(DAT_100a40f8 + 0x1a8 + local_14 * 4) =
         (uint)*(ushort *)(DAT_100a40f8 + 0x94 + local_14 * 0xe);
    *(int *)(DAT_100a40f8 + 0x1e8 + local_14 * 4) =
         (int)(0x2000 / (ulonglong)*(uint *)(DAT_100a40f8 + 0x1a8 + local_14 * 4));
    *(int *)(DAT_100a40f8 + 0x268 + local_14 * 4) =
         *(int *)(DAT_100a40f8 + 0x1e8 + local_14 * 4) *
         *(int *)(DAT_100a40f8 + 0x1a8 + local_14 * 4);
    *(int *)(DAT_100a40f8 + 0x2ac + local_14 * 8) =
         *(int *)(DAT_100a40f8 + 0x2a8 + local_14 * 8) +
         *(int *)(DAT_100a40f8 + 0x268 + local_14 * 4);
    *(undefined4 *)(DAT_100a40f8 + 0x228 + local_14 * 4) =
         *(undefined4 *)(DAT_100a40f8 + 0x1e8 + local_14 * 4);
    if (*(uint *)(DAT_100a40f8 + 0x168 + local_14 * 4) <
        *(uint *)(DAT_100a40f8 + 0x228 + local_14 * 4)) {
      *(undefined4 *)(DAT_100a40f8 + 0x228 + local_14 * 4) =
           *(undefined4 *)(DAT_100a40f8 + 0x168 + local_14 * 4);
    }
    *(undefined4 *)(DAT_100a40f8 + 0x328 + local_14 * 4) = 0;
    uVar4 = *(undefined4 *)(DAT_100a40f8 + 4 + local_14 * 4);
    _AIL_init_sample_4(uVar4);
    if (param_5 == -1) {
      param_5 = local_14 * 4 + DAT_100a40f8 + 0x48;
    }
    if (param_5 != 0) {
      _AIL_set_sample_user_data_12(uVar4,0,param_5);
    }
    _AIL_set_sample_user_data_12(uVar4,1,param_1);
    _AIL_set_sample_user_data_12(uVar4,2,local_14);
    _AIL_set_sample_user_data_12(uVar4,3,0);
    _AIL_set_sample_user_data_12(uVar4,4,(undefined4)(param_2));
    _AIL_register_EOS_callback_8(uVar4,(undefined4)(FUN_100033ce));
    if ((0 < (int)param_1) && (*(short *)((int)DAT_101e8db4 + param_1 * 8 + 2) != -1)) {
      psVar1 = (short *)((int)DAT_101e8db4 + param_1 * 8 + 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  else {
    if (param_2 == (LPVOID)0x0) {
      FUN_1008664f(param_1,(int *)PTR_DAT_100af0a8);
    }
    else {
      HeapFree(DAT_100adf74,1,param_2);
    }
    *(undefined4 *)(DAT_100a40f8 + 0x368 + local_14 * 4) = 0;
    local_14 = 0xfffffff9;
  }
  return local_14;
}
