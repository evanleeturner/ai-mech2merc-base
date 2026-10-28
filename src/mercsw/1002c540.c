/* SPDX-License-Identifier: MIT */
/* mercsw 1002c540 */
/* mercsw 1002c540: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aafa4;
extern undefined4 DAT_100aafa8;
extern undefined4 DAT_100aafb0;
extern undefined4 DAT_100aafc0;
extern undefined4 DAT_100ad6b4;
extern undefined4 DAT_10115100[];
extern int DAT_10115160;
int __cdecl FUN_1007d8c1(int param_1, int param_2, int param_3, int param_4);
undefined __cdecl FUN_1007d40c(int param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_10003d60(int param_1, int param_2);

uint __cdecl FUN_1002c540(int param_1, int param_2, uint param_3, int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_8;
  
  local_14 = 0;
  local_18 = param_3 & 0xf000;
  uVar4 = *(ushort *)(*(int *)(param_1 + 0x20) + 2);
  if (DAT_100aafa4 != 0) {
    if (DAT_100aafa8 == 1) {
      switch(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24)) {
      case 0:
        return 0xd;
      case 1:
        return 3;
      case 2:
        return 6;
      case 3:
        return 2;
      default:
        return 0xff;
      case 5:
        return 8;
      case 6:
        return 7;
      case 7:
        return 0xf;
      }
    }
    if (DAT_100aafa8 == 2) {
      uVar4 = **(ushort **)(param_1 + 0x20) & 0x10f;
      if (uVar4 < 0x101) {
        if (uVar4 == 0x100) {
          return 0xf;
        }
        switch(uVar4) {
        case 0:
          return 0xd;
        case 1:
          return 6;
        case 2:
          return 8;
        case 4:
          return 1;
        }
      }
      else {
        if (uVar4 == 0x101) {
          return 7;
        }
        if (uVar4 == 0x102) {
          return 0xb;
        }
        if (uVar4 == 0x104) {
          return 3;
        }
      }
      return 0xff;
    }
    if (DAT_100aafa4 == 1) {
      if (local_18 == 0x8000) {
        return param_3;
      }
      if (local_18 == 0x9000) {
        return param_3;
      }
      if ((uVar4 & 0x200) != 0) {
        return 7;
      }
      if ((uVar4 & 0x400) != 0) {
        if ((local_18 != 0x1000) && (local_18 != 0)) {
          return param_3;
        }
        return 0xb;
      }
      if ((uVar4 & 0x100) == 0) {
        if (((uVar4 & 0x70) == 0) && (param_3 != 0)) {
          return 8;
        }
        return 0;
      }
      uVar5 = (**(ushort **)(param_1 + 0x20) & 0xf0) >> 4;
      if (uVar5 == 0) {
        return 7;
      }
      if (uVar5 < 0xc) {
        return 3;
      }
      return 0xb;
    }
    if (DAT_100aafa4 == 3) {
      if ((uVar4 & 0x200) != 0) {
        return 7;
      }
      if ((uVar4 & 0x400) != 0) {
        return 0xb;
      }
      if ((uVar4 & 0x100) != 0) {
        uVar5 = (**(ushort **)(param_1 + 0x20) & 0xf0) >> 4;
        if (uVar5 == 0) {
          param_3 = 4;
        }
        else if (uVar5 < 0xc) {
          param_3 = 0;
        }
        else {
          param_3 = 8;
        }
        iVar2 = FUN_1007d8c1(param_1,param_2,0xff,param_4);
        return param_3 + ((iVar2 * 0x30) / 0xf >> 4) | 0x1000;
      }
      return 8;
    }
  }
  if (local_18 < 0x2001) {
    if (local_18 == 0x2000) {
LAB_1002c9c0:
      local_1c = 0xff;
      if (DAT_100aafc0 == 0) {
        local_14 = param_3 & 0xff;
      }
      else if (((DAT_100aafc0 & 0x100) == 0) ||
              (((uVar4 & 0x100) == 0 && (((byte)uVar4 & 0xf0) != 0x50)))) {
        if ((uVar4 & DAT_100aafc0) == 0) {
          local_14 = param_3 & 0xff;
        }
        else {
          local_18 = 0x1000;
          local_1c = 0xd0;
        }
      }
      else {
        local_18 = 0x1000;
        local_1c = 0xa0;
      }
      goto LAB_1002cb37;
    }
    if (local_18 == 0) {
      local_1c = (param_3 & 0xf0) >> 4;
      if (DAT_100aafb0 == 0) {
        local_10 = (param_3 & 0xf00) >> 4;
      }
      else {
        local_1c = (int)local_1c >> 2;
        local_10 = 0xf0;
      }
      return local_10 | local_1c;
    }
  }
  else if (local_18 < 0x5001) {
    if (local_18 == 0x5000) goto LAB_1002c9c0;
    if (local_18 == 0x3000) {
      if (DAT_100aafc0 == 0) {
        return param_3;
      }
      if ((uVar4 & DAT_100aafc0) == 0) {
        return param_3;
      }
      local_18 = 0x1000;
      local_1c = param_3 & 0xf0;
      goto LAB_1002cb37;
    }
  }
  else if (local_18 < 0x7001) {
    if ((local_18 == 0x7000) || (local_18 == 0x6000)) goto LAB_1002c9c0;
  }
  else {
    if (local_18 == 0x8000) {
      return param_3;
    }
    if (local_18 == 0x9000) {
      return param_3;
    }
  }
  local_1c = param_3 & 0xff;
  if ((uVar4 & 0x400) != 0) {
    return param_3;
  }
LAB_1002cb37:
  if ((uVar4 & 0x400) == 0) {
    local_8 = FUN_1007d8c1(param_1,param_2,local_1c,param_4);
    FUN_1007d40c(param_1,param_2,0x10115100,local_1c);
  }
  else {
    local_8 = 0xf;
  }
  if ((DAT_100aafa4 != 3) &&
     ((((uVar4 & 0x100) != 0 || (((byte)uVar4 & 0xf0) == 0x50)) &&
      (uVar5 = (**(ushort **)(param_1 + 0x20) & 0xf0) >> 4, uVar5 != 0)))) {
    if (DAT_100ad6b4 == 0) {
      iVar2 = (0x10 - uVar5) * 0x1000;
      local_8 = FUN_10003d60(iVar2,local_8);
      local_8 = local_8 & 0xf;
      for (local_24 = 0; local_24 < DAT_10115160; local_24 = local_24 + 1) {
        iVar3 = DAT_10115100[local_24];
        uVar5 = FUN_10003d60(iVar2,*(int *)(iVar3 + 0x2c));
        *(uint *)(iVar3 + 0x2c) = uVar5 & 0xf;
      }
    }
    else {
      iVar2 = FUN_10002570(0xf - local_8,0xf);
      iVar2 = FUN_10003d60(uVar5,iVar2);
      local_8 = local_8 + iVar2;
      for (local_24 = 0; local_24 < DAT_10115160; local_24 = local_24 + 1) {
        iVar2 = DAT_10115100[local_24];
        iVar3 = FUN_10002570(0xf - *(int *)(iVar2 + 0x2c),0xf);
        iVar3 = FUN_10003d60(uVar5,iVar3);
        piVar1 = (int *)(iVar2 + 0x2c);
        *piVar1 = *piVar1 + iVar3;
      }
    }
  }
  if (((local_18 == 0x7000) || (local_18 == 0x5000)) ||
     ((local_18 == 0x6000 || (local_18 == 0x2000)))) {
    local_8 = local_8 << 8;
    local_10 = 0;
  }
  else if (DAT_100aafb0 == 0) {
    local_10 = (param_3 & 0xf00) >> 4;
  }
  else {
    local_10 = 0xf0;
  }
  return local_8 | local_10 | local_14 | local_18;
}
