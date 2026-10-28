/* SPDX-License-Identifier: MIT */
/* mercsw 100480d9 */
/* mercsw 100480d9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b0578;
extern undefined DAT_100c7d08[];
extern char s__s__s_100b06a0[];
char * __cdecl _strchr(char * _Str, int _Val);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined4 * __cdecl FUN_100480d9(char * param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    *(undefined1 *)((int)DAT_100c7d08 + local_8) = 0;
  }
  if (((DAT_100b0578 != '\0') && (pcVar2 = _strchr(param_1,0x5c), pcVar2 == (char *)0x0)) &&
     (pcVar2 = _strchr(param_1,0x2f), pcVar2 == (char *)0x0)) {
    _sprintf((char *)DAT_100c7d08,s__s__s_100b06a0,&DAT_100b0578,param_1);
    return (undefined4 *)(DAT_100c7d08);
  }
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar2 + -uVar3;
  pcVar5 = (char *)DAT_100c7d08;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return (undefined4 *)(DAT_100c7d08);
}
