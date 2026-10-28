/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e970 */
/* mw2shell 1000e970: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *HMENU;
typedef UINT WPARAM;
extern undefined LAB_1000e7f0[];
extern undefined4 DAT_1008e3e4;
extern undefined4 DAT_1008e3e8;
extern undefined DAT_1008e450[];
extern undefined * DAT_1008edf4;
extern undefined4 DAT_100a6838;
extern undefined DAT_100a6ba4;
extern undefined4 DAT_100b0588;
extern HWND DAT_100d08e8;
extern HMENU DAT_100d08ec;
extern char s_mintro_1008e448[];
int __stdcall PostMessageA(HWND, UINT, UINT, LONG);
undefined __cdecl FUN_1000f940(undefined4 param_1);
undefined4 __cdecl FUN_1000e8f0(undefined4 param_1, UINT param_2, WPARAM param_3);
undefined __cdecl FUN_100166c0(HMENU param_1);

undefined4 __cdecl FUN_1000e970(byte * param_1, UINT param_2, WPARAM param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (DAT_100a6838 == 0) {
    pcVar4 = s_mintro_1008e448;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1000e9a9:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_1000e9ae;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1000e9a9;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1000e9ae:
    if (iVar3 != 0) {
      pbVar5 = DAT_1008e450;
      pbVar2 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1000e9d9:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1000e9de;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1000e9d9;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1000e9de:
      if ((iVar3 != 0) && (param_2 != 0xc004)) {
        PostMessageA(DAT_100d08e8,param_2,param_3,0);
        DAT_1008e3e8 = 0xc004;
        DAT_1008e3e4 = 0xc004;
        return 0;
      }
    }
  }
  DAT_100b0588 = param_2;
  if (DAT_1008edf4 == LAB_1000e7f0) {
    FUN_1000f940((undefined4)(param_1));
    return 1;
  }
  iVar3 = FUN_1000e8f0((undefined4)(param_1),param_2,param_3);
  if (iVar3 != 0) {
    FUN_100166c0(DAT_100d08ec);
    DAT_100a6ba4 = 1;
    return 1;
  }
  return 0;
}
