/* SPDX-License-Identifier: MIT */
/* mercsw 1004819b */
/* mercsw 1004819b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b0578;
extern undefined DAT_100c7d08[];
extern char s__s__s_100b06a8[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

undefined4 * __cdecl FUN_1004819b(char * param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
    *(undefined1 *)((int)DAT_100c7d08 + local_8) = 0;
  }
  if (DAT_100b0578 == '\0') {
    uVar2 = 0xffffffff;
    do {
      pcVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar4 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar4;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar4 + -uVar2;
    pcVar5 = (char *)DAT_100c7d08;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    _sprintf((char *)DAT_100c7d08,s__s__s_100b06a8,&DAT_100b0578,param_1);
  }
  return (undefined4 *)(DAT_100c7d08);
}
