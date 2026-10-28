/* SPDX-License-Identifier: MIT */
/* mercsw 1000393d */
/* mercsw 1000393d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100a40f8;
extern undefined4 DAT_100b3c4c;
extern undefined4 PTR_DAT_100aaf68;
extern undefined4 PTR_DAT_100af0a8;
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7);
undefined __cdecl FUN_10003c3e(int param_1);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __stdcall _AIL_allocate_file_sample_12(undefined4, undefined4, undefined4);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined4 __stdcall _AIL_set_sample_type_12(undefined4, undefined4, undefined4);
undefined4 __stdcall _AIL_set_sample_loop_count_8(undefined4, undefined4);
int __cdecl FUN_10003cf8(int param_1);
int __cdecl FUN_10003d60(int param_1, int param_2);
int __cdecl FUN_1000381c(int param_1);
undefined4 __stdcall _AIL_set_sample_pan_8(undefined4, undefined4);
undefined4 __stdcall _AIL_set_sample_volume_8(undefined4, undefined4);
undefined4 __stdcall FUN_1000387d(void);
undefined4 __stdcall _AIL_set_sample_playback_rate_8(undefined4, undefined4);
undefined4 __stdcall _AIL_start_sample_4(undefined4);

void __cdecl FUN_1000393d(int * param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0;
  if (DAT_100a40f8 != (undefined4 *)0x0) {
    if (param_1[6] == 0) {
      FUN_1002f322(param_1[4],&local_14,(undefined4 *)(&local_24),&local_28);
      local_14 = *(int *)PTR_DAT_100aaf68 - local_14;
      local_24 = *(int *)(PTR_DAT_100aaf68 + 4) - local_24;
      local_28 = *(int *)(PTR_DAT_100aaf68 + 8) - local_28;
      FUN_10083a59(local_14,local_24,local_28,&local_20,(undefined4 *)(&local_1c),&local_c,(int *)&local_c);
      if (*param_1 < local_1c) {
        FUN_10003c3e((int)param_1);
      }
      else {
        if (param_1[1] == -1) {
          for (local_c = 8; (int)local_c < 0x10; local_c = local_c + 1) {
            if (DAT_100a40f8[local_c + 0x12] == 0) {
              param_1[1] = local_c;
              break;
            }
          }
          if (param_1[1] == -1) {
            return;
          }
          if (param_1[2] == 0) {
            puVar1 = FUN_1008668b(0,(int)(short)param_1[7],(int *)PTR_DAT_100af0a8);
            param_1[2] = (int)puVar1;
          }
          if ((param_1[2] == 0) ||
             (local_8 = _AIL_allocate_file_sample_12(*DAT_100a40f8,param_1[2],0xffffffff),
             local_8 == 0)) {
            if ((short)param_1[7] != -1) {
              FUN_1008664f((int)(short)param_1[7],(int *)PTR_DAT_100af0a8);
            }
            param_1[1] = -1;
            param_1[2] = 0;
            return;
          }
          DAT_100a40f8[param_1[1] + 1] = local_8;
          DAT_100a40f8[param_1[1] + 0x12a] = (int)(short)param_1[7];
          *(undefined2 *)((int)DAT_100a40f8 + param_1[1] * 2 + 0x4e8) = 0x1000;
          _AIL_set_sample_type_12(local_8,0,0);
          _AIL_set_sample_loop_count_8(local_8,0);
          local_18 = 1;
        }
        local_8 = DAT_100a40f8[param_1[1] + 1];
        local_10 = FUN_10003cf8(local_1c);
        if (local_10 < 1) {
          FUN_10003c3e((int)param_1);
        }
        else {
          local_10 = FUN_10003d60(local_10,DAT_100b3c4c);
          local_10 = local_10 >> 2;
          iVar2 = FUN_1000381c(local_20);
          _AIL_set_sample_pan_8(local_8,iVar2);
          _AIL_set_sample_volume_8(local_8,local_10);
          uVar3 = FUN_1000387d();
          _AIL_set_sample_playback_rate_8(local_8,uVar3);
          if ((local_18 != 0) || (DAT_100a40f8[param_1[1] + 0x12] == 0)) {
            _AIL_start_sample_4(local_8);
            DAT_100a40f8[param_1[1] + 0x12] = 1;
          }
        }
      }
    }
    else {
      param_1[6] = 0;
    }
  }
  return;
}
