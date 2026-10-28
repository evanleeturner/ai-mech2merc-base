/* SPDX-License-Identifier: MIT */
/* mercsw 10045873 */
/* mercsw 10045873: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *HPALETTE;
typedef struct LOGPALETTE LOGPALETTE;
typedef struct PALETTEENTRY PALETTEENTRY;
extern void * DAT_100afbc0;
extern undefined4 DAT_100afbc4;
extern undefined DAT_100affe0[];
extern undefined DAT_100affe4[];
extern undefined DAT_100affe5[];
extern undefined DAT_100affe6[];
extern undefined DAT_100affe7[];
extern undefined DAT_100b9a30[];
extern undefined DAT_100b9a31[];
extern undefined DAT_100b9a32[];
extern undefined4 DAT_10160bf4;
void * __stdcall CreatePalette(const void *);
void * __stdcall SelectPalette(void *, void *, int);
UINT __stdcall SetPaletteEntries(void *, UINT, UINT, const void *);
UINT __stdcall RealizePalette(void *);

undefined4 __cdecl FUN_10045873(int param_1, int param_2, int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int local_8;
  
  if ((((param_3 == 0) || (param_1 < 0)) || (0xff < param_1)) ||
     ((param_2 < 1 || (0x100 - param_1 < param_2)))) {
    uVar2 = 0;
  }
  else {
    for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
      puVar3 = (undefined2 *)(local_8 * 3 + param_3);
      iVar1 = (local_8 + param_1) * 3;
      *(undefined2 *)(DAT_100b9a30 + iVar1) = *puVar3;
      DAT_100b9a32[iVar1] = *(undefined1 *)(puVar3 + 1);
    }
    for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
      DAT_100affe4[local_8 * 4] = DAT_100b9a30[local_8 * 3] * '\x04';
      DAT_100affe5[local_8 * 4] = DAT_100b9a31[local_8 * 3] * '\x04';
      DAT_100affe6[local_8 * 4] = DAT_100b9a32[local_8 * 3] * '\x04';
      DAT_100affe7[local_8 * 4] = 4;
    }
    if ((HPALETTE)(DAT_100afbc4) == (HPALETTE)0x0) {
      DAT_100afbc4 = (undefined4)(CreatePalette((LOGPALETTE *)DAT_100affe0));
      DAT_10160bf4 = (undefined4)(SelectPalette(DAT_100afbc0,(void *)(DAT_100afbc4),0));
    }
    else {
      SetPaletteEntries((void *)(DAT_100afbc4),0,0x100,(PALETTEENTRY *)DAT_100affe4);
    }
    RealizePalette(DAT_100afbc0);
    uVar2 = 1;
  }
  return uVar2;
}
