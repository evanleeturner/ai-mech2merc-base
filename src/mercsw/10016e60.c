/* SPDX-License-Identifier: MIT */
/* mercsw 10016e60 */
/* mercsw 10016e60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae80;
extern undefined4 DAT_100aaf74;
extern undefined4 DAT_100aaf7c;
extern undefined4 DAT_100aafbc;
extern undefined4 DAT_101eb480;
extern undefined4 DAT_101eb484;
extern undefined DAT_101f52e0[];
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_100242e8(uint param_1);
undefined __cdecl FUN_10031b85(int param_1);
undefined __cdecl FUN_1003eb9c(int * param_1, int param_2, uint * param_3);
undefined __cdecl FUN_1003f893(int * param_1, int param_2, int param_3, uint * param_4);
undefined __cdecl FUN_10019df1(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_1001a040(uint param_1, uint param_2);
int __cdecl FUN_1001a060(int param_1, int param_2);
undefined4 __cdecl FUN_1005f040(int param_1, int param_2, uint * param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl FUN_10055f10(uint param_1, int param_2, int * param_3, int param_4);

void __cdecl FUN_10016e60(int param_1, uint * param_2, uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  uint *local_1c;
  int local_18;
  
  uVar2 = param_3 & 0xf000;
  local_1c = param_2;
  local_24 = 1;
  if (uVar2 < 0x1001) {
    if ((uVar2 == 0x1000) || (uVar2 == 0)) {
      uVar2 = param_3 & 0xff;
      if (((uVar2 < 0x30) ||
          ((((uVar2 == 0x60 || (uVar2 == 0xea)) || (uVar2 == 0xd0)) ||
           ((uVar2 == 0xdf || (uVar2 == 0x7f)))))) || ((0x5f < uVar2 && (uVar2 < 0x80)))) {
        param_3 = uVar2;
        if ((DAT_100aae80 != 0) && (uVar2 == 0xd0)) {
          param_3 = 0xdf;
        }
        for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
          local_1c[2] = param_3 << 0x10;
          local_1c = local_1c + 6;
        }
        FUN_1003eb9c((int *)(DAT_101f52e0),param_1,param_2);
      }
      else {
        if (DAT_100aae80 == 0) {
          for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
            local_1c[2] = (local_1c[2] + (param_3 & 0xf0)) * 0x10000;
            local_1c = local_1c + 6;
          }
        }
        else {
          for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
            local_1c[2] = ((0xf - local_1c[2]) + (param_3 & 0xf0)) * 0x10000;
            local_1c = local_1c + 6;
          }
        }
        FUN_1003f893((int *)(DAT_101f52e0),0x7fff,param_1,param_2);
      }
    }
  }
  else if (uVar2 < 0x3001) {
    if (uVar2 == 0x3000) {
      FUN_10055f10(param_3,param_1,(int *)param_2,-1);
    }
    else if ((uVar2 == 0x2000) && (DAT_100aaf7c != 0)) {
      if (DAT_100aafbc == 0) {
        for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
          uVar2 = FUN_1001a040(*(uint *)(PTR_DAT_100aaf68 + 0x94),local_1c[5]);
          local_1c[5] = uVar2;
          uVar2 = FUN_1001a060(local_1c[3],local_1c[5]);
          local_1c[3] = uVar2;
          uVar2 = FUN_1001a060(local_1c[4],local_1c[5]);
          local_1c[4] = uVar2;
          local_1c[2] = local_1c[2] << 0x10;
          local_1c = local_1c + 6;
        }
      }
      FUN_1005f040(param_3 & 0xff,param_1,param_2,(param_3 & 0xf00) >> 8,0,1,0);
    }
  }
  else if (uVar2 < 0x5001) {
    if (uVar2 == 0x5000) {
      if (DAT_100aaf7c != 0) {
        if (DAT_100aafbc == 0) {
          uVar2 = param_2[2];
          for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
            uVar3 = FUN_1001a040(*(uint *)(PTR_DAT_100aaf68 + 0x94),local_1c[5]);
            local_1c[5] = uVar3;
            uVar3 = FUN_1001a060(local_1c[3],local_1c[5]);
            local_1c[3] = uVar3;
            uVar3 = FUN_1001a060(local_1c[4],local_1c[5]);
            local_1c[4] = uVar3;
            if (((local_24 == 0) || (3 < (int)uVar2)) || ((int)uVar2 < (int)local_1c[2])) {
              local_24 = 0;
            }
            else {
              local_24 = 1;
            }
            local_1c[2] = local_1c[2] << 0x10;
            local_1c = local_1c + 6;
          }
        }
        FUN_1005f040(param_3 & 0xff,param_1,param_2,(param_3 & 0xf00) >> 8,0,1,local_24);
      }
    }
    else if (uVar2 == 0x4000) {
      if (DAT_100aae80 == 0) {
        for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
          if ((int)local_1c[3] < 0x300000) {
            local_1c[2] = local_1c[3];
          }
          else {
            local_1c[2] = (local_1c[2] + (param_3 & 0xf0)) * 0x10000;
          }
          local_1c = local_1c + 6;
        }
      }
      else {
        for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
          if ((int)local_1c[3] < 0x300000) {
            local_1c[2] = local_1c[3];
          }
          else {
            local_1c[2] = ((0xf - local_1c[2]) + (param_3 & 0xf0)) * 0x10000;
          }
          local_1c = local_1c + 6;
        }
      }
      if (DAT_100aaf74 == 0) {
        FUN_1003eb9c((int *)(DAT_101f52e0),param_1,param_2);
      }
      else {
        FUN_1003f893((int *)(DAT_101f52e0),0x7fff,param_1,param_2);
      }
    }
  }
  else if (uVar2 < 0x7001) {
    if (uVar2 == 0x7000) {
      if (DAT_100aaf7c != 0) {
        FUN_1005f040(param_3 & 0xff,param_1,param_2,(param_3 & 0xf00) >> 8,0,0,0);
      }
    }
    else if ((uVar2 == 0x6000) && (DAT_100aaf7c != 0)) {
      uVar2 = param_2[2];
      for (local_18 = 0; iVar1 = DAT_100aafbc, local_18 < param_1; local_18 = local_18 + 1) {
        if (((local_24 == 0) || (3 < (int)uVar2)) || ((int)uVar2 < (int)local_1c[2])) {
          local_24 = 0;
        }
        else {
          local_24 = 1;
        }
        local_1c[2] = local_1c[2] << 0x10;
        local_1c = local_1c + 6;
      }
      DAT_100aafbc = 1;
      FUN_1005f040(param_3 & 0xff,param_1,param_2,(param_3 & 0xf00) >> 8,0,1,local_24);
      DAT_100aafbc = iVar1;
    }
  }
  else if (uVar2 == 0x8000) {
    FUN_100242e8(param_3 & 0xfff);
  }
  else if (uVar2 == 0x9000) {
    FUN_10031b85(param_3 & 0xfff);
  }
  else if (uVar2 == 0xa000) {
    DAT_101eb480 = *param_2;
    DAT_101eb484 = param_2[1];
    for (local_18 = 1; local_18 < param_1; local_18 = local_18 + 1) {
      FUN_10019df1(param_2[local_18 * 6],param_2[local_18 * 6 + 1],param_3 & 0xff);
    }
    FUN_10019df1(*param_2,param_2[1],param_3 & 0xff);
  }
  return;
}
