/* SPDX-License-Identifier: MIT */
/* mercsw 10010010 */
/* mercsw 10010010: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a9d78;
extern undefined DAT_100c4f50[];
extern undefined DAT_100c4f60[];
extern undefined DAT_100c5ef0[];
extern char s_Too_many_project_file_entries_100a9d7c[];
int __cdecl FUN_100103b0(byte * param_1);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

byte * __cdecl FUN_10010010(byte * param_1, int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *local_8;
  
  uVar2 = FUN_100103b0(param_1);
  uVar2 = uVar2 % 0x65;
  for (local_8 = *(byte **)(DAT_100c5ef0 + uVar2 * 4); local_8 != (byte *)0x0;
      local_8 = *(byte **)(local_8 + 0x10)) {
    iVar3 = __strcmpi((char *)local_8,(char *)param_1);
    if (iVar3 == 0) {
      return local_8;
    }
  }
  if (param_2 == 0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    if (199 < DAT_100a9d78) {
      FUN_100108a0(0x23,s_Too_many_project_file_entries_100a9d7c);
    }
    iVar3 = DAT_100a9d78 * 0x14;
    pbVar4 = DAT_100c4f50 + iVar3;
    DAT_100a9d78 = DAT_100a9d78 + 1;
    uVar5 = 0xffffffff;
    do {
      pbVar7 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar7 = param_1 + 1;
      bVar1 = *param_1;
      param_1 = pbVar7;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar7 = pbVar7 + -uVar5;
    pbVar8 = pbVar4;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar8 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    }
    *(undefined4 *)(DAT_100c4f60 + iVar3) = *(undefined4 *)(DAT_100c5ef0 + uVar2 * 4);
    *(byte **)(DAT_100c5ef0 + uVar2 * 4) = pbVar4;
  }
  return pbVar4;
}
