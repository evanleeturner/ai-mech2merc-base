/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a160 */
int __cdecl FUN_1006a160(int param_1, int param_2)
{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8 + param_2 * 8) + param_1;
  return (int)(*(unsigned short *)(iVar1 + 8) | (*(unsigned short *)(iVar1 + 0xc) << 16));
}
