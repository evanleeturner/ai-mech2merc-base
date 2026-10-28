/* SPDX-License-Identifier: MIT */
/* mercsw 100033ce */
/* mercsw 100033ce: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40f8;
extern HANDLE DAT_100adf74;
extern undefined DAT_101e8db4[];
extern undefined4 PTR_DAT_100af0a8;
undefined4 __stdcall _AIL_sample_user_data_8(undefined4, undefined4);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
uint __cdecl FUN_10002d8f(uint param_1, LPVOID param_2, ushort param_3, short param_4, int param_5);
undefined4 __stdcall _AIL_set_sample_user_data_12(undefined4, undefined4, undefined4);

void __stdcall FUN_100033ce(undefined4 param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  LPVOID lpMem;
  undefined4 *puVar4;
  uint local_10;
  
  uVar2 = _AIL_sample_user_data_8(param_1,1);
  iVar3 = _AIL_sample_user_data_8(param_1,2);
  local_10 = _AIL_sample_user_data_8(param_1,3);
  *(undefined4 *)(DAT_100a40f8 + 0x48 + iVar3 * 4) = 0;
  if (0 < *(short *)((int)DAT_101e8db4 + uVar2 * 8 + 2)) {
    psVar1 = (short *)((int)DAT_101e8db4 + uVar2 * 8 + 2);
    *psVar1 = *psVar1 + -1;
  }
  if (((uVar2 != 0) && (0 < (int)uVar2)) && (uVar2 != local_10)) {
    FUN_1008664f(uVar2,(int *)PTR_DAT_100af0a8);
  }
  lpMem = (LPVOID)_AIL_sample_user_data_8(param_1,4);
  if (lpMem != (LPVOID)0x0) {
    HeapFree(DAT_100adf74,1,lpMem);
  }
  if (local_10 != 0) {
    if (local_10 == 0xffffffff) {
      local_10 = 0;
    }
    else {
      uVar2 = FUN_10002d8f(local_10,(LPVOID)0x0,*(ushort *)(DAT_100a40f8 + 0x4e8 + iVar3 * 2),
                           (short)iVar3,0);
      if ((int)uVar2 < 0) {
        FUN_1008664f(local_10,(int *)PTR_DAT_100af0a8);
        local_10 = 0;
      }
      else {
        _AIL_set_sample_user_data_12(param_1,1,local_10);
        if ((*(ushort *)(DAT_100a40f8 + 0x4e8 + iVar3 * 2) & 0x1000) == 0) {
          _AIL_set_sample_user_data_12(param_1,3,0xffffffff);
        }
        else {
          _AIL_set_sample_user_data_12(param_1,3,local_10);
        }
        *(undefined4 *)(DAT_100a40f8 + 0x48 + iVar3 * 4) = 1;
      }
    }
  }
  if (local_10 == 0) {
    *(undefined4 *)(DAT_100a40f8 + 0x4a8 + iVar3 * 4) = 0;
    *(undefined2 *)(DAT_100a40f8 + 0x4e8 + iVar3 * 2) = 0;
    puVar4 = (undefined4 *)_AIL_sample_user_data_8(param_1,0);
    *puVar4 = 0;
  }
  return;
}
