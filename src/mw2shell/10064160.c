/* SPDX-License-Identifier: MIT */
/* mw2shell 10064160 */
/* mw2shell 10064160: Ghidra's C, repaired by tools/ghidra_repair.py */
short __stdcall FUN_1005ba70(void);
int __cdecl _toupper(int _C);

char __fastcall FUN_10064160(uint * param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = FUN_1005ba70();
  uVar2 = (uint)sVar1;
  *param_1 = uVar2;
  if (uVar2 != 0) {
    param_1[0x43] = 1;
    *param_1 = uVar2 & 0xfffffeff;
    if ((uVar2 & 0x200) != 0) {
      *param_1 = uVar2 & 0xfffffcff;
      uVar2 = _toupper(uVar2 & 0xfffffcff);
      *param_1 = uVar2;
    }
    return (-(*param_1 == 0x1b) & 2U) + 1;
  }
  param_1[0x43] = 0;
  return '\0';
}
