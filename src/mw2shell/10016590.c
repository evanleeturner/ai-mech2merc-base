/* SPDX-License-Identifier: MIT */
/* mw2shell 10016590 */
/* mw2shell 10016590: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern char DAT_1008ef60[];
extern char DAT_1008ef64[];
char * __cdecl _strtok(char * _Str, char * _Delim);
int __cdecl _toupper(int _C);
undefined4 __cdecl FUN_1004f240(int str);

void __cdecl FUN_10016590(char * str)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = _strtok(str,DAT_1008ef60);
  do {
    if (pcVar1 == (char *)0x0) {
      return;
    }
    if (((*pcVar1 == '-') && (iVar2 = _toupper((int)pcVar1[1]), iVar2 == 0x58)) &&
       (pcVar1[2] == '=')) {
      iVar2 = _toupper((int)pcVar1[3]);
      if (iVar2 == 0x46) {
        iVar2 = 4;
      }
      else if (iVar2 == 0x4d) {
        iVar2 = 1;
      }
      else {
        if (iVar2 != 0x53) goto LAB_100165fe;
        iVar2 = 2;
      }
      FUN_1004f240(iVar2);
    }
LAB_100165fe:
    pcVar1 = _strtok((char *)0x0,DAT_1008ef64);
  } while( true );
}
