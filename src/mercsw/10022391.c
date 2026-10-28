/* SPDX-License-Identifier: MIT */
/* mercsw 10022391 */
/* mercsw 10022391: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100ab2fc;
extern undefined4 DAT_100ab300;
extern undefined4 DAT_100ab304;
extern undefined4 DAT_100ab30c;
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100ab31c;
extern undefined4 DAT_100ab330;
extern undefined4 DAT_100ab334;
extern undefined4 DAT_100b38fc;
extern undefined4 PTR_DAT_100aaf68;
extern char s_Not_equipped_with_MASC__100ab34c[];
extern char s_Powering_up____100ab364[];
undefined __cdecl FUN_1001a5e1(int param_1);
undefined __stdcall FUN_1006b1d9(void);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_10062e97(int * param_1);
undefined __stdcall FUN_100635a2(void);
undefined4 __cdecl FUN_100632e4(int param_1);
undefined __cdecl FUN_100082c4(int param_1, int param_2);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1005be24(char * param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);

void __cdecl FUN_10022391(int * param_1)

{
  int iVar1;
  char local_3c [40];
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  local_c = param_1;
  iVar1 = param_1[0xf5];
  if (iVar1 == 2) {
    if (DAT_100ab30c != 0) {
      if (param_1[0xfa] == 0) {
        FUN_10003742(0x112,0x32,0x40,5,0x32);
        FUN_10062e97(local_c);
      }
      DAT_100ab30c = 0;
    }
    if ((*(char *)(*(int *)(*local_c + 0x4c) + 0x26) != '\0') && (local_c[0xfa] == 0)) {
      FUN_10003742(0x112,0x32,0x40,5,0x32);
      DAT_100ab30c = 1;
      FUN_10062e97(local_c);
      DAT_100ab30c = 0;
    }
    if ((*(char *)(*(int *)(*local_c + 0x4c) + 0x2b) != '\0') &&
       (*(char *)(*(int *)(*local_c + 0x4c) + 0x27) == '\0')) {
      FUN_100635a2();
    }
    if (DAT_100ab2fc != 0) {
      DAT_100ab2fc = 0;
      FUN_100632e4((int)local_c);
    }
    if (DAT_100ab300 != 0) {
      DAT_100ab300 = 0;
      if ((*(ushort *)(local_c + 0x110) & 0x10) == 0) {
        _sprintf(local_3c,s_Not_equipped_with_MASC__100ab34c);
        FUN_1005be24(local_3c,1,0x16a,0x32);
      }
      else if (DAT_100ab304 == 0) {
        DAT_100ab304 = 1;
        FUN_10003742(0xdc,100,0x40,5,0x50);
        FUN_100082c4(0x1f,1);
      }
      else {
        DAT_100ab304 = 0;
        FUN_10003742(0xdb,100,0x40,5,0x50);
        FUN_100082c4(0x1f,0);
      }
    }
  }
  else {
    if (iVar1 == 4) {
      if (DAT_100ab330 != 0) {
        return;
      }
      DAT_100ab330 = 1;
      FUN_1006b1d9();
      DAT_100ab318 = 1;
      FUN_1001a5e1(1);
      return;
    }
    if (iVar1 == 5) {
      if (DAT_100ab334 == 0) {
        param_1[0xef] = DAT_100b38fc + 0x389;
        DAT_100ab334 = DAT_100ab334 + 1;
        return;
      }
      if ((int)DAT_100b38fc < param_1[0xef]) {
        FUN_1001a5e1(4);
        return;
      }
      DAT_100ab318 = 1;
      return;
    }
  }
  if (DAT_100ab31c == (undefined4)(-1)) {
    if (local_c[0xf5] != 3) {
      FUN_100082c4(0xd,-1);
      local_8 = *(int *)(*local_c + 0x50) - *(int *)PTR_DAT_100aaf68;
      local_10 = *(int *)(*local_c + 0x54) - *(int *)(PTR_DAT_100aaf68 + 4);
      local_14 = *(int *)(*local_c + 0x58) - *(int *)(PTR_DAT_100aaf68 + 8);
      FUN_100037f0(local_8,local_10,local_14,0x107,DAT_100ab094);
      local_c[0xf5] = 3;
      DAT_100ab31c = 0;
    }
  }
  else if ((((DAT_100ab31c != 0) && (DAT_100ab31c == 1)) &&
           (((*(ushort *)(local_c + 0x110) & 4) == 0 || ((*(ushort *)(local_c + 0x110) & 8) != 0))))
          && (local_c[0xf5] == 3)) {
    _sprintf(local_3c,s_Powering_up____100ab364);
    FUN_1005be24(local_3c,1,0x16a,0x32);
    local_c[0xf5] = 0;
    *(ushort *)(*local_c + 0x14) = *(ushort *)(*local_c + 0x14) & 0xffef;
    DAT_100ab31c = 0;
  }
  return;
}
