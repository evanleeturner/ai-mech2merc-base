/* SPDX-License-Identifier: MIT */
/* mercsw 10005624 */
/* mercsw 10005624: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40cc;
extern undefined4 DAT_100a4104;
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b3218;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_10008323(int param_1);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);
int __cdecl FUN_10030052(int param_1, uint param_2);
undefined4 __cdecl FUN_1002f28d(int param_1);
undefined4 __cdecl FUN_1001cac9(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);
undefined __cdecl FUN_10005207(int param_1, int * param_2, uint param_3);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_10004b19(int param_1, int * param_2);
undefined __cdecl FUN_1005d650(int * param_1, int param_2);

void __cdecl FUN_10005624(int param_1, int * param_2, uint param_3, int param_4, int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int local_50;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  (void)local_28;
  (void)local_c;
  iVar3 = param_2[0x16] + param_3 * 0x28;
  if ((undefined4 *)(iVar3 + -0x28) == (undefined4 *)0x0) {
    return;
  }
  if (*(short *)(iVar3 + -4) <= param_4) {
    return;
  }
  if (param_4 < 0) {
    return;
  }
  local_10 = (uint)*(ushort *)(iVar3 + -0x1c + param_4 * 2);
  uVar1 = local_10 / 100;
  if (uVar1 < 0x42) {
    local_18 = (int *)param_2[0x15];
    for (local_30 = 0; local_30 < 0xe; local_30 = local_30 + 1) {
      if ((-1 < local_18[1]) && ((uint)(local_18[0xb]) == local_10)) {
        if ((param_5 == 0) && (((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38 && (*local_18 != 0)))) {
          switch(uVar1) {
          case 0:
          case 1:
          case 2:
          case 3:
            FUN_10008323(0x16);
            break;
          case 4:
          case 5:
          case 6:
            FUN_10008323(0x17);
            break;
          case 7:
          case 8:
          case 9:
            FUN_10008323(0x18);
            break;
          case 10:
            FUN_10008323(0x19);
            break;
          case 0xb:
            FUN_10008323(0x1a);
            break;
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
            FUN_10008323(0x1b);
            break;
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
            FUN_10008323(0x1c);
            break;
          case 0x14:
            FUN_10008323(0);
            break;
          case 0x15:
            FUN_10008323(0x1d);
            break;
          case 0x16:
            FUN_10008323(0x1e);
            break;
          case 0x17:
            FUN_10008323(0x1f);
            break;
          case 0x18:
            FUN_10008323(0x20);
            break;
          case 0x19:
            FUN_10008323(0x21);
            break;
          case 0x1a:
            FUN_10008323(0x22);
            break;
          case 0x1b:
            FUN_10008323(0x23);
            break;
          case 0x1d:
            FUN_10008323(3);
          }
          if (param_2[0xf5] == 2) {
            FUN_10003742(0xe1,100,0x40,5,0x50);
          }
          FUN_10008323(0);
        }
        *local_18 = 0;
        local_18[2] = -1;
        local_18[0xe] = 1;
        local_40 = param_2[0x16];
        for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
          local_34 = 0;
          while (local_34 < *(short *)(local_40 + 0x24)) {
            if (*(ushort *)(local_40 + 0xc + local_34 * 2) == local_10) {
              for (local_44 = local_34; local_44 < *(short *)(local_40 + 0x24) + -1;
                  local_44 = local_44 + 1) {
                if (local_44 < 0xb) {
                  *(undefined2 *)(local_40 + 0xc + local_44 * 2) =
                       *(undefined2 *)(local_40 + 0xe + local_44 * 2);
                }
              }
              *(undefined2 *)(local_40 + 0xc + local_44 * 2) = 0;
              *(short *)(local_40 + 0x24) = *(short *)(local_40 + 0x24) + -1;
            }
            else {
              local_34 = local_34 + 1;
            }
          }
          local_40 = local_40 + 0x28;
        }
        return;
      }
      local_18 = local_18 + 0x10;
    }
    goto LAB_10006571;
  }
  if (100 < uVar1) {
    local_50 = param_2[0x17];
    for (local_30 = 0; local_30 < param_2[0xff]; local_30 = local_30 + 1) {
      if ((uint)((int)*(short *)(local_50 + 4)) == local_10) {
        if ((*(int *)(local_50 + 0x12) < param_2[0x18]) || (*(short *)(local_50 + 2) < 1)) break;
        iVar2 = *(int *)(local_50 + 0x12);
        local_c = (int)param_2 + iVar2 * 0x3a + 100;
        if (*(int *)((int)param_2 + iVar2 * 0x3a + 0x66) < 1) break;
        if ((*(int *)(local_50 + 0x12) < param_2[0x18]) &&
           (piVar5 = (int *)((int)param_2 + iVar2 * 0x3a + 0x66),
           *piVar5 = *piVar5 - (int)*(short *)(local_50 + 2),
           *(int *)((int)param_2 + iVar2 * 0x3a + 0x66) == 0)) {
          local_18 = (int *)param_2[0x15];
          for (local_24 = 0; local_24 < 0xe; local_24 = local_24 + 1) {
            if ((-1 < local_18[1]) && (local_18[8] == *(int *)(local_50 + 0x12))) {
              *local_18 = 0;
              local_18[2] = 0xffffffff;
            }
            local_18 = local_18 + 0x10;
          }
        }
        if ((param_5 == 0) && (*(short *)(local_50 + 2) != 0)) {
          if ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38) {
            if (param_2[0xf5] == 2) {
              FUN_10003742(0xe1,100,0x40,5,0x50);
            }
            local_20 = *(int *)(*param_2 + 0x50) - *(int *)PTR_DAT_100aaf68;
            local_2c = *(int *)(*param_2 + 0x54) - *(int *)(PTR_DAT_100aaf68 + 4);
            local_38 = *(int *)(*param_2 + 0x58) - *(int *)(PTR_DAT_100aaf68 + 8);
            DAT_100b3218 = 1;
            FUN_100037f0(local_20,local_2c,local_38,0xcd,DAT_100ab094);
            FUN_10008323(1);
          }
          local_3c = FUN_10030052(*(int *)(*param_2 + 0x40),param_3);
          if (local_3c == 0) {
            local_3c = FUN_10030052(*(int *)(*param_2 + 0x40),3);
          }
          if (local_3c != 0) {
            puVar6 = &local_38;
            piVar5 = &local_2c;
            puVar4 = &local_20;
            iVar2 = FUN_1002f28d(local_3c);
            FUN_1001cac9(iVar2,puVar4,(undefined4 *)(piVar5),puVar6);
            FUN_1004aa97(param_1,7,local_20,local_2c,local_38,local_20,local_2c,local_38);
          }
          *(int *)(iVar3 + -0x20) =
               *(int *)(iVar3 + -0x20) +
               (int)*(short *)(local_50 + 2) * (int)*(short *)(local_50 + 8) * -0x10000;
          if (*(int *)(iVar3 + -0x20) < 0) {
            *(undefined4 *)(iVar3 + -0x24) = 0;
            *(undefined4 *)(iVar3 + -0x28) = *(undefined4 *)(iVar3 + -0x24);
            *(undefined4 *)(iVar3 + -0x20) = 0;
            *(undefined2 *)(iVar3 + -0x1c + param_4 * 2) = 0;
            FUN_10005207(param_1,param_2,param_3);
            if ((*(ushort *)(iVar3 + -2) & 0x100) == 0) {
              uVar1 = (int)*(uint *)(iVar3 + -0x20) >> 0x1f;
              local_8 = (*(uint *)(iVar3 + -0x20) ^ uVar1) - uVar1;
              switch(param_3) {
              case 2:
                local_14 = 3;
                break;
              case 3:
                local_14 = 0;
                break;
              case 4:
                local_14 = 3;
                break;
              case 5:
                local_14 = 2;
                break;
              case 6:
                local_14 = 4;
                break;
              case 7:
                local_14 = 2;
                break;
              case 8:
                local_14 = 4;
                break;
              default:
                local_14 = 0;
              }
              if (local_14 == 0) {
                local_28 = 0;
              }
              else {
                iVar2 = param_2[0x16] + local_14 * 0x28;
                local_28 = iVar2 + -0x28;
                *(int *)(iVar2 + -0x20) = *(int *)(iVar2 + -0x20) - local_8;
                iVar7 = 0;
                iVar2 = FUN_10051f43((int)*(short *)(iVar2 + -4));
                FUN_10005624(param_1,param_2,local_14,iVar2,iVar7);
              }
            }
          }
          if ((DAT_100a4104 != 0) &&
             (((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38 || (DAT_100aa1ac == 0)))) {
            param_2[0xf5] = 5;
            FUN_10004b19(param_1,param_2);
          }
        }
        *(undefined2 *)(local_50 + 2) = 0;
      }
      local_50 = local_50 + 0x1e;
    }
    goto LAB_10006571;
  }
  uVar1 = (local_10 / 10) * 10;
  if (uVar1 < 0x1cb7) {
    if (uVar1 == 0x1cb6) {
LAB_1000634d:
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(0xc);
      }
      FUN_1005d650(param_2,0);
    }
    else if (uVar1 == 0x1c84) {
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(9);
      }
      FUN_1005d650(param_2,0);
    }
  }
  else if (uVar1 < 0x1d1b) {
    if ((uVar1 == 0x1d1a) || (uVar1 == 0x1ce8)) goto LAB_1000634d;
  }
  else if (uVar1 < 0x1d7f) {
    if (uVar1 == 0x1d7e) {
LAB_10006255:
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(10);
      }
      param_2[0xf9] = param_2[0xf9] + -0x199a;
      if (param_2[0xf9] < 0) {
        param_2[0xf9] = 0;
      }
    }
    else if (uVar1 == 0x1d4c) {
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(0xb);
      }
      param_2[0xf9] = param_2[0xf9] + -0x199a;
      if (param_2[0xf9] < 0) {
        param_2[0xf9] = 0;
      }
    }
  }
  else if (uVar1 < 0x1de3) {
    if ((uVar1 == 0x1de2) || (uVar1 == 0x1db0)) goto LAB_10006255;
  }
  else if (uVar1 < 0x1e47) {
    if (uVar1 == 0x1e46) {
      if (((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38) || (DAT_100aa1ac == 0)) {
        FUN_10004b19(param_1,param_2);
      }
    }
    else if (uVar1 == 0x1e14) {
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(9);
      }
      FUN_1005d650(param_2,1);
    }
  }
  else if (uVar1 < 0x1eab) {
    if (uVar1 == 0x1eaa) {
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(7);
      }
      param_2[0xf9] = param_2[0xf9] + -0x199a;
      if (param_2[0xf9] < 0) {
        param_2[0xf9] = 0;
      }
    }
    else if (uVar1 == 0x1e78) {
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(8);
      }
      param_2[0xf9] = param_2[0xf9] + -0x199a;
      if (param_2[0xf9] < 0) {
        param_2[0xf9] = 0;
      }
      param_2[0xfd] = -2;
      param_2[0x108] = 0;
      param_2[0xfe] = 0;
    }
  }
  else if (uVar1 < 0x1f41) {
    if (uVar1 == 8000) {
      if (((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) && (param_2[0xf4] != 0)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(5);
      }
      if (param_2[0xf4] < 1) {
        param_2[0xf4] = 0;
      }
      else {
        param_2[0xf4] = param_2[0xf4] + -0x32;
      }
    }
    else if (uVar1 == 0x1edc) {
      if ((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) {
        if (param_2[0xf5] == 2) {
          FUN_10003742(0xe1,100,0x40,5,0x50);
        }
        FUN_10008323(6);
      }
      if ((DAT_100a40cc != 0) && (((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38 || (DAT_100aa1ac == 0))))
      {
        FUN_10004b19(param_1,param_2);
      }
    }
  }
  else if (uVar1 == 0x2134) {
    if (((param_5 == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)) && (param_2[0xfd] != 2)) {
      if (param_2[0xf5] == 2) {
        FUN_10003742(0xe1,100,0x40,5,0x50);
      }
      FUN_10008323(4);
    }
    if (param_2[0xfe] < 1) {
      param_2[0x108] = 0;
    }
    else {
      param_2[0x108] = param_2[0x108] - param_2[0x108] / param_2[0xfe];
    }
    if (0 < param_2[0xfe]) {
      param_2[0xfe] = param_2[0xfe] + -1;
    }
    if (param_2[0xfe] == 0) {
      param_2[0xfd] = -2;
    }
  }
  else if (uVar1 == 9000) {
    if (param_5 == 0) {
      iVar2 = 1;
      iVar3 = FUN_10051f43((int)*(short *)(iVar3 + -4));
      FUN_10005624(param_1,param_2,param_3,iVar3,iVar2);
      return;
    }
  }
  else if ((uVar1 == 0x251c) && (param_5 == 0)) {
    iVar2 = 1;
    iVar3 = FUN_10051f43((int)*(short *)(iVar3 + -4));
    FUN_10005624(param_1,param_2,param_3,iVar3,iVar2);
    return;
  }
  if ((param_2[0xf9] != 0) && (param_2[0xf9] < 0x6666)) {
    param_2[0xf9] = 0x6666;
  }
LAB_10006571:
  for (local_30 = param_4; local_30 < *(short *)(iVar3 + -4) + -1; local_30 = local_30 + 1) {
    *(undefined2 *)(iVar3 + -0x1c + local_30 * 2) = *(undefined2 *)(iVar3 + -0x1a + local_30 * 2);
  }
  *(undefined2 *)(iVar3 + -0x1c + local_30 * 2) = 0;
  *(short *)(iVar3 + -4) = *(short *)(iVar3 + -4) + -1;
  return;
}
