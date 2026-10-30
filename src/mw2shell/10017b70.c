/* SPDX-License-Identifier: MIT */
/* mw2shell 10017b70 */
/* mw2shell 10017b70: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100a50f4;
extern undefined4 DAT_100abbbc;
extern undefined4 PTR_DAT_100ab9b0;
extern char s_Error___unable_to_generate_valid_1008f458[];
extern char s_WASM_FM____Name__CODE_REL_A____R_1008f408[];
char * __cdecl _strchr(char * _Str, int _Val);
int __cdecl __isctype(int _C, int _Type);
int __cdecl FID_conflict__wprintf(char * _Format, ...);

undefined4 __stdcall GenerateBwdChunkRevNumber(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_8;
  int local_4;
  
  bVar2 = false;
  iVar6 = 4;
  local_8 = 0;
  pcVar3 = s_WASM_FM____Name__CODE_REL_A____R_1008f408;
  do {
    pcVar4 = _strchr(pcVar3,0x24);
    if (pcVar4 == (char *)0x0) goto LAB_10017c66;
    pcVar3 = pcVar4 + 1;
  } while (pcVar4[1] != 'R');
  if ((pcVar3 != (char *)0x0) && (pcVar3 = _strchr(pcVar3,0x3a), pcVar3 != (char *)0x0)) {
    do {
      pcVar4 = pcVar3;
      if (DAT_100abbbc < 2) {
        uVar5 = *(ushort *)(PTR_DAT_100ab9b0 + pcVar4[1] * 2) & 8;
      }
      else {
        uVar5 = __isctype((int)pcVar4[1],8);
      }
      pcVar3 = pcVar4 + 1;
    } while (uVar5 != 0);
    pcVar4 = pcVar4 + 4;
    pcVar3 = (char *)((int)&local_8 + 3);
    local_4 = 4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + -1;
      if (DAT_100abbbc < 2) {
        uVar5 = *(ushort *)(PTR_DAT_100ab9b0 + cVar1 * 2) & 4;
      }
      else {
        uVar5 = __isctype((int)cVar1,4);
      }
      if ((uVar5 != 0) || (cVar1 == '.')) {
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + -1;
        iVar6 = iVar6 + -1;
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (0 < iVar6) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pcVar3 = ' ';
        pcVar3 = pcVar3 + -1;
      }
    }
    bVar2 = true;
    local_4 = 0;
  }
LAB_10017c66:
  if (!bVar2) {
    FID_conflict__wprintf(s_Error___unable_to_generate_valid_1008f458);
    DAT_100a50f4 = 1;
  }
  return local_8;
}
