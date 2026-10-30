/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f8d0 */
/* mw2shell 1000f8d0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *HMENU;
typedef UINT WPARAM;
extern undefined4 DAT_1008e3f0[];
extern undefined DAT_100a6ba4;
extern undefined4 DAT_100b0588;
extern HMENU DAT_100d08ec;
extern char s__ssmk__s_smk_1008e410[];
undefined4 __cdecl FUN_1000e8f0(undefined4 param_1, UINT param_2, WPARAM param_3);
undefined __cdecl GrayMenuCommands_Likely(HMENU param_1);

undefined4 __stdcall DispatchFirstQueuedEntry_Likely(void)

{
  HMENU pHVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(DAT_1008e3f0);
  iVar3 = 0;
  do {
    if (*piVar2 != 0) break;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (piVar2 < (int *)(s__ssmk__s_smk_1008e410));
  if (iVar3 == 8) {
    return 1;
  }
  FUN_1000e8f0(DAT_1008e3f0[iVar3],DAT_100b0588,DAT_100b0588);
  pHVar1 = DAT_100d08ec;
  DAT_1008e3f0[iVar3] = 0;
  GrayMenuCommands_Likely(pHVar1);
  DAT_100a6ba4 = 1;
  return 0;
}
