/* SPDX-License-Identifier: MIT */
/* mercsw 1004b4ef */
/* mercsw 1004b4ef: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100a7b70;
extern undefined DAT_100a9670[];
extern undefined DAT_100a9688[];
extern undefined DAT_100a9690[];
extern undefined DAT_100a9694[];
extern undefined DAT_100a9698[];
extern undefined4 DAT_100aafac;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100b06e4;
extern int DAT_100b06e8;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_10160bc0;
extern undefined4 DAT_10160bc4;
extern undefined4 DAT_10160bc8;
extern undefined4 DAT_10160bcc;
extern undefined4 DAT_10160bd0;
extern undefined4 DAT_10160bd4;
extern undefined DAT_101f26f0[];
extern undefined DAT_101f26f8[];
extern undefined DAT_101f26fc[];
extern undefined DAT_101f2700[];
extern undefined DAT_101f2704[];
extern undefined DAT_101f2708[];
extern undefined DAT_101f270c[];
extern undefined DAT_101f2710[];
extern undefined DAT_101f2714[];
extern undefined DAT_101f2718[];
extern undefined4 PTR_DAT_100aaf68;
undefined __stdcall FUN_1004c273(void);
undefined __stdcall FUN_1004bfb6(void);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_1004b839(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl FUN_1004b9f3(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
undefined __cdecl FUN_1007ca5c(int param_1, int param_2, int param_3, int param_4, int param_5);
undefined4 __stdcall FUN_10060c34(void);
undefined4 __cdecl FUN_1002fc2b(undefined4 * param_1);
undefined __cdecl FUN_1002fcce(int * param_1);
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1005f7ad(short param_1, undefined2 param_2);
undefined __cdecl FUN_1005f81d(short param_1, ushort param_2);
undefined __cdecl FUN_10049a38(int param_1);

void __stdcall FUN_1004b4ef(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int local_28;
  int local_10;
  
  FUN_1004c273();
  if (*(char *)(DAT_100adf34 + 4) != '\0') {
    FUN_1004bfb6();
  }
  for (local_10 = 0; local_10 < 0xff; local_10 = local_10 + 1) {
    iVar4 = local_10 * 0x2c;
    piVar7 = (int *)(DAT_101f26f0 + iVar4);
    if (*(int *)(DAT_101f2708 + iVar4) != 0) {
      iVar8 = *(int *)(DAT_101f2714 + iVar4) * 0x2c;
      if ((DAT_100a9698[iVar8] & 1) != 0) {
        FUN_1002f322(*piVar7,(undefined4 *)(DAT_101f26f8 + iVar4),
                     (undefined4 *)(DAT_101f26fc + iVar4),(undefined4 *)(DAT_101f2700 + iVar4));
      }
      if (*(int *)(DAT_100a9688 + iVar8) != 0) {
        iVar1 = *(int *)(DAT_101f26f8 + iVar4);
        iVar2 = *(int *)(DAT_101f26fc + iVar4);
        iVar3 = *(int *)(DAT_101f2700 + iVar4);
        if (*(int *)(DAT_101f2714 + iVar4) == 0x23) {
          local_28 = (*(int *)(DAT_100a9670 + iVar8) - *(int *)(DAT_101f2704 + iVar4)) * 0x18;
        }
        else {
          local_28 = *(int *)(*(int *)(*piVar7 + 0x6c) + 0x40);
        }
        if (((*(char *)(DAT_100adf34 + 2) != '\0') || (*(int *)(DAT_101f2714 + iVar4) == 0x16)) ||
           (*(int *)(DAT_101f2714 + iVar4) == 0x23)) {
          FUN_1004b839(*(int *)(DAT_101f2718 + iVar4),iVar1,iVar2,iVar3,local_28,
                       *(int *)(DAT_100a9690 + iVar8),*(int *)(DAT_100a9694 + iVar8));
        }
        FUN_1004b9f3(*(undefined4 *)(DAT_101f2718 + iVar4),iVar1,iVar2,iVar3,local_28,
                     *(int *)(DAT_100a9690 + iVar8));
        FUN_1007ca5c(iVar1,iVar2,iVar3,local_28,*(int *)(DAT_100a9690 + iVar8));
      }
      *(int *)(DAT_101f2704 + iVar4) = *(int *)(DAT_101f2704 + iVar4) - DAT_100b3904;
      if (*(int *)(DAT_101f2704 + iVar4) < 1) {
        bVar5 = true;
        bVar6 = false;
        if (((*(int *)(DAT_101f2710 + iVar4) != 0) && (DAT_100b06e4 != 0)) &&
           (local_10 == DAT_100b06e8)) {
          iVar8 = FUN_10060c34();
          if (iVar8 == 0) {
            bVar6 = true;
          }
          else {
            bVar5 = false;
          }
        }
        if (bVar5) {
          if (bVar6) {
            DAT_100a7b70 = 1;
            *(undefined4 *)(PTR_DAT_100aaf68 + 0x1c) = DAT_10160bc0;
            *(undefined4 *)(PTR_DAT_100aaf68 + 0x20) = DAT_10160bc4;
            *(undefined4 *)(PTR_DAT_100aaf68 + 0x24) = DAT_10160bc8;
            *(short *)(PTR_DAT_100aaf68 + 0x28) = (short)DAT_10160bcc;
            *(short *)(PTR_DAT_100aaf68 + 0x2a) = (short)DAT_10160bd0;
            DAT_100aafac = DAT_10160bd4;
            *(undefined4 *)(DAT_101f2710 + iVar4) = 0;
            DAT_100b06e4 = 0;
            DAT_100b06e8 = -1;
          }
          if (*piVar7 != 0) {
            iVar8 = FUN_1002fc2b((undefined4 *)*piVar7);
            if (iVar8 != 0) {
              FUN_1002fcce((int *)*piVar7);
            }
            FUN_1002f727(*piVar7);
          }
          if (0 < *(int *)(DAT_101f270c + iVar4)) {
            FUN_1005f7ad((short)*(undefined4 *)(DAT_101f270c + iVar4),0);
            FUN_1005f81d((short)*(undefined4 *)(DAT_101f270c + iVar4),0);
          }
          FUN_10049a38(local_10);
        }
      }
    }
  }
  return;
}
