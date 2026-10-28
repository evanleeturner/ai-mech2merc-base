/* SPDX-License-Identifier: MIT */
/* mercsw 1006065d */
/* mercsw 1006065d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b36d4;
extern undefined4 DAT_100b36e4;
extern undefined4 DAT_100b36e8;
extern undefined4 DAT_100b36ec;
extern undefined4 DAT_100b36f0;
extern undefined4 DAT_100b3904;
extern ushort * DAT_100c7e40;
extern undefined DAT_100f3120[];
extern undefined4 PTR_DAT_100af0c8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
undefined4 __cdecl FUN_10071905(undefined4 * param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

undefined4 __cdecl FUN_1006065d(int param_1, uint param_2, int param_3)

{
  ushort *puVar1;
  ushort *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = (ushort *)0x0;
  local_c = -1;
  local_8 = 0;
  if ((DAT_100b36f0 < 1) || (param_3 != 0)) {
    if (DAT_100b36f0 < 1) {
      local_c = DAT_100b36d4;
      local_14 = FUN_1008668b(DAT_100af17c,*(uint *)(DAT_100f3120 + DAT_100b36d4 * 4),
                              (int *)PTR_DAT_100af0c8);
    }
  }
  else {
    local_14 = DAT_100c7e40;
  }
  if (local_14 != (ushort *)0x0) {
    puVar1 = FUN_1008668b(DAT_100af17c,*(uint *)(DAT_100f3120 + param_1 * 4),
                          (int *)PTR_DAT_100af0c8);
    if (puVar1 != (ushort *)0x0) {
      DAT_100b36e4 = param_1;
      DAT_100b36e8 = local_c;
      if (DAT_100b3904 == 0) {
        local_10 = 0x14;
      }
      else {
        if (param_3 == 1) {
          param_2 = (int)param_2 >> 1;
        }
        if (DAT_100b3904 < 1) {
          local_10 = 10;
        }
        else {
          local_10 = FUN_10002570(param_2,DAT_100b3904);
        }
        if (local_10 < 0x10000) {
          local_10 = 1;
        }
        else {
          local_10 = local_10 >> 0x10;
        }
      }
      if (param_3 == 2) {
        DAT_100b36f0 = 1;
      }
      else {
        DAT_100b36f0 = local_10;
      }
      if ((param_3 == 1) || (param_3 == 2)) {
        DAT_100b36ec = local_10;
      }
      else {
        DAT_100b36ec = 0;
      }
      FUN_10071905((undefined4 *)(&DAT_100c7e40),(int)local_14,(int)puVar1,0,0x100,local_10);
      local_8 = 1;
      FUN_1008664f(*(uint *)(DAT_100f3120 + param_1 * 4),(int *)PTR_DAT_100af0c8);
    }
    if (local_c == -1) {
      HeapFree(DAT_100adf74,1,local_14);
    }
    else {
      FUN_1008664f(*(uint *)(DAT_100f3120 + local_c * 4),(int *)PTR_DAT_100af0c8);
    }
  }
  return local_8;
}
