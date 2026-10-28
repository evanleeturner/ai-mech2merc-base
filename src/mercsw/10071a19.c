/* SPDX-License-Identifier: MIT */
/* mercsw 10071a19 */
/* mercsw 10071a19: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100b9a18;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_10071a19(int * param_1)

{
  char *local_14;
  int local_10;
  short *local_c;
  char *local_8;
  
  if (param_1[4] < param_1[3]) {
    local_10 = 0;
    local_c = (short *)param_1[2];
    local_14 = (char *)param_1[1];
    local_8 = (char *)((uint)*(byte *)(param_1 + 5) + *param_1);
    for (; local_10 < *(int *)((int)param_1 + 0x15) * 3; local_10 = local_10 + 1) {
      *local_c = (short)*local_14 + *local_c;
      *local_8 = (char)((int)*local_c / param_1[3]) + *local_8;
      *local_c = (short)((int)*local_c % param_1[3]);
      local_c = local_c + 1;
      local_14 = local_14 + 1;
      local_8 = local_8 + 1;
    }
    ((void (*)(int))((**(code **)(DAT_100b9a18 + 0x18))))(*param_1);
    param_1[4] = param_1[4] + 1;
    if ((param_1[3] <= param_1[4]) && (*param_1 != 0)) {
      if (*param_1 != 0) {
        HeapFree(DAT_100adf74,1,(LPVOID)*param_1);
        *param_1 = 0;
      }
      if (param_1[1] != 0) {
        param_1[1] = 0;
      }
      if (param_1[2] != 0) {
        param_1[2] = 0;
      }
    }
  }
  return;
}
