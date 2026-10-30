/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e330 */
/* mw2shell 1000e330: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *LPPALETTEENTRY;
extern void * DAT_1008d150;
extern undefined DAT_1008d158[];
extern undefined DAT_1008d159[];
extern undefined DAT_1008d15a[];
extern undefined DAT_1008d574[];
extern undefined DAT_1008d575[];
extern undefined DAT_1008d576[];
extern undefined DAT_1008d577[];
extern undefined DAT_1008d974[];
extern undefined4 DAT_100d1548;
int __stdcall GetDeviceCaps(void *, int);
UINT __stdcall GetSystemPaletteEntries(void *, UINT, UINT, void *);

void __stdcall CaptureSystemPaletteStaticColors(void)

{
  UINT UVar1;
  int iVar2;
  UINT UVar3;
  int iVar4;
  
  iVar2 = GetDeviceCaps(DAT_1008d150,0xc);
  if (iVar2 == 8) {
    iVar2 = GetDeviceCaps(DAT_1008d150,0x18);
    DAT_100d1548 = iVar2 >> 1;
    GetSystemPaletteEntries(DAT_1008d150,0,DAT_100d1548,(LPPALETTEENTRY)DAT_1008d574);
    GetSystemPaletteEntries
              (DAT_1008d150,0x100 - DAT_100d1548,DAT_100d1548,
               (LPPALETTEENTRY)(DAT_1008d974 + DAT_100d1548 * -4));
    UVar1 = DAT_100d1548;
    if (0 < (int)DAT_100d1548) {
      UVar3 = DAT_100d1548;
      iVar2 = 0;
      do {
        UVar3 = UVar3 - 1;
        DAT_1008d15a[iVar2] = DAT_1008d574[iVar2];
        DAT_1008d159[iVar2] = DAT_1008d575[iVar2];
        DAT_1008d158[iVar2] = DAT_1008d576[iVar2];
        DAT_1008d577[iVar2] = 0;
        iVar2 = iVar2 + 4;
      } while (UVar3 != 0);
    }
    if ((int)(0x100 - UVar1) < 0x100) {
      iVar2 = (0x100 - UVar1) * 4;
      do {
        DAT_1008d15a[iVar2] = DAT_1008d574[iVar2];
        iVar4 = iVar2 + 4;
        DAT_1008d159[iVar2] = DAT_1008d575[iVar2];
        DAT_1008d158[iVar2] = DAT_1008d576[iVar2];
        DAT_1008d577[iVar2] = 0;
        iVar2 = iVar4;
      } while (iVar4 < 0x400);
    }
  }
  return;
}
