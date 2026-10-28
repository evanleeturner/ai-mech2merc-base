/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e1a0 */
/* mw2shell 1000e1a0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *HPALETTE;
typedef struct LOGPALETTE LOGPALETTE;
typedef struct PALETTEENTRY PALETTEENTRY;
extern void * DAT_1008d150;
extern undefined4 DAT_1008d154;
extern undefined DAT_1008d158[];
extern undefined DAT_1008d159[];
extern undefined DAT_1008d15a[];
extern undefined DAT_1008d570[];
extern undefined DAT_1008d574[];
extern undefined DAT_1008d575[];
extern undefined DAT_1008d576[];
extern undefined DAT_1008d577[];
extern char DAT_100a7260[];
extern undefined DAT_100a7560[];
extern undefined4 DAT_100d1548;
extern undefined4 DAT_100d154c;
void * __stdcall CreatePalette(const void *);
void * __stdcall SelectPalette(void *, void *, int);
UINT __stdcall SetPaletteEntries(void *, UINT, UINT, const void *);
UINT __stdcall RealizePalette(void *);

undefined4 __cdecl FUN_1000e1a0(int param_1, int param_2, undefined2 * param_3, int param_4)

{
  char cVar1;
  undefined2 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if ((((param_3 != (undefined2 *)0x0) && (-1 < param_1)) && (param_1 < 0x100)) &&
     ((0 < param_2 && (param_2 <= 0x100 - param_1)))) {
    if (0 < param_2) {
      puVar2 = (undefined2 *)(DAT_100a7260 + param_1 * 3);
      do {
        *puVar2 = *param_3;
        param_2 = param_2 + -1;
        *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_3 + 1);
        puVar2 = (undefined2 *)((int)puVar2 + 3);
        param_3 = (undefined2 *)((int)param_3 + 3);
      } while (param_2 != 0);
    }
    if (param_4 == 0) {
      if (DAT_100d1548 < 0x100 - DAT_100d1548) {
        iVar6 = DAT_100d1548 * -2 + 0x100;
        pcVar4 = DAT_100a7260 + DAT_100d1548 * 3;
        iVar5 = DAT_100d1548 * 4;
        do {
          cVar1 = *pcVar4;
          DAT_1008d15a[iVar5] = (int)((unsigned int)(cVar1) << (2));
          DAT_1008d574[iVar5] = (int)((unsigned int)(cVar1) << (2));
          cVar1 = pcVar4[1];
          DAT_1008d159[iVar5] = (int)((unsigned int)(cVar1) << (2));
          DAT_1008d575[iVar5] = (int)((unsigned int)(cVar1) << (2));
          cVar1 = pcVar4[2];
          iVar6 = iVar6 + -1;
          DAT_1008d158[iVar5] = (int)((unsigned int)(cVar1) << (2));
          DAT_1008d576[iVar5] = (int)((unsigned int)(cVar1) << (2));
          DAT_1008d577[iVar5] = 4;
          pcVar4 = pcVar4 + 3;
          iVar5 = iVar5 + 4;
        } while (iVar6 != 0);
      }
    }
    else {
      iVar5 = 0;
      pcVar4 = DAT_100a7260;
      do {
        cVar1 = *pcVar4;
        pcVar3 = pcVar4 + 3;
        DAT_1008d15a[iVar5] = (int)((unsigned int)(cVar1) << (2));
        DAT_1008d574[iVar5] = (int)((unsigned int)(cVar1) << (2));
        cVar1 = pcVar4[1];
        DAT_1008d159[iVar5] = (int)((unsigned int)(cVar1) << (2));
        DAT_1008d575[iVar5] = (int)((unsigned int)(cVar1) << (2));
        cVar1 = pcVar4[2];
        DAT_1008d158[iVar5] = (int)((unsigned int)(cVar1) << (2));
        DAT_1008d576[iVar5] = (int)((unsigned int)(cVar1) << (2));
        DAT_1008d577[iVar5] = 4;
        iVar5 = iVar5 + 4;
        pcVar4 = pcVar3;
      } while (pcVar3 < (char *)(DAT_100a7560));
    }
    if ((HPALETTE)(DAT_1008d154) == (HPALETTE)0x0) {
      DAT_1008d154 = (undefined4)(CreatePalette((LOGPALETTE *)DAT_1008d570));
      DAT_100d154c = (undefined4)(SelectPalette(DAT_1008d150,(void *)(DAT_1008d154),0));
    }
    else {
      SetPaletteEntries((void *)(DAT_1008d154),0,0x100,(PALETTEENTRY *)DAT_1008d574);
    }
    RealizePalette(DAT_1008d150);
    return 1;
  }
  return 0;
}
