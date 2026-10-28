/* SPDX-License-Identifier: MIT */
/* mercsw 1004fafb */
/* mercsw 1004fafb: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
typedef struct FILE FILE;
extern undefined4 DAT_100b0710;
extern undefined4 DAT_100b084c;
extern char DAT_100b0854[];
extern undefined DAT_10123240[];
extern char s_mw2msn_cfg_100b0858[];
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
size_t __cdecl _fwrite(void * _Str, size_t _Size, size_t _Count, FILE * _File);
int __cdecl _fclose(FILE * _File);

bool __stdcall FUN_1004fafb(void)

{
  char cVar1;
  FILE *_File;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  int local_9e4 [4];
  uint local_9d4;
  uint auStack_9d0 [624];
  int *local_10;
  int local_c;
  int local_8;
  
  (void)local_9d4;
  local_8 = 0;
  local_10 = (int *)(DAT_10123240 + DAT_100b0710 * 0x3c0a);
  piVar6 = local_9e4;
  for (iVar2 = 0x275; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_9e4[0] = DAT_100b084c;
  local_9e4[2] = local_10[1];
  local_9e4[3] = local_10[2];
  local_9d4 = (uint)*(byte *)(local_10 + 0xe);
  local_c = 0;
  do {
    if (*local_10 <= local_c) {
      local_9e4[1] = local_8;
      _File = _fopen(s_mw2msn_cfg_100b0858,DAT_100b0854);
      if (_File != (FILE *)0x0) {
        _fwrite(local_9e4,0x9d4,1,_File);
        _fclose(_File);
      }
      return _File != (FILE *)0x0;
    }
    if (*(char *)(local_c * 0x13f + 0xae + (int)local_10) != '\0') {
      if (*(char *)(local_c * 0x13f + 0x3a + (int)local_10) == '\x05') {
        auStack_9d0[local_8 * 0xd] = 1;
      }
      else {
        auStack_9d0[local_8 * 0xd] = 0;
      }
      auStack_9d0[local_8 * 0xd + 1] = (uint)*(byte *)(local_c * 0x13f + 0x3b + (int)local_10);
      auStack_9d0[local_8 * 0xd + 2] = *(uint *)(local_c * 0x13f + 0xa1 + (int)local_10);
      auStack_9d0[local_8 * 0xd + 3] = *(uint *)(local_c * 0x13f + 0xa5 + (int)local_10);
      auStack_9d0[local_8 * 0xd + 4] = *(uint *)(local_c * 0x13f + 0xaf + (int)local_10);
      uVar3 = 0xffffffff;
      pcVar7 = (char *)(local_c * 0x13f + 0xe7 + (int)local_10);
      do {
        pcVar8 = pcVar7;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      puVar5 = (uint *)(pcVar8 + -uVar3);
      puVar9 = auStack_9d0 + local_8 * 0xd + 5;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar9 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar9 = (uint *)((int)puVar9 + 1);
      }
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}
