/* SPDX-License-Identifier: MIT */
/* mw2shell 10032640 */
/* mw2shell 10032640: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;

undefined4 __cdecl FUN_10032640(int param_1, int param_2, int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_4;
  
  if (param_2 < 1) {
    return 0;
  }
  iVar1 = 0;
  if (param_3 != 0) {
    iVar3 = param_1 * 0x30;
    do {
      if (0xb < iVar1) break;
      if (*(int *)(DAT_10092000 + 0x368 + iVar3) == 0) {
        param_3 = param_3 + -1;
        *(int *)(DAT_10092000 + 0x368 + iVar3) = param_2;
      }
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (param_3 != 0);
  }
  iVar1 = param_2 - param_2 % 100;
  if ((iVar1 == 0xd48) && (param_3 != 0)) {
    switch(param_1) {
    case 1:
      iStack_4 = 4;
      break;
    default:
      break;
    case 3:
      iStack_4 = 5;
      break;
    case 4:
      iStack_4 = 1;
      break;
    case 5:
      iStack_4 = 3;
    }
    iVar1 = 0;
    if (param_3 != 0) {
      iVar3 = iStack_4 * 0x30;
      do {
        if (0xb < iVar1) break;
        if (*(int *)(DAT_10092000 + 0x368 + iVar3) == 0) {
          param_3 = param_3 + -1;
          *(int *)(DAT_10092000 + 0x368 + iVar3) = param_2;
        }
        iVar3 = iVar3 + 4;
        iVar1 = iVar1 + 1;
      } while (param_3 != 0);
      if (param_3 != 0) {
        iVar2 = 0xc;
        iVar1 = iStack_4 * 0x30;
        iVar3 = param_1 * 0x30;
        do {
          if (*(int *)(DAT_10092000 + 0x368 + iVar3) == param_2) {
            *(undefined4 *)(DAT_10092000 + 0x368 + iVar3) = 0;
          }
          if (*(int *)(DAT_10092000 + 0x368 + iVar1) == param_2) {
            *(undefined4 *)(DAT_10092000 + 0x368 + iVar1) = 0;
          }
          iVar1 = iVar1 + 4;
          iVar3 = iVar3 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return 0;
      }
    }
  }
  else if (iVar1 == 0x1964) {
    if (param_3 != 0) {
      switch(param_1) {
      case 1:
        iStack_4 = 4;
        break;
      default:
        break;
      case 3:
        iStack_4 = 5;
        break;
      case 4:
        iStack_4 = 1;
        break;
      case 5:
        iStack_4 = 3;
      }
      iVar1 = 0;
      if (param_3 != 0) {
        iVar3 = iStack_4 * 0x30;
        do {
          if (0xb < iVar1) break;
          if (*(int *)(DAT_10092000 + 0x368 + iVar3) == 0) {
            param_3 = param_3 + -1;
            *(int *)(DAT_10092000 + 0x368 + iVar3) = param_2;
          }
          iVar3 = iVar3 + 4;
          iVar1 = iVar1 + 1;
        } while (param_3 != 0);
        if (param_3 != 0) {
          iVar1 = iStack_4 * 0x30;
          iVar2 = 0xc;
          iVar3 = param_1 * 0x30;
          do {
            if (*(int *)(DAT_10092000 + 0x368 + iVar3) == param_2) {
              *(undefined4 *)(DAT_10092000 + 0x368 + iVar3) = 0;
            }
            if (*(int *)(DAT_10092000 + 0x368 + iVar1) == param_2) {
              *(undefined4 *)(DAT_10092000 + 0x368 + iVar1) = 0;
            }
            iVar1 = iVar1 + 4;
            iVar3 = iVar3 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return 0;
        }
      }
    }
  }
  else if (param_3 != 0) {
    iVar3 = 0xc;
    iVar1 = param_1 * 0x30;
    do {
      if (*(int *)(DAT_10092000 + 0x368 + iVar1) == param_2) {
        *(undefined4 *)(DAT_10092000 + 0x368 + iVar1) = 0;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return 0;
  }
  return 1;
}
