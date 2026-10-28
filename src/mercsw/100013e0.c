/* SPDX-License-Identifier: MIT */
/* mercsw 100013e0 */
/* mercsw 100013e0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_10123130[];
extern undefined4 DAT_10123230;
extern undefined DAT_10123240[];
extern undefined DAT_10123244[];
extern undefined DAT_10123248[];
extern undefined DAT_1012324c[];
extern undefined DAT_10123250[];
extern undefined DAT_10123254[];
extern undefined DAT_10123258[];
extern undefined DAT_10123268[];
extern undefined DAT_10123279[];
extern undefined DAT_1012327a[];
extern undefined DAT_1012327b[];
extern undefined DAT_1012327c[];
extern undefined DAT_10123280[];
extern undefined DAT_10123281[];
extern undefined DAT_10123285[];
extern undefined DAT_10123289[];
extern undefined DAT_101232e1[];
extern undefined DAT_101232e5[];
extern undefined DAT_101232e9[];
extern undefined DAT_101232ee[];
extern undefined DAT_101232ef[];
extern undefined DAT_101232f3[];
extern undefined DAT_101232f7[];
extern undefined DAT_101232fb[];
extern undefined DAT_101232ff[];
extern undefined DAT_10123303[];
extern undefined DAT_10123313[];
extern undefined DAT_10123323[];
extern undefined DAT_10123325[];
extern undefined DAT_10123327[];
extern undefined DAT_10123368[];
extern undefined DAT_10123369[];
extern undefined DAT_101600ec[];
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
int __cdecl FUN_1007b9d2(uint param_1, char * param_2);

void __cdecl FUN_100013e0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  uVar2 = (*(int *)(param_1 + 4) - 0x26U) / 0x97;
  if (*(int *)(param_1 + 0x26) != 0x10) {
    FUN_100108a0(0x4a,(char *)0x0);
  }
  DAT_10123279[*(int *)(param_1 + 8) * 0x3c0a] = DAT_101600ec[*(int *)(param_1 + 8) * 0x3c];
  *(undefined4 *)(DAT_1012324c + *(int *)(param_1 + 8) * 0x3c0a) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(DAT_10123244 + *(int *)(param_1 + 8) * 0x3c0a) = 0xffffffff;
  *(undefined4 *)(DAT_10123248 + *(int *)(param_1 + 8) * 0x3c0a) = 0xffffffff;
  iVar3 = FUN_1007b9d2(10,(char *)(param_1 + 0x12));
  *(int *)(DAT_10123250 + *(int *)(param_1 + 8) * 0x3c0a) = iVar3;
  uVar4 = 0xffffffff;
  pcVar6 = (char *)(param_1 + 0x12);
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(DAT_10123258 + *(int *)(param_1 + 8) * 0x3c0a);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  iVar3 = FUN_1007b9d2(10,(char *)(param_1 + 0x1d));
  *(int *)(DAT_10123254 + *(int *)(param_1 + 8) * 0x3c0a) = iVar3;
  uVar4 = 0xffffffff;
  pcVar6 = (char *)(param_1 + 0x1d);
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(DAT_10123268 + *(int *)(param_1 + 8) * 0x3c0a);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_c = 0;
  do {
    if ((int)uVar2 <= local_c) {
      *(undefined4 *)(DAT_10123130 + *(int *)(param_1 + 8) * 4) = 0;
      *(uint *)(DAT_10123240 + *(int *)(param_1 + 8) * 0x3c0a) = uVar2;
      if ((int)DAT_10123230 < *(int *)(param_1 + 8) + 1) {
        DAT_10123230 = *(int *)(param_1 + 8) + 1;
      }
      return;
    }
    DAT_1012327b[*(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f] =
         *(undefined1 *)(local_c * 0x97 + 0x54 + param_1);
    *(undefined4 *)(DAT_1012327c + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
         *(undefined4 *)(local_c * 0x97 + 0x26 + param_1);
    *(undefined4 *)(DAT_101232e9 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
         *(undefined4 *)(local_c * 0x97 + 0x50 + param_1);
    *(undefined4 *)(DAT_101232e1 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = 0xffffffff;
    *(undefined4 *)(DAT_101232e5 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = 0xffffffff;
    *(undefined2 *)(DAT_10123323 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
         *(undefined2 *)(local_c * 0x97 + 0x79 + param_1);
    *(undefined2 *)(DAT_10123325 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
         *(undefined2 *)(local_c * 0x97 + 0x7b + param_1);
    if (*(char *)(local_c * 0x97 + 0x2a + param_1) == 'V') {
      DAT_101232ee[*(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f] = 1;
    }
    else {
      DAT_101232ee[*(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f] = 0;
    }
    if (*(char *)(local_c * 0x97 + 0x55 + param_1) == 'M') {
      *(undefined4 *)(DAT_101232ef + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = 1;
    }
    else {
      *(undefined4 *)(DAT_101232ef + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = 0;
    }
    *(uint *)(DAT_101232f3 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
         (uint)*(byte *)(local_c * 0x97 + 0x56 + param_1);
    *(uint *)(DAT_101232f7 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
         (uint)*(byte *)(local_c * 0x97 + 0x57 + param_1);
    iVar3 = FUN_1007b9d2(10,(char *)(local_c * 0x97 + param_1 + 0x5a));
    *(int *)(DAT_101232fb + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = iVar3;
    uVar4 = 0xffffffff;
    pcVar6 = (char *)(local_c * 0x97 + 0x5a + param_1);
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)(DAT_10123303 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar3 = FUN_1007b9d2(10,(char *)(local_c * 0x97 + param_1 + 0x65));
    *(int *)(DAT_101232ff + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = iVar3;
    uVar4 = 0xffffffff;
    pcVar6 = (char *)(local_c * 0x97 + 0x65 + param_1);
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)(DAT_10123313 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = (char *)(local_c * 0x97 + 0x7d + param_1);
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    pcVar7 = (char *)(DAT_10123327 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    DAT_10123280[*(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f] =
         *(undefined1 *)(local_c * 0x97 + 0x2c + param_1);
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      switch(*(undefined1 *)(local_c * 0x97 + local_10 * 4 + 0x30 + param_1)) {
      case 0x43:
        local_14 = 1;
        break;
      default:
        local_14 = 0;
        break;
      case 0x46:
        local_14 = 3;
        break;
      case 0x49:
        local_14 = 0;
        break;
      case 0x53:
        local_14 = 2;
      }
      *(undefined4 *)
       (DAT_10123281 + local_10 * 0xc + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
           local_14;
      *(uint *)(DAT_10123285 + local_10 * 0xc + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
           (uint)*(byte *)(local_c * 0x97 + local_10 * 4 + 0x31 + param_1);
      *(uint *)(DAT_10123289 + local_10 * 0xc + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) =
           (uint)*(byte *)(local_c * 0x97 + local_10 * 4 + 0x32 + param_1);
    }
    DAT_1012327a[*(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f] = 0;
    DAT_10123368[*(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f] = 0;
    *(undefined2 *)(DAT_10123369 + *(int *)(param_1 + 8) * 0x3c0a + local_c * 0x13f) = 0x800;
    local_c = local_c + 1;
  } while( true );
}
