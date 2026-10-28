/* SPDX-License-Identifier: MIT */
/* mercsw 10056290 */
undefined4 __cdecl FUN_10056290(undefined4 *param_1)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = ((char * (*)(void))*param_1)();
  pcVar3 = (char *)0x100b12b4;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return 0x100b12b4;
}
