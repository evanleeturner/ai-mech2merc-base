/* SPDX-License-Identifier: MIT */
/* mw2shell 10010710 */
/* mw2shell 10010710: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a6768;
extern undefined4 DAT_100a676c;
undefined4 __cdecl FUN_10017c90(undefined4 * param_1, int param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5);
undefined4 __stdcall _AIL_startup_0(void);
undefined4 __stdcall _AIL_midiOutOpen_12(undefined4, undefined4, undefined4);

undefined1 * __fastcall FUN_10010710(undefined1 * param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10017c90((undefined4 *)(param_1 + 0x11),10,0,4,0);
  if ((DAT_100a6768 == 0) && (DAT_100a676c == 0)) {
    *param_1 = 0;
  }
  else {
    _AIL_startup_0();
    *param_1 = 1;
  }
  if (DAT_100a6768 != 0) {
    iVar2 = _AIL_midiOutOpen_12((undefined4)(puVar1),0,0xffffffff);
    if (iVar2 != 0) {
      iVar2 = _AIL_midiOutOpen_12((undefined4)(puVar1),0,0);
      if (iVar2 != 0) {
        *puVar1 = 0;
      }
    }
  }
  return param_1;
}
