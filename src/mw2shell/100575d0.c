/* SPDX-License-Identifier: MIT */
/* mw2shell 100575d0 */
/* mw2shell 100575d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a365c;
extern undefined4 DAT_100a3660;
extern undefined4 DAT_100a3664;
extern undefined DAT_100a3674[];
extern undefined PTR_PTR_100a3668[];
int __stdcall FUN_100578d0(void);

int __cdecl FUN_100575d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  
  if (DAT_100a3664 == 0) {
    if (param_1 == 0) goto LAB_100575fd;
  }
  else if (param_1 == 0) {
    return DAT_100a365c;
  }
  DAT_100a365c = 0;
LAB_100575fd:
  ppuVar5 = (undefined **)(PTR_PTR_100a3668);
  do {
    if ((undefined4 *)*ppuVar5 != (undefined4 *)0x0) {
      iVar2 = ((int (*)(void))((void (*)(void))((**(code **)*ppuVar5))))();
      if ((iVar2 != 0) && (iVar4 = 0, 0 < iVar2)) {
        do {
          iVar1 = DAT_100a365c;
          DAT_100a365c = DAT_100a365c + 1;
          if (DAT_100a3660 < DAT_100a365c) {
            iVar3 = FUN_100578d0();
            if (iVar3 == 0) {
              return 0;
            }
          }
          iVar3 = ((int (*)(int, undefined4))((void (*)(void))((**(code **)(*ppuVar5 + 4)))))(iVar4,DAT_100a3664 + iVar1 * 0x78 + 4);
          if (iVar3 == 0) {
            *(undefined **)(DAT_100a3664 + iVar1 * 0x78) = *ppuVar5;
          }
          else {
            DAT_100a365c = DAT_100a365c + -1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
    }
    ppuVar5 = ppuVar5 + 1;
  } while (ppuVar5 < (undefined **)(DAT_100a3674));
  return DAT_100a365c;
}
