/* SPDX-License-Identifier: MIT */
/* mercsw 1006ad3f */
/* mercsw 1006ad3f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern int DAT_100b38d8;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100eee60;
extern undefined4 DAT_100eef40[];
undefined4 __stdcall _AIL_serve_0(void);
undefined __stdcall RefillStreamingSampleBuffers(void);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);

void __stdcall FUN_1006ad3f(void)

{
  int iVar1;
  int local_c;
  
  _AIL_serve_0();
  RefillStreamingSampleBuffers();
  if ((DAT_100eee60 <= DAT_100b38fc) &&
     (DAT_100eee60 = DAT_100b38fc + 0x389,
     (*(ushort *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x16) == 0)) {
    for (local_c = 0; local_c < DAT_100b38d8; local_c = local_c + 1) {
      iVar1 = DAT_100eef40[local_c];
      if ((((*(uint *)(iVar1 + 4) != DAT_100adf38) &&
           ((*(ushort *)(iVar1 + 0x17a) & 0xff) == DAT_100adf38)) &&
          ((*(short *)(iVar1 + 0x176) == 2 || (*(short *)(iVar1 + 0x176) == 3)))) &&
         (*(int *)(iVar1 + 0xc4) < 0x249f1)) {
        FUN_10003742(0x116,100,0x40,5,0x32);
        return;
      }
    }
  }
  return;
}
