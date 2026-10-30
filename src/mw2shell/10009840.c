/* SPDX-License-Identifier: MIT */
/* mw2shell 10009840 */
/* mw2shell 10009840: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined PTR_DAT_10083d8c[];
extern undefined4 PTR_s_Annihilator_10083d94[];
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
char * __cdecl FUN_1005bbb0(char * source);

undefined * __cdecl FUN_10009840(char * source)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  bool bVar7;
  char local_20 [3];
  undefined1 local_1d;
  
  (void)local_1d;
  iVar5 = 0;
  ppuVar6 = (undefined **)(PTR_DAT_10083d8c);
  _strncpy(local_20,source,3);
  local_1d = 0;
  do {
    pbVar2 = (byte *)FUN_1005bbb0((char *)(*ppuVar6));
    pbVar3 = (byte *)FUN_1005bbb0(local_20);
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_1000989f:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_100098a4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_1000989f;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100098a4:
    if (iVar4 == 0) {
      return (undefined *)(PTR_s_Annihilator_10083d94[iVar5 * 10]);
    }
    ppuVar6 = ppuVar6 + 10;
    iVar5 = iVar5 + 1;
    if ((undefined **)0x100848a3 < ppuVar6) {
      return (undefined *)0x0;
    }
  } while( true );
}
