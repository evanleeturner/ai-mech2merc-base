/* SPDX-License-Identifier: MIT */
/* mw2shell 10053630 */
extern char *_strstr(const char *haystack, const char *needle);
extern void __cdecl FUN_10053590(void *param_1, char *param_2, int param_3);
extern char s__delta_1009fc68[];
extern char s__minus_1009fc80[];
extern char s__plus_1009fc88[];
extern char s__minus_1009fc70[];
extern char s__plus_1009fc78[];

void __cdecl FUN_10053630(void *param_1, char *param_2, unsigned int *param_3)
{
  char cVar1;
  unsigned short uVar2;
  char *pcVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char *pcVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  char *pcVar10;
  unsigned int local_b8[6];
  char local_a0[80];
  char local_50[80];

  puVar8 = param_3;
  puVar9 = local_b8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }

  uVar5 = 0xFFFFFFFF;
  do {
    pcVar3 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar3;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar3 - uVar5;

  pcVar7 = local_a0;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(unsigned int *)pcVar7 = *(unsigned int *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }

  pcVar3 = _strstr(local_a0, s__delta_1009fc68);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }

  uVar5 = 0xFFFFFFFF;
  pcVar3 = local_a0;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 - uVar5;

  pcVar7 = local_50;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(unsigned int *)pcVar7 = *(unsigned int *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar7 = pcVar7 + 1;
  }

  if ((param_3[2] & 0x80000000) == 0) {
    iVar4 = -1;
    pcVar3 = local_a0;
    do {
      pcVar7 = pcVar3;
      if (iVar4 == 0) break;
      iVar4 = iVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    *(unsigned int *)(pcVar7 - 1) = *(unsigned int *)s__minus_1009fc80;
    *(unsigned short *)(pcVar7 + 3) = *(unsigned short *)(s__minus_1009fc80 + 4);
    pcVar7[5] = s__minus_1009fc80[6];
    pcVar7 = s__plus_1009fc88;
    pcVar3 = local_50;
  } else {
    iVar4 = -1;
    pcVar3 = local_50;
    do {
      pcVar7 = pcVar3;
      if (iVar4 == 0) break;
      iVar4 = iVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    *(unsigned int *)(pcVar7 - 1) = *(unsigned int *)s__minus_1009fc70;
    *(unsigned short *)(pcVar7 + 3) = *(unsigned short *)(s__minus_1009fc70 + 4);
    pcVar7[5] = s__minus_1009fc70[6];
    pcVar7 = s__plus_1009fc78;
    pcVar3 = local_a0;
  }

  iVar4 = -1;
  do {
    pcVar10 = pcVar3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar2 = *(unsigned short *)(pcVar7 + 4);
  *(unsigned int *)(pcVar10 - 1) = *(unsigned int *)pcVar7;
  *(unsigned short *)(pcVar10 + 3) = uVar2;

  FUN_10053590(param_1, local_a0, (int)param_3);
  param_3[4] = param_3[5];
  param_3[2] = param_3[3];
  FUN_10053590(param_1, local_50, (int)param_3);

  puVar8 = local_b8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 - 1) {
    *param_3 = *puVar8;
    puVar8 = puVar8 + 1;
    param_3 = param_3 + 1;
  }
  return;
}
