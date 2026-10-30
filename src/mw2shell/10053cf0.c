/* SPDX-License-Identifier: MIT */
/* mw2shell 10053cf0 */
/* mw2shell 10053cf0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_1009c558;
extern undefined4 DAT_1009c6a8;
extern undefined DAT_100bdf94[];
extern undefined DAT_100bed74[];
extern undefined4 DAT_100bfd98[];
extern char s_keyboard_1009fe94[];
int __cdecl EntryAddress120_Likely(int param_1);
undefined __cdecl FUN_10053fc0(int param_1, uint * param_2);

void __stdcall FUN_10053cf0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  iVar5 = 0;
  do {
    iVar2 = EntryAddress120_Likely(iVar5);
    if (iVar2 == 0) {
LAB_10053d40:
      DAT_100bfd98[iVar5] = 0;
    }
    else {
      pbVar3 = (byte *)(iVar2 + 4);
      pcVar4 = s_keyboard_1009fe94;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_10053d2a:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_10053d2f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_10053d2a;
        pbVar3 = pbVar3 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_10053d2f:
      if (iVar2 != 0) goto LAB_10053d40;
      DAT_100bfd98[iVar5] = 1;
    }
    iVar5 = iVar5 + 1;
    if (0xf < iVar5) {
      iVar5 = 0;
      piVar6 = (int *)(DAT_100bdf94);
      do {
        iVar2 = *piVar6;
        if (-1 < iVar2) {
          DAT_1009c558 = iVar2;
          iVar2 = EntryAddress120_Likely(iVar2);
          if (iVar2 == 0) {
            FUN_10053fc0(iVar5,(uint *)(piVar6 + -1));
          }
          else {
            DAT_100bfd98[DAT_1009c558] = 1;
          }
        }
        piVar6 = piVar6 + 6;
        iVar5 = iVar5 + 1;
      } while (piVar6 < (int *)(DAT_100bed74));
      iVar5 = 0;
      DAT_1009c6a8 = 0;
      do {
        iVar2 = EntryAddress120_Likely(iVar5);
        if (((iVar2 == 0) || (DAT_100bfd98[iVar5] == 0)) || (3 < DAT_1009c6a8)) {
          DAT_100bfd98[iVar5] = 0;
        }
        else {
          DAT_1009c6a8 = DAT_1009c6a8 + 1;
          DAT_1009c558 = iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      return;
    }
  } while( true );
}
