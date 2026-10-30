/* SPDX-License-Identifier: MIT */
/* mercsw 1001028b */
extern unsigned int DAT_100a9de4;
extern char DAT_100a9de8;
extern char DAT_100c6088[];
extern unsigned short DAT_100a9dec;
extern char *__cdecl FUN_10010010(char *param_1, int param_2);
extern unsigned int __stdcall _FILE_read_8(char *param_1, int param_2);

unsigned int __cdecl FUN_1001028b(char *param_1)
{
  char local_204[256];
  char local_104[256];
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pbVar3;
  char *pbVar10;
  unsigned int uVar4;

  uVar5 = 0xFFFFFFFF;
  do {
    pcVar8 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = param_1 + 1;
    if (*param_1 == '\0') break;
    param_1 = pcVar8;
  } while (1);
  uVar5 = ~uVar5;
  
  pbVar3 = param_1 - uVar5;
  pbVar10 = local_104;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(unsigned int *)pbVar10 = *(unsigned int *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar10 = pbVar10 + 1;
  }
  
  iVar7 = -1;
  pbVar3 = local_104;
  do {
    pbVar10 = pbVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 - 1;
    pbVar10 = pbVar3 + 1;
    if (*pbVar3 == '\0') break;
    pbVar3 = pbVar10;
  } while (1);
  
  *(unsigned int *)(pbVar10 - 1) = DAT_100a9de4;
  pbVar10[3] = DAT_100a9de8;
  
  pbVar3 = FUN_10010010(local_104, 0);
  if (pbVar3 == 0) {
    uVar4 = 0;
  } else {
    uVar5 = 0xFFFFFFFF;
    pcVar8 = (char *)&DAT_100c6088;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      if (*pcVar8 == '\0') break;
      pcVar8 = pcVar9;
    } while (1);
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 - uVar5;
    
    pcVar9 = local_204;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(unsigned int *)pcVar9 = *(unsigned int *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    
    iVar7 = -1;
    pcVar8 = local_204;
    do {
      pcVar9 = pcVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 - 1;
      pcVar9 = pcVar8 + 1;
      if (*pcVar8 == '\0') break;
      pcVar8 = pcVar9;
    } while (1);
    
    *(unsigned short *)(pcVar9 - 1) = DAT_100a9dec;
    
    uVar5 = 0xFFFFFFFF;
    pbVar3 = local_104;
    do {
      pbVar10 = pbVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar10 = pbVar3 + 1;
      if (*pbVar3 == '\0') break;
      pbVar3 = pbVar10;
    } while (1);
    uVar5 = ~uVar5;
    
    iVar7 = -1;
    pcVar8 = local_204;
    do {
      pcVar9 = pcVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 - 1;
      pcVar9 = pcVar8 + 1;
      if (*pcVar8 == '\0') break;
      pcVar8 = pcVar9;
    } while (1);
    
    pbVar3 = local_104;
    pbVar10 = pcVar9 - 1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(unsigned int *)pbVar10 = *(unsigned int *)pbVar3;
      pbVar3 = pbVar3 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar10 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar10 = pbVar10 + 1;
    }
    
    uVar4 = _FILE_read_8(local_204, 0);
  }
  return uVar4;
}
