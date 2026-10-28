/* SPDX-License-Identifier: MIT */
/* mercsw 10047c3f */
/* mercsw 10047c3f: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
undefined4 * __cdecl FUN_100480d9(char * param_1);
int __cdecl FUN_10047b36(char * param_1, SIZE_T * param_2, int * param_3, int * param_4);
int __cdecl __close(int _FileHandle);

int __cdecl FUN_10047c3f(char * param_1, int * param_2)

{
  char *pcVar1;
  SIZE_T *pSVar2;
  int *piVar3;
  int *piVar4;
  int local_10;
  int local_c;
  SIZE_T local_8;
  
  *param_2 = 0;
  piVar4 = (int *)0x0;
  piVar3 = &local_10;
  pSVar2 = &local_8;
  pcVar1 = (char *)FUN_100480d9(param_1);
  local_c = FUN_10047b36(pcVar1,pSVar2,piVar3,piVar4);
  if (local_c != -1) {
    __close(local_c);
    *param_2 = local_10;
  }
  return local_c;
}
