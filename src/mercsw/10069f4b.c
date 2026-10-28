/* SPDX-License-Identifier: MIT */
/* mercsw 10069f4b */
/* mercsw 10069f4b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3a40;
extern undefined4 DAT_100b3a44;
extern undefined4 DAT_100b3a58;
extern undefined4 DAT_100b3a5c;
extern undefined4 DAT_100eee64;
extern char s_rxyz___04_4ld__04_4ld__04_4ld_100b3b5c[];
extern char s_txyz___04_4ld__04_4ld__04_4ld_100b3b3c[];
extern char s_txyz___07ld__07ld__07ld_rxyz___0_100b3b7c[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __cdecl FUN_1005c0df(int param_1, int param_2, char * param_3, int param_4, int param_5);

void __cdecl FUN_10069f4b(undefined4 * param_1)

{
  char local_88 [132];
  
  if ((DAT_100b3a58 != 0) || (DAT_100eee64 != 0)) {
    _sprintf(local_88,s_txyz___04_4ld__04_4ld__04_4ld_100b3b3c,*param_1,param_1[1],param_1[2]);
    _sprintf(local_88,s_rxyz___04_4ld__04_4ld__04_4ld_100b3b5c,((int)param_1[4] >> 0x10) % 0x168,
             ((int)param_1[3] >> 0x10) % 0x168,((int)param_1[5] >> 0x10) % 0x168);
    if (DAT_100b3a58 != 0) {
      _sprintf(local_88,s_txyz___07ld__07ld__07ld_rxyz___0_100b3b7c,*param_1,param_1[1],param_1[2],
               ((int)param_1[4] >> 0x10) % 0x168,((int)param_1[3] >> 0x10) % 0x168,
               ((int)param_1[5] >> 0x10) % 0x168);
      FUN_1005c0df(0x37,1,local_88,DAT_100b3a40,DAT_100b3a44);
    }
    DAT_100b3a5c = 1;
  }
  return;
}
