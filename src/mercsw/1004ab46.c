/* SPDX-License-Identifier: MIT */
/* mercsw 1004ab46 */
/* mercsw 1004ab46: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7b70;
extern undefined DAT_100a9670[];
extern undefined DAT_100a9680[];
extern undefined DAT_100a9684[];
extern undefined4 DAT_100aafac;
extern undefined4 DAT_100aefa8;
extern undefined4 DAT_100b06e4;
extern undefined4 DAT_100b06e8;
extern undefined4 DAT_100b06f4;
extern undefined4 DAT_100b06f8;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_10160bc0;
extern undefined4 DAT_10160bc4;
extern undefined4 DAT_10160bc8;
extern undefined4 DAT_10160bcc;
extern undefined4 DAT_10160bd0;
extern undefined4 DAT_10160bd4;
extern undefined DAT_101f26f0[];
extern undefined DAT_101f26f4[];
extern undefined DAT_101f26f8[];
extern undefined DAT_101f26fc[];
extern undefined DAT_101f2700[];
extern undefined DAT_101f2704[];
extern undefined DAT_101f2708[];
extern undefined DAT_101f2714[];
extern undefined DAT_101f2718[];
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1004be92(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4);
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined4 __stdcall FUN_1007d03e(void);
undefined __cdecl FUN_1007d0d3(int param_1, byte param_2, undefined4 * param_3);
undefined __cdecl FUN_1007d258(int param_1, int param_2);
undefined4 __cdecl FUN_10030c40(int param_1, int param_2);
int __cdecl FUN_100142b4(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1003109e(int param_1, byte param_2, undefined4 * param_3);
undefined4 __cdecl FUN_1001d5cb(int param_1);
undefined __cdecl FUN_1002fd94(int * param_1, int * param_2);
undefined __cdecl FUN_10064114(int param_1, int param_2);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f7f7(int param_1);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_1005f81d(short param_1, ushort param_2);
undefined __cdecl FUN_1005f7ad(short param_1, undefined2 param_2);
undefined __cdecl FUN_10060864(int param_1, uint param_2, int param_3);
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);
int __cdecl FUN_10051f43(int param_1);
undefined4 __stdcall FUN_1001a620(void);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);

void __cdecl FUN_1004ab46(undefined4 param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, undefined4 param_8, int param_9, int param_10, int param_11, int param_12)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_a4;
  int local_a0;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (void)local_94;
  (void)local_90;
  (void)local_8c;
  (void)local_78;
  (void)local_70;
  (void)local_60;
  (void)local_5c;
  (void)local_58;
  (void)local_54;
  (void)local_14;
  local_50 = (int *)0x0;
  local_38 = (uint *)0x0;
  local_20 = 0;
  local_1c = 0xffffffff;
  local_48 = 0;
  if (-1 < (int)param_3) {
    local_14 = param_3 & 0xff00;
    uVar1 = param_3 & 0xff;
    if (uVar1 < 0x24) {
      local_2c = (uint)((param_3 & 0x4000) != 0);
      switch(uVar1) {
      case 0:
        if ((param_3 & 0x2000) == 0) {
          if ((param_3 & 0x400) != 0) {
            param_3 = 9;
            uVar1 = param_3;
          }
        }
        else {
          param_3 = 0xe;
          uVar1 = param_3;
        }
        break;
      case 1:
        if ((param_3 & 0x2000) == 0) {
          if ((param_3 & 0x400) != 0) {
            param_3 = 9;
            uVar1 = param_3;
          }
        }
        else {
          param_3 = 0xf;
          uVar1 = param_3;
        }
        break;
      case 2:
        if ((param_3 & 0x2000) == 0) {
          if ((param_3 & 0x400) != 0) {
            param_3 = 9;
            uVar1 = param_3;
          }
        }
        else {
          param_3 = 0x10;
          uVar1 = param_3;
        }
        break;
      case 3:
      case 0x22:
      case 0x23:
        if ((param_3 & 0x400) == 0) {
          if ((param_3 & 0x2000) == 0) {
            uVar2 = param_3 & 0x200;
            param_3 = uVar1;
            if (uVar2 != 0) {
              param_3 = 0x13;
            }
          }
          else {
            param_3 = 0x11;
          }
        }
        else {
          param_3 = 0xc;
        }
        local_20 = 1;
        local_1c = 0x10b;
        local_48 = 1;
        uVar1 = param_3;
        break;
      case 4:
        if ((param_3 & 0x400) == 0) {
          if ((param_3 & 0x2000) == 0) {
            uVar2 = param_3 & 0x200;
            param_3 = uVar1;
            if (uVar2 != 0) {
              param_3 = 0x14;
            }
          }
          else {
            param_3 = 0x11;
          }
        }
        else {
          param_3 = 0xc;
        }
        local_20 = 1;
        local_1c = 0x10b;
        uVar1 = param_3;
        break;
      case 5:
        if ((param_3 & 0x100) == 0) {
          if ((param_3 & 0x400) == 0) {
            if ((param_3 & 0x2000) != 0) {
              param_3 = 0x12;
              uVar1 = param_3;
            }
          }
          else {
            param_3 = 9;
            uVar1 = param_3;
          }
        }
        else {
          param_4 = param_7;
          param_6 = param_9;
          param_3 = 8;
          uVar1 = param_3;
        }
        break;
      case 6:
        uVar2 = param_3 & 0x400;
        param_3 = uVar1;
        if (uVar2 != 0) {
          param_3 = 0x15;
        }
        local_48 = 1;
        uVar1 = param_3;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
        break;
      case 0xb:
        if ((param_3 & 0x1000) == 0) {
          if ((param_3 & 0x100) == 0) {
            if ((param_3 & 0x200) == 0) {
              local_8 = 8;
            }
            else {
              local_8 = 4;
            }
          }
          else {
            local_8 = 4;
          }
        }
        else {
          local_8 = 0x10;
        }
        FUN_1004be92(param_4,param_5,param_6,local_8);
        return;
      }
      param_3 = uVar1;
      iVar3 = param_3 * 0x2c;
      local_38 = (uint *)(DAT_100a9670 + iVar3);
      local_18 = *(int *)PTR_DAT_100aaf68 - param_4;
      local_10 = *(int *)(PTR_DAT_100aaf68 + 4) - param_5;
      local_28 = *(int *)(PTR_DAT_100aaf68 + 8) - param_6;
      if ((*(int *)(DAT_100a9684 + iVar3) != 0) || (*(int *)(DAT_100a9680 + iVar3) != 0)) {
        local_a0 = 0;
        local_3c = -1;
        for (local_40 = 0; local_40 < 0xff; local_40 = local_40 + 1) {
          iVar3 = local_40 * 0x2c;
          local_50 = (int *)(DAT_101f26f0 + iVar3);
          if (*(uint *)(DAT_101f2714 + iVar3) == param_3) {
            if (*(int *)(DAT_101f2708 + iVar3) == 0) {
              if ((local_3c < 0) && ((local_38[5] == 0 || (*local_50 != 0)))) {
                local_3c = local_40;
              }
            }
            else if ((((*(int *)(DAT_101f2714 + iVar3) < 0x17) ||
                      (0x21 < *(int *)(DAT_101f2714 + iVar3))) && ((local_38[10] & 2) == 0)) &&
                    (iVar3 = FUN_1000fc30(*(int *)(DAT_101f26f8 + iVar3) - param_4,
                                          *(int *)(DAT_101f26fc + iVar3) - param_5,
                                          *(int *)(DAT_101f2700 + iVar3) - param_6), iVar3 < 500))
            {
              local_a0 = local_a0 + 1;
              if (DAT_100aefa8 != 1) {
                return;
              }
              if (2 < local_a0) {
                return;
              }
            }
          }
        }
        if (local_3c < 0) {
          return;
        }
        iVar3 = local_3c * 0x2c;
        local_50 = (int *)(DAT_101f26f0 + iVar3);
        *(undefined4 *)(DAT_101f2708 + iVar3) = 1;
        *(int *)(DAT_101f26f8 + iVar3) = param_4;
        *(int *)(DAT_101f26fc + iVar3) = param_5;
        *(int *)(DAT_101f2700 + iVar3) = param_6;
        *(uint *)(DAT_101f2704 + iVar3) = *local_38 + DAT_100b3904;
        *(undefined4 *)(DAT_101f26f4 + iVar3) = 0;
        *(undefined4 *)(DAT_101f2718 + iVar3) = param_1;
        if (local_48 != 0) {
          iVar3 = FUN_1007d03e();
          if (-1 < iVar3) {
            local_98 = 1;
            local_94 = param_4;
            local_90 = param_5;
            local_8c = param_6;
            local_78 = 20000;
            local_70 = local_50[5];
            FUN_1007d0d3(iVar3,0xf,&local_98);
            FUN_1007d258(iVar3,1);
          }
          local_4c = FUN_10030c40(6,0);
          if (-1 < local_4c) {
            local_64 = param_4;
            local_60 = FUN_100142b4(param_4,param_5,param_6);
            local_5c = param_6;
            local_54 = 5000;
            local_58 = local_50[5];
            FUN_1003109e(local_4c,7,(undefined4 *)(&local_64));
          }
        }
        if (*local_50 != 0) {
          if ((local_38[10] & 1) != 0) {
            if (((param_2 == 0) || ((*(ushort *)(param_2 + 2) & 0x400) != 0)) ||
               (((*(ushort *)(param_2 + 2) & 0x100) == 0 ||
                (local_34 = (int *)FUN_1001d5cb(param_2), local_34 == (int *)0x0)))) {
              local_50[5] = DAT_100b3904 + 0xb5;
            }
            else {
              param_6 = 0;
              param_5 = 0;
              param_4 = 0;
              local_50[1] = param_2;
              FUN_1002fd94((int *)*local_50,local_34);
            }
          }
          if (((param_3 < 0x17) || (0x21 < param_3)) || (DAT_100b06f4 == 0)) {
            FUN_1002f668(*local_50,param_10,param_11,param_12,0);
            FUN_1002f37a(*local_50,param_4,param_5,param_6);
          }
          else {
            FUN_10064114(DAT_100b06f4,*local_50);
            DAT_100b06f4 = 0;
          }
          FUN_1002f783(*local_50);
          FUN_1002f7f7(*local_50);
          FUN_1002fbc0((int *)*local_50);
          if (local_50[7] != -1) {
            FUN_1005f81d((short)local_50[7],0);
            FUN_1005f7ad((short)local_50[7],(short)local_38[7]);
          }
        }
        if ((local_38[4] != 0) && (DAT_100b06f8 != 0)) {
          local_6c = 0;
          local_68 = 1;
          if (DAT_100b06e4 != 0) {
            local_c = local_18 * local_18 + local_28 * local_28;
            local_24 = *(int *)(PTR_DAT_100aaf68 + 0x1c) - *(int *)PTR_DAT_100aaf68;
            local_44 = *(int *)(PTR_DAT_100aaf68 + 0x24) - *(int *)(PTR_DAT_100aaf68 + 8);
            local_30 = local_44 * local_44 + local_24 * local_24;
            if (local_c < local_30) {
              local_6c = 1;
            }
            else {
              local_68 = 0;
            }
          }
          if (local_68 != 0) {
            if (local_6c == 0) {
              DAT_100b06e4 = 1;
              DAT_100a7b70 = 0;
              DAT_10160bc0 = *(undefined4 *)(PTR_DAT_100aaf68 + 0x1c);
              DAT_10160bc4 = *(undefined4 *)(PTR_DAT_100aaf68 + 0x20);
              DAT_10160bc8 = *(undefined4 *)(PTR_DAT_100aaf68 + 0x24);
              DAT_10160bcc = (int)*(short *)(PTR_DAT_100aaf68 + 0x28);
              DAT_10160bd0 = (int)*(short *)(PTR_DAT_100aaf68 + 0x2a);
              *(short *)(PTR_DAT_100aaf68 + 0x2a) = *(short *)(PTR_DAT_100aaf68 + 0x2a) + -10;
              if ((0xff < *(short *)(PTR_DAT_100aaf68 + 0x2a)) ||
                 (*(short *)(PTR_DAT_100aaf68 + 0x2a) < 0)) {
                *(undefined2 *)(PTR_DAT_100aaf68 + 0x2a) = 0x40;
              }
              DAT_10160bd4 = DAT_100aafac;
              *(undefined2 *)(PTR_DAT_100aaf68 + 0x28) = 0;
              DAT_100aafac = 0;
            }
            DAT_100b06e8 = local_3c;
            local_50[8] = 1;
            *(int *)(PTR_DAT_100aaf68 + 0x1c) = param_7;
            *(undefined4 *)(PTR_DAT_100aaf68 + 0x20) = param_8;
            *(int *)(PTR_DAT_100aaf68 + 0x24) = param_9;
            if (-1 < (int)local_38[1]) {
              FUN_10060864(local_38[1],*local_38,1);
            }
          }
        }
      }
      if (local_20 != 0) {
        FUN_1004aa97(param_1,local_1c,param_4,param_5,param_6,param_7,param_8,param_9);
      }
      if ((0 < (int)local_38[2]) &&
         ((local_38[3] == 0xffffffff || (iVar3 = FUN_10051f43(100), iVar3 < (int)local_38[3])))) {
        iVar3 = FUN_1001a620();
        if ((iVar3 == 0) && (local_2c == 0)) {
          local_a4 = 1;
        }
        else {
          local_a4 = 0;
        }
        FUN_100037f0(local_18,local_10,local_28,local_38[2],local_a4);
      }
    }
  }
  return;
}
