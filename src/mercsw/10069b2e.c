/* SPDX-License-Identifier: MIT */
/* mercsw 10069b2e */
/* mercsw 10069b2e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100b3a20;
extern undefined4 DAT_100b3a28;
extern undefined4 DAT_100b3a30;
extern undefined4 DAT_100b3a34;
extern undefined4 DAT_100b3a8c;
extern undefined4 DAT_100b3a90;
extern undefined4 DAT_100b3a94;
extern undefined4 DAT_100b3a98;
extern undefined4 DAT_100eee64;
extern char s_Framerate__2_2ld__1_1ld_100b3aac[];
extern char s__ld__ld_100b3ac4[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __cdecl FUN_1005c0df(int param_1, int param_2, char * param_3, int param_4, int param_5);

void __stdcall FUN_10069b2e(void)

{
  int iVar1;
  char local_44 [64];
  
  if ((DAT_100eee64 != 0) || (DAT_100b3a28 != 0)) {
    DAT_100b3a98 = DAT_100b3a98 + 1;
    DAT_100b3a94 = DAT_100b3a94 + DAT_100b3904;
    if (9 < DAT_100b3a98) {
      if (0 < DAT_100b3a94) {
        iVar1 = (DAT_100b3a98 * 0x712) / DAT_100b3a94;
        DAT_100b3a8c = iVar1 / 10;
        DAT_100b3a90 = iVar1 % 10;
        _sprintf(local_44,s_Framerate__2_2ld__1_1ld_100b3aac,DAT_100b3a8c,DAT_100b3a90);
      }
      DAT_100b3a98 = 0;
      DAT_100b3a94 = 0;
    }
    if ((DAT_100b3a28 != 0) && (0 < DAT_100b3a8c)) {
      _sprintf(local_44,s__ld__ld_100b3ac4,DAT_100b3a8c,DAT_100b3a90);
      FUN_1005c0df(0x37,1,local_44,DAT_100b3a30,DAT_100b3a34);
    }
    DAT_100b3a20 = 1;
  }
  return;
}
