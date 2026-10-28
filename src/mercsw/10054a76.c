/* SPDX-License-Identifier: MIT */
/* mercsw 10054a76 */
/* mercsw 10054a76: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0f18;
extern undefined4 DAT_100b0f1c;
extern undefined4 DAT_100b0f20;
extern undefined4 DAT_1011515c;
extern undefined4 DAT_10115170;
extern undefined4 DAT_10167e70;
extern int * DAT_1016828c;
undefined __cdecl FUN_100547e0(int * param_1, int * param_2);
undefined4 __cdecl FUN_10054330(int param_1, int param_2);
undefined __cdecl FUN_10054e09(short * param_1);

void __stdcall FUN_10054a76(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_c;
  
  if (1 < DAT_100b0f18) {
    FUN_100547e0(DAT_1016828c,DAT_1016828c + (DAT_100b0f18 + -1) * 8);
  }
  iVar1 = DAT_100b0f18;
  DAT_100b0f18 = 0;
  DAT_10115170 = DAT_10167e70;
  for (local_c = 0; iVar2 = DAT_100b0f18, local_c < iVar1; local_c = local_c + 1) {
    if (((int)*(short *)DAT_1016828c[local_c * 8] & 0x8000U) == 0) {
      piVar3 = DAT_1016828c + local_c * 8;
      piVar4 = (int *)(DAT_100b0f18 * 0x20 + DAT_10167e70);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      DAT_100b0f18 = DAT_100b0f18 + 1;
    }
    else if (DAT_1011515c != 0) {
      FUN_10054330(DAT_1016828c[local_c * 8],DAT_1016828c[local_c * 8 + 1]);
      if (DAT_1011515c == 0) break;
      if (1 < DAT_100b0f18 - iVar2) {
        FUN_100547e0((int *)(iVar2 * 0x20 + DAT_10167e70),
                     (int *)((DAT_100b0f18 + -1) * 0x20 + DAT_10167e70));
      }
    }
    if (DAT_100b0f20 <= DAT_100b0f1c) break;
  }
  for (local_c = 0; local_c < DAT_100b0f18; local_c = local_c + 1) {
    FUN_10054e09(*(short **)(local_c * 0x20 + DAT_10167e70));
  }
  return;
}
