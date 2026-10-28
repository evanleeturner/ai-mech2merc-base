/* SPDX-License-Identifier: MIT */
/* mercsw 1005d9bf */
/* mercsw 1005d9bf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100b32b8;
extern undefined4 DAT_100b38fc;
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_1005d9bf(int * param_1, undefined4 * param_2)

{
  int local_8;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((undefined4 *)*param_1 == param_2) {
      *param_1 = param_2[5];
    }
    else {
      for (local_8 = *param_1; local_8 != 0; local_8 = *(int *)(local_8 + 0x14)) {
        if (*(undefined4 **)(local_8 + 0x14) == param_2) {
          *(undefined4 *)(local_8 + 0x14) = param_2[5];
          break;
        }
      }
    }
    DAT_100b32b8 = (undefined4)(param_2);
    ((void (*)(int, int, undefined4, undefined4))((*(code *)*param_2)))(2,0,DAT_100b38fc,param_2[2]);
    HeapFree(DAT_100adf74,1,(LPVOID)param_2[1]);
  }
  return;
}
