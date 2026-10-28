/* SPDX-License-Identifier: MIT */
/* mw2shell 10016bd0 */
/* mw2shell 10016bd0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008edf4;
extern code * DAT_1008edf8;
extern undefined4 DAT_1008ee00;
extern undefined4 DAT_100a6734;
extern undefined4 DAT_100b0f40;
extern undefined DAT_100b0f44[];
extern undefined DAT_100b0f50[];
extern char s_UnregisterAnimFunction__pointer_m_1008f140[];
undefined __cdecl FUN_100640a0(char * param_1);

void __stdcall FUN_10016bd0(void)

{
  code *pcVar1;
  
  pcVar1 = DAT_1008edf8;
  if (DAT_1008edf8 != (code *)0x0) {
    DAT_1008edf4 = (undefined4)(DAT_1008edf8);
    DAT_1008edf8 = (code *)0x0;
    DAT_1008ee00 = 0;
    ((void (*)(undefined4, undefined *, undefined *, undefined4))((*pcVar1)))(DAT_100a6734,DAT_100b0f50,DAT_100b0f44,DAT_100b0f40);
    return;
  }
  FUN_100640a0(s_UnregisterAnimFunction__pointer_m_1008f140);
  return;
}
