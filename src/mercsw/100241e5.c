/* SPDX-License-Identifier: MIT */
/* mercsw 100241e5 */
/* mercsw 100241e5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab378;
extern undefined4 DAT_100ab37c;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_1016acc0[];
extern int DAT_1016cc50;
extern undefined DAT_1016cc60[];
extern undefined DAT_1016cc68[];
extern undefined DAT_1016ce36[];
int * __cdecl FUN_10023a8c(int param_1);

void __stdcall FUN_100241e5(void)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if ((DAT_100ab37c != 0) && (DAT_100b3904 != 0)) {
    DAT_1016cc50 = 0;
    for (local_10 = DAT_100ab37c; local_10 != 0; local_10 = *(int *)(local_10 + 4)) {
      DAT_1016acc0[DAT_1016cc50] = *(undefined4 *)(local_10 + 8);
      DAT_1016cc50 = DAT_1016cc50 + 1;
    }
    for (local_c = 0; local_c < DAT_1016cc50; local_c = local_c + 1) {
      iVar1 = DAT_1016acc0[local_c] * 0x1fa;
      if ((*(int *)(DAT_1016ce36 + iVar1) != 0) &&
         (iVar2 = ((int (*)(undefined *))((void (*)(void))((**(code **)(DAT_1016ce36 + iVar1)))))(DAT_1016cc60 + iVar1), iVar2 == 0)) {
        local_8 = local_8 + 1;
        FUN_10023a8c(*(int *)(DAT_1016cc68 + iVar1));
      }
    }
    DAT_100ab378 = DAT_100ab378 - local_8;
  }
  return;
}
