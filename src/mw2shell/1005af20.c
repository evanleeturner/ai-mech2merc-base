/* SPDX-License-Identifier: MIT */
/* mw2shell 1005af20 */
/* mw2shell 1005af20: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 * DAT_100a6720;
extern undefined DAT_100a89e0[];
extern undefined DAT_100a8a30[];

int __stdcall FUN_1005af20(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0xc004;
  iVar1 = *(int *)(DAT_10083508 + 0x23c7);
  if (((iVar1 == 0xc02d) || (iVar1 == 0xc00a)) || (iVar1 == 0xc02b)) {
    iVar2 = 0xc004;
  }
  else {
    iVar4 = 0;
    piVar3 = (int *)(DAT_100a89e0);
    do {
      if ((undefined4)(*piVar3) == *DAT_100a6720) {
        iVar2 = *(int *)(iVar4 * 8 + 0x100a89e4);
        if (iVar2 == iVar1) {
          return 0xc004;
        }
        *DAT_100a6720 = 0;
        break;
      }
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (piVar3 < (int *)(DAT_100a8a30));
    if (iVar2 != 0xc004) {
      iVar1 = *(int *)(DAT_10083508 + 0x23bb);
      if (iVar1 == 0) {
        if (*(char *)(DAT_10083508 + 0x23b9) == '\x01') {
          switch(iVar2) {
          case 0xc01d:
          case 0xc01e:
          case 0xc01f:
          case 0xc020:
          case 0xc022:
          case 0xc024:
          case 0xc026:
          case 0xc028:
          case 0xc02f:
          case 0xc030:
            return 0xc004;
          }
        }
        else {
          switch(iVar2) {
          case 0xc01d:
          case 0xc01e:
          case 0xc01f:
          case 0xc020:
          case 0xc022:
          case 0xc024:
          case 0xc028:
          case 0xc02f:
          case 0xc030:
            return 0xc004;
          case 0xc026:
            if (*(char *)(DAT_10083508 + 1) == '\x01') {
              *(undefined1 *)(DAT_10083508 + 0x23ba) = 1;
              return iVar2;
            }
            return 0xc004;
          }
        }
      }
      else if (iVar1 == 1) {
        if (*(char *)(DAT_10083508 + 0x23b9) == '\x01') {
          switch(iVar2) {
          case 0xc01d:
          case 0xc01e:
          case 0xc022:
          case 0xc024:
          case 0xc026:
          case 0xc02f:
          case 0xc030:
            return 0xc004;
          case 0xc01f:
          case 0xc020:
          case 0xc028:
            *(undefined1 *)(DAT_10083508 + 0x23ba) = 1;
            return iVar2;
          }
        }
        else {
          switch(iVar2) {
          case 0xc01d:
          case 0xc01e:
          case 0xc01f:
          case 0xc020:
          case 0xc022:
          case 0xc024:
          case 0xc026:
          case 0xc028:
          case 0xc02f:
          case 0xc030:
            if (*(char *)(DAT_10083508 + 1) == '\x01') {
              *(undefined1 *)(DAT_10083508 + 0x23ba) = 1;
              return iVar2;
            }
            return 0xc004;
          }
        }
      }
      else if (iVar1 == 2) {
        return 0xc004;
      }
      return 0xc004;
    }
  }
  return iVar2;
}
