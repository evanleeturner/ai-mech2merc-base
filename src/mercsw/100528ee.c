/* SPDX-License-Identifier: MIT */
/* mercsw 100528ee */
/* mercsw 100528ee: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ad6e0;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b0a14;
extern undefined4 DAT_100eef40[];
extern undefined DAT_1016a600[];
extern char s__s___s_100b0de0[];
int __cdecl _toupper(int _C);
undefined __cdecl FUN_10052813(char * c);
undefined4 __cdecl FUN_10012a14(int c, char * param_2);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1005be24(char * c, int param_2, int param_3, int param_4);

undefined4 __cdecl FUN_100528ee(uint c)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_5c;
  char local_58 [4];
  char local_54 [80];
  
  if (DAT_100adf38 == DAT_100ad6e0) {
    local_5c = 0;
  }
  else {
    local_5c = DAT_100ad6e0;
  }
  if ((c & 0x400) == 0) {
    local_58[0] = (char)c;
    if ((char)c == '\b') {
      if (0 < DAT_100b0a14) {
        DAT_100b0a14 = DAT_100b0a14 + -1;
      }
      *(undefined1 *)((int)DAT_1016a600 + DAT_100b0a14) = 0;
      uVar1 = 1;
    }
    else {
      if ((char)c == '\r') {
        if (DAT_100ad6e0 < 1) {
          if (DAT_100ad6e0 == (undefined4)(-1)) {
            local_5c = -1;
            DAT_100ad6e0 = 0;
          }
        }
        else {
          DAT_100ad6e0 = 0;
        }
      }
      else if ((char)c == '\x1b') {
        DAT_100ad6e0 = 0;
        puVar3 = (undefined4 *)(DAT_1016a600);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        DAT_100b0a14 = 0;
        return 1;
      }
      if (DAT_100b0a14 < 0x28) {
        if ((c & 0x100) != 0) {
          if (DAT_100ad6e0 != (undefined4)(-1)) {
            return 0;
          }
          if ((char)c == 'e') {
            local_5c = -3;
          }
          else {
            if ((char)c != 'f') {
              return 0;
            }
            local_5c = -2;
          }
          DAT_100ad6e0 = 0;
        }
        if ((c & 0x200) != 0) {
          iVar2 = _toupper((int)(char)c);
          local_58[0] = (char)iVar2;
          FUN_10052813(local_58);
        }
        if (DAT_100ad6e0 == 0) {
          FUN_10012a14(local_5c,(char *)DAT_1016a600);
          _sprintf(local_54,s__s___s_100b0de0,DAT_100eef40[DAT_100adf38] + 0x110,DAT_1016a600);
          FUN_1005be24(local_54,1,0x2d4,0x32);
          puVar3 = (undefined4 *)(DAT_1016a600);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          DAT_100b0a14 = 0;
          uVar1 = 1;
        }
        else if ((local_58[0] < ' ') || ('~' < local_58[0])) {
          uVar1 = 0;
        }
        else {
          *(char *)((int)DAT_1016a600 + DAT_100b0a14) = local_58[0];
          DAT_100b0a14 = DAT_100b0a14 + 1;
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
