/* SPDX-License-Identifier: MIT */
/* mercsw 1003c4d3 */
/* mercsw 1003c4d3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefb0;
extern undefined4 DAT_100b3c54;
extern undefined DAT_10160e80[];
extern undefined DAT_10160e90[];
extern undefined4 PTR_DAT_100af0c4;
undefined4 __stdcall _AIL_sequence_status_4(undefined4);
undefined4 __stdcall _AIL_release_sequence_handle_4(undefined4);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __stdcall _AIL_allocate_sequence_handle_4(undefined4);
undefined4 __stdcall _AIL_init_sequence_12(undefined4, undefined4, undefined4);
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined4 __stdcall _AIL_set_sequence_volume_12(undefined4, undefined4, undefined4);
undefined4 __stdcall _AIL_start_sequence_4(undefined4);

undefined4 __cdecl FUN_1003c4d3(int param_1, short param_2, short param_3)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = -1;
  if (param_2 < 1) {
    uVar1 = 0;
  }
  else {
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      local_14 = *(int *)(DAT_10160e90 + local_c * 4);
      if (local_14 != -1) {
        iVar2 = _AIL_sequence_status_4(local_14);
        if (iVar2 == 2) {
          _AIL_release_sequence_handle_4(local_14);
          *(undefined4 *)(DAT_10160e90 + local_c * 4) = 0xffffffff;
          local_14 = *(int *)(DAT_10160e90 + local_c * 4);
          FUN_1008664f((int)*(short *)(DAT_10160e80 + local_c * 2),(int *)PTR_DAT_100af0c4);
          *(undefined2 *)(DAT_10160e80 + local_c * 2) = 0;
        }
      }
      if (local_14 == -1) {
        local_10 = local_c;
      }
    }
    if (local_10 == -1) {
      uVar1 = 0xfffffff8;
    }
    else {
      puVar3 = FUN_1008668b(param_1,(int)param_2,(int *)PTR_DAT_100af0c4);
      if ((puVar3 == (ushort *)0x0) || (DAT_100aefb0 == 0)) {
        uVar1 = 0;
      }
      else {
        iVar2 = _AIL_allocate_sequence_handle_4(DAT_100aefb0);
        if (iVar2 == 0) {
          FUN_1008664f((int)param_2,(int *)PTR_DAT_100af0c4);
          uVar1 = 0xfffffff6;
        }
        else {
          *(int *)(DAT_10160e90 + local_10 * 4) = iVar2;
          _AIL_init_sequence_12(iVar2,(undefined4)(puVar3),(int)param_3);
          uVar1 = 0;
          iVar4 = FUN_10003d60(DAT_100b3c54,0x7f);
          _AIL_set_sequence_volume_12(iVar2,iVar4,uVar1);
          _AIL_start_sequence_4(iVar2);
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}
