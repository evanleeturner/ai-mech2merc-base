/* SPDX-License-Identifier: MIT */
/* mw2shell 1004e9e0 */
/* mw2shell 1004e9e0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef UINT WPARAM;
extern undefined4 DAT_10083508;
extern undefined4 DAT_1009b368;
extern undefined4 DAT_100a6838;
extern HWND DAT_100d08e8;
extern char s_DEATH_1009bdc0[];
extern char s_mland_1009bdc8[];
extern char s_mland_1009bdd0[];
char * __cdecl FUN_1005bbb0(char * param_1);
undefined4 __cdecl FUN_1000e970(byte * param_1, UINT param_2, WPARAM param_3);
int __stdcall PostMessageA(HWND, UINT, UINT, LONG);

void __cdecl FUN_1004e9e0(UINT * param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*(int *)(DAT_10083508 + 0x23bb) != 0) {
    if (*(int *)(DAT_10083508 + 0x23bb) != 1) {
      return;
    }
    if ((1 < *(int *)(DAT_10083508 + 0x1fe)) && (*(int *)(DAT_10083508 + 0x1fe) < 4)) {
      pbVar2 = (byte *)FUN_1005bbb0((char *)(DAT_10083508 + 0x2a2));
      pcVar4 = s_DEATH_1009bdc0;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_1004ea51:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_1004ea56;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_1004ea51;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_1004ea56:
      if ((iVar3 == 0) && (*(char *)(DAT_10083508 + 0x239c) == '\0')) {
        *param_1 = 0xc02b;
        return;
      }
      if (DAT_100a6838 != 1) {
        PostMessageA(DAT_100d08e8,*param_1,0xc00a,0);
        return;
      }
      DAT_1009b368 = 0;
      FUN_1000e970((byte *)s_mland_1009bdc8,*param_1,0xc00a);
      return;
    }
  }
  if (((1 < *(int *)(DAT_10083508 + 0x1fe)) && (*(int *)(DAT_10083508 + 0x1fe) < 4)) &&
     (*(char *)(DAT_10083508 + 0x239c) == '\x01')) {
    if (DAT_100a6838 == 1) {
      DAT_1009b368 = 0;
      FUN_1000e970((byte *)s_mland_1009bdd0,*param_1,0xc00a);
      return;
    }
    PostMessageA(DAT_100d08e8,*param_1,0xc00a,0);
  }
  return;
}
