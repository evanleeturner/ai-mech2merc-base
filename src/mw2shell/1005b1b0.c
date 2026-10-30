/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b1b0 */
/* mw2shell 1005b1b0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef void *DLGPROC;
typedef const void *LPCSTR;
extern undefined LAB_1005b280[];
extern undefined4 DAT_100c3368;
extern undefined4 DAT_100c336c;
extern undefined4 DAT_100c3370;
extern char DAT_100c3680[];
extern HINSTANCE DAT_100d08dc;
extern HWND DAT_100d08e8;
int __stdcall DialogBoxParamA(HINSTANCE, const void *, HWND, void *, LONG);

void __cdecl ShowMessageDialog(char * param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = DAT_100c3680;
  iVar4 = 0;
  DAT_100c3370 = 0;
  DAT_100c336c = 0;
  DAT_100c3368 = 0;
  if (*param_1 != '\0') {
    puVar3 = &DAT_100c3368;
    do {
      if (*param_1 == '#') break;
      *puVar3 = (undefined4)(pcVar5);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = *param_1;
        if (cVar1 == '|') goto LAB_1005b208;
        if (cVar1 == '#') break;
        *pcVar5 = cVar1;
        param_1 = param_1 + 1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *param_1;
      }
      if (*param_1 == '|') {
LAB_1005b208:
        param_1 = param_1 + 1;
      }
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + 1;
    } while (*param_1 != '\0');
  }
  uVar2 = DAT_100c3368;
  if (iVar4 == 1) {
    DAT_100c3368 = 0;
    DAT_100c336c = uVar2;
  }
  iVar4 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    for (; (cVar1 != '\0' && (*param_1 != '|')); param_1 = param_1 + 1) {
      cVar1 = param_1[1];
    }
    iVar4 = iVar4 + 1;
    cVar1 = *param_1;
  }
  DialogBoxParamA(DAT_100d08dc,(LPCSTR)(0x81 - (uint)(iVar4 == 2)),DAT_100d08e8,
                  (DLGPROC)LAB_1005b280,0);
  return;
}
