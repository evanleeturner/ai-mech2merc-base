/* SPDX-License-Identifier: MIT */
/* mw2shell 10016cf0 */
/* mw2shell 10016cf0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined PTR_DAT_100a6860[];
extern undefined PTR_s_SOBPFSDOBU_100a687c[];
int __cdecl _toupper(int _C);

void __stdcall FUN_10016cf0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  char *pcVar5;
  int iVar6;
  
  ppuVar4 = (undefined **)(PTR_DAT_100a6860);
  do {
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(*ppuVar4);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar6 = 0;
    if (0 < (int)(~uVar3 - 1)) {
      do {
        (*ppuVar4)[iVar6] = (*ppuVar4)[iVar6] ^ 7;
        pcVar5 = (char *)(*ppuVar4 + iVar6);
        iVar6 = iVar6 + 1;
        iVar2 = _toupper((int)*pcVar5);
        *pcVar5 = (char)iVar2;
      } while (iVar6 < (int)(~uVar3 - 1));
    }
    ppuVar4 = ppuVar4 + 1;
    if ((undefined **)((int)PTR_s_SOBPFSDOBU_100a687c + 3) < ppuVar4) {
      return;
    }
  } while( true );
}
