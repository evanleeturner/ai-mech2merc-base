/* SPDX-License-Identifier: MIT */
/* mercsw 1004643b */
/* mercsw 1004643b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b04b8[];
extern undefined4 DAT_100b04c4;
extern undefined4 DAT_100b3c54;
extern undefined4 DAT_100c7ce8;
extern undefined4 DAT_100c7cec;
extern undefined DAT_100c7cf0[];
extern undefined4 DAT_100c7d00;
undefined4 __stdcall FUN_10046175(void);
undefined4 __stdcall FUN_10046563(void);
undefined4 __cdecl FUN_10046dbc(int * param_1);
undefined __cdecl FUN_10046f3b(uint * param_1);
undefined4 __cdecl SetAuxDeviceVolume(uint param_1);

undefined4 __stdcall FUN_1004643b(void)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_100c7ce8 = 0;
  DAT_100c7cec = 0;
  iVar1 = FUN_10046175();
  if (iVar1 == 0) {
    DAT_100b04c4 = 1;
    DAT_100c7d00 = FUN_10046563();
    switch(DAT_100c7d00) {
    case 1:
      DAT_100b04c4 = 0;
      return 0;
    case 2:
      FUN_10046dbc((int *)(DAT_100b04b8));
      break;
    case 3:
      FUN_10046dbc((int *)(DAT_100b04b8));
      break;
    case 4:
      FUN_10046dbc((int *)(DAT_100b04b8));
      FUN_10046f3b((uint *)(DAT_100c7cf0));
    }
    SetAuxDeviceVolume(DAT_100b3c54);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
