/* SPDX-License-Identifier: MIT */
/* mercsw 10039de0 */
extern int DAT_100b3904;
extern int DAT_100aefa0;
extern int DAT_100aefa4;
extern unsigned char DAT_10160fe0[];
extern unsigned char *PTR_DAT_100aaf68;

extern int __cdecl FUN_10051f43(int param_1);
extern void __cdecl FUN_1003aa95(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
extern void __cdecl FUN_1003b049(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __stdcall FUN_10039de0(void)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;

  if ((DAT_100b3904 != 0) && (DAT_100aefa0 != 0)) {
    for (local_1c = 0; local_1c < 9; local_1c = local_1c + 1) {
      iVar2 = local_1c * 0x80c;
      piVar1 = (int *)(DAT_10160fe0 + iVar2);
      if (*piVar1 != 0) {
        *(float *)(DAT_10160fe0 + iVar2 + 0xf4) =
             (float)DAT_100b3904 * *(float *)(DAT_10160fe0 + iVar2 + 0xf8) +
             *(float *)(DAT_10160fe0 + iVar2 + 0xf4);
        iVar3 = (int)*(float *)(DAT_10160fe0 + iVar2 + 0xf4);
        if (iVar3 != 0) {
          *(float *)(DAT_10160fe0 + iVar2 + 0xf4) =
               *(float *)(DAT_10160fe0 + iVar2 + 0xf4) - (float)iVar3;
          if (DAT_100aefa4 == 1) {
            for (local_20 = 0; local_20 < iVar3; local_20 = local_20 + 1) {
              local_10 = *(int *)(DAT_10160fe0 + iVar2 + 0xe4);
              if (local_10 != 0) {
                iVar4 = FUN_10051f43(local_10);
                local_10 = (int)((unsigned int)iVar4 - (unsigned int)(local_10 >> 1));
              }
              local_14 = *(int *)(DAT_10160fe0 + iVar2 + 0xe8);
              if (local_14 != 0) {
                iVar4 = FUN_10051f43(local_14);
                local_14 = (int)((unsigned int)iVar4 - (unsigned int)(local_14 >> 1));
              }
              local_18 = *(int *)(DAT_10160fe0 + iVar2 + 0xec);
              if (local_18 != 0) {
                iVar4 = FUN_10051f43(local_18);
                local_18 = (int)((unsigned int)iVar4 - (unsigned int)(local_18 >> 1));
              }
              FUN_1003aa95((int)((unsigned int)*(int *)(DAT_10160fe0 + iVar2 + 0xc) +
                                 (unsigned int)*(int *)PTR_DAT_100aaf68 + (unsigned int)local_10),
                           (int)((unsigned int)*(int *)(DAT_10160fe0 + iVar2 + 0x10) +
                                 (unsigned int)local_14),
                           (int)((unsigned int)*(int *)(DAT_10160fe0 + iVar2 + 0x14) +
                                 (unsigned int)*(int *)(PTR_DAT_100aaf68 + 8) +
                                 (unsigned int)local_18),
                           *(int *)(DAT_10160fe0 + iVar2 + 0xac),
                           *(int *)(DAT_10160fe0 + iVar2 + 0xb0),
                           *(int *)(DAT_10160fe0 + iVar2 + 0xac),
                           (int)piVar1);
            }
          }
          else if (DAT_100aefa4 == 2) {
            for (local_20 = 0; local_20 < iVar3; local_20 = local_20 + 1) {
              local_10 = *(int *)(DAT_10160fe0 + iVar2 + 0xe4);
              if (local_10 != 0) {
                iVar4 = FUN_10051f43(local_10);
                local_10 = (int)((unsigned int)iVar4 - (unsigned int)(local_10 >> 1));
              }
              local_14 = *(int *)(DAT_10160fe0 + iVar2 + 0xe8);
              if (local_14 != 0) {
                iVar4 = FUN_10051f43(local_14);
                local_14 = (int)((unsigned int)iVar4 - (unsigned int)(local_14 >> 1));
              }
              local_18 = *(int *)(DAT_10160fe0 + iVar2 + 0xec);
              if (local_18 != 0) {
                iVar4 = FUN_10051f43(local_18);
                local_18 = (int)((unsigned int)iVar4 - (unsigned int)(local_18 >> 1));
              }
              FUN_1003b049((int)((unsigned int)*(int *)(DAT_10160fe0 + iVar2 + 0xc) +
                                 (unsigned int)*(int *)PTR_DAT_100aaf68 + (unsigned int)local_10),
                           (int)((unsigned int)*(int *)(DAT_10160fe0 + iVar2 + 0x10) +
                                 (unsigned int)local_14),
                           (int)((unsigned int)*(int *)(DAT_10160fe0 + iVar2 + 0x14) +
                                 (unsigned int)*(int *)(PTR_DAT_100aaf68 + 8) +
                                 (unsigned int)local_18),
                           *(int *)(DAT_10160fe0 + iVar2 + 0xac),
                           *(int *)(DAT_10160fe0 + iVar2 + 0xb0),
                           *(int *)(DAT_10160fe0 + iVar2 + 0xac),
                           (int)piVar1);
            }
          }
        }
      }
    }
  }
  return;
}
