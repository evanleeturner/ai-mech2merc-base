/* SPDX-License-Identifier: MIT */
/* mw2shell 10057200 */
/* mw2shell 10057200: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef long long longlong;
typedef unsigned long long ulonglong;
extern undefined PTR_DAT_100a1cc0[];
extern undefined PTR_DAT_100a1e20[];
extern undefined PTR_DAT_100a1f60[];
extern undefined PTR_DAT_100a2060[];
longlong __stdcall RollRandomNumber_Likely(void);

undefined ** __cdecl PickEntryFromFourTables_Likely(int param_1, int * param_2)

{
  short sVar1;
  int iVar2;
  undefined **ppuVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **local_8;
  
  local_8 = (undefined **)0xa000b;
  if (param_1 < 0xbea) {
    sVar1 = (short)((param_1 + -0xbe4) / 2);
    lVar4 = RollRandomNumber_Likely();
    if (0x2ed < (int)lVar4) {
      lVar4 = RollRandomNumber_Likely();
      sVar1 = (short)lVar4;
    }
  }
  else {
    sVar1 = 3;
  }
  ppuVar3 = (undefined **)(PTR_DAT_100a1cc0);
  if (sVar1 != 0) {
    ppuVar3 = local_8;
  }
  if (sVar1 == 1) {
    ppuVar3 = (undefined **)(PTR_DAT_100a1e20);
  }
  if (sVar1 == 2) {
    ppuVar3 = (undefined **)(PTR_DAT_100a1f60);
  }
  if (sVar1 == 3) {
    ppuVar3 = (undefined **)(PTR_DAT_100a2060);
  }
  uVar5 = RollRandomNumber_Likely();
  iVar2 = (int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | (uVar5 & 0xffffffff)) / 10)
  ;
  *param_2 = iVar2;
  return ppuVar3 + iVar2 * 8;
}
