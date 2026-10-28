/* SPDX-License-Identifier: MIT */
/* mercsw 10086a65 */
/* mercsw 10086a65: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100bf7d0;
extern undefined DAT_100c8908[];
extern undefined DAT_100c8920[];
extern undefined DAT_100c8cf8[];
extern undefined DAT_100c8dc0[];
extern undefined4 PTR_PTR_100bf7d8[];
extern char s_Too_many_input_devices_specified_100c238c[];
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
undefined __cdecl FUN_10088ec7(int param_1, undefined4 param_2, char * param_3);

int __cdecl FUN_10086a65(char * param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_10;
  int local_c;
  
  for (local_c = 0; iVar2 = DAT_100bf7d0, local_c < 3; local_c = local_c + 1) {
    if (((undefined *)(PTR_PTR_100bf7d8[local_c]) != (undefined *)0x0) &&
       (iVar2 = ((int (*)(void))((void (*)(void))((**(code **)PTR_PTR_100bf7d8[local_c]))))(), iVar2 != 0)) {
      for (local_10 = 0; iVar4 = DAT_100bf7d0, local_10 < iVar2; local_10 = local_10 + 1) {
        if (4 < DAT_100bf7d0) {
          FUN_100108a0(0x11,s_Too_many_input_devices_specified_100c238c);
          return -1;
        }
        iVar3 = ((int (*)(int, undefined *))((void (*)(void))((**(code **)(PTR_PTR_100bf7d8[local_c] + 4)))))
                          (local_10,DAT_100c8920 + DAT_100bf7d0 * 0x74);
        if (iVar3 == 0) {
          iVar3 = __strcmpi((char *)(DAT_100c8920 + iVar4 * 0x74),param_1);
          if (iVar3 == 0) {
            uVar5 = 0xffffffff;
            goto code_r0x10086b60;
          }
          ((void (*)(undefined *))((**(code **)(PTR_PTR_100bf7d8[local_c] + 0xc))))(DAT_100c8920 + iVar4 * 0x74);
        }
      }
    }
  }
  DAT_100bf7d0 = DAT_100bf7d0 + 1;
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = (char *)(DAT_100c8cf8 + iVar2 * 0x28);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(DAT_100c8908 + iVar2 * 4) = 0;
  FUN_10088ec7(0x6e,0,param_1);
  return -1;
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x10086b60:
    pcVar7 = param_1;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = (char *)(DAT_100c8cf8 + iVar4 * 0x28);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined **)(DAT_100c8dc0 + iVar4 * 4) = (undefined *)(PTR_PTR_100bf7d8[local_c]);
  DAT_100bf7d0 = DAT_100bf7d0 + 1;
  iVar2 = ((int (*)(undefined *))((void (*)(void))((**(code **)(*(int *)(DAT_100c8dc0 + iVar4 * 4) + 8)))))(DAT_100c8920 + iVar4 * 0x74);
  if (iVar2 == 0) {
    *(undefined4 *)(DAT_100c8908 + iVar4 * 4) = 1;
  }
  else {
    FUN_10088ec7(0x70,0,(char *)(iVar4 * 0x74 + 0x100c892c));
    *(undefined4 *)(DAT_100c8908 + iVar4 * 4) = 0;
    iVar4 = -1;
  }
  return iVar4;
}
