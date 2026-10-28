/* SPDX-License-Identifier: MIT */
/* mercsw 1005b5c0 */
int __cdecl FUN_1005b5c0(int param_1, int param_2)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8 + param_2 * 8) + param_1;
  return ((unsigned int)(*(unsigned short *)(iVar1 + 0xc)) << 16) | *(unsigned short *)(iVar1 + 8);
}
