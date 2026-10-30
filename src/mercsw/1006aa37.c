/* SPDX-License-Identifier: MIT */
/* mercsw 1006aa37 */
/* mercsw 1006aa37: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c40;
extern undefined4 DAT_100b3c44;
extern undefined DAT_100b3c58;
extern undefined4 DAT_100b3ca4;
extern char DAT_100b3cb4[];
extern undefined4 DAT_10165940;
extern undefined4 PTR_DAT_100af104;
extern char s__d__d_100b3cac[];
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
int __cdecl _sscanf(char * _Src, char * _Format, ...);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined4 __stdcall FUN_10046fb4(void);
undefined4 __stdcall FUN_10046563(void);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
undefined4 __cdecl IsWithinBounds_Likely(int param_1);
undefined __cdecl FUN_10046b4d(int param_1);
undefined4 __stdcall FUN_1004663a(void);

void __stdcall FUN_1006aa37(void)

{
  ushort *_Src;
  int iVar1;
  
  if (DAT_100b3ca4 == 0) {
    DAT_100b3ca4 = 1;
    if ((int)DAT_10165940 < 1) {
      DAT_100b3ca4 = 1;
      return;
    }
    _Src = FUN_1008668b(0,DAT_10165940,(int *)PTR_DAT_100af104);
    if (_Src == (ushort *)0x0) {
      return;
    }
    _sscanf((char *)_Src,s__d__d_100b3cac,&DAT_100b3c40,&DAT_100b3c44);
    FUN_1008664f(DAT_10165940,(int *)PTR_DAT_100af104);
  }
  iVar1 = FUN_10046fb4();
  if (iVar1 == 0) {
    DAT_100b3c40 = -1;
  }
  else {
    iVar1 = FUN_10046563();
    if (iVar1 == 1) {
      DAT_100b3c40 = -1;
      FUN_100108a0(0x53,DAT_100b3cb4);
    }
    else {
      iVar1 = IsWithinBounds_Likely(DAT_100b3c40);
      if (iVar1 == 0) {
        DAT_100b3c40 = -1;
      }
      else if ((DAT_100b3c58 & 8) != 0) {
        FUN_10046b4d(DAT_100b3c40);
        iVar1 = FUN_1004663a();
        if (iVar1 != 3) {
          DAT_100b3c40 = -1;
        }
      }
    }
  }
  DAT_100b3c44 = 0xffffffff;
  return;
}
