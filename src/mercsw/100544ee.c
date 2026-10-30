/* SPDX-License-Identifier: MIT */
/* mercsw 100544ee */
int __cdecl block(int *param_1, int *param_2)
{
  int bVar1;
  int local_30;
  
  if ((((((*param_2 == 0) || (param_2[2] < param_1[5])) || (param_1[2] < param_2[5])) ||
       ((param_2[3] < param_1[6] || (param_1[3] < param_2[6])))) ||
      ((param_2[4] < param_1[7] ||
       ((param_1[4] < param_2[7] || (((int)*(short *)*param_2 & 0x8000U) == 0)))))) ||
     (((int)*(short *)*param_1 & 0x8000U) == 0)) {
    bVar1 = param_1[1] < param_2[1];
  }
  else {
    for (local_30 = 0; local_30 < (int)(unsigned int)*(unsigned short *)(*(int *)(*param_1 + 4) + 2);
        local_30 = local_30 + 1) {
    }
    bVar1 = 1;
  }
  return bVar1;
}
