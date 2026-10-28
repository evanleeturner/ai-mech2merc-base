/* SPDX-License-Identifier: MIT */
/* mw2shell 10053a40 */
/* mw2shell 10053a40: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
typedef struct FILE FILE;
typedef struct wchar_t wchar_t;
extern undefined4 DAT_1009c6ac;
extern undefined4 DAT_1009f378;
extern undefined4 DAT_1009f37c;
extern char DAT_1009fdc0[];
extern undefined DAT_100bdf90[];
extern undefined DAT_100bdf98[];
extern undefined DAT_100bdf9c[];
extern undefined DAT_100bdfa0[];
extern undefined DAT_100bed70[];
extern undefined DAT_100bed78[];
extern undefined DAT_100bed7c[];
extern undefined4 PTR_s_throttle_1009c5f8[];
extern char s_Error__Could_not_write_map_file__1009fe70[];
extern char s___analog_count____d_1009fe40[];
extern char s___discrete_count____d_1009fe58[];
extern char s___mw2shell_CockPit_Config_genera_1009fdd0[];
extern char s_jumpjet_enabled_1009fe10[];
extern char s_jumpjet_enabled_1009fe30[];
extern char s_legs_pan_minus_1009fe00[];
extern char s_legs_pan_plus_1009fe20[];
extern char s_temp_map_1009fdc4[];
FILE * __cdecl FID_conflict___wfopen(char * _Filename, char * _Mode);
int __cdecl FID_conflict__fwprintf(FILE * _File, wchar_t * _Format, ...);
undefined __cdecl FUN_10053780(FILE * param_1, byte * param_2, int * param_3);
int __cdecl _fclose(FILE * _File);
undefined __cdecl FUN_1005b1b0(char * param_1);

undefined4 __stdcall FUN_10053a40(void)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  FILE *_File;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  (void)local_14;
  (void)local_10;
  (void)local_c;
  (void)local_8;
  (void)local_4;
  puVar4 = (uint *)(DAT_100bdf9c);
  do {
    uVar5 = puVar4[-3];
    if (-1 < (int)uVar5) {
      if ((int)uVar5 < 2) {
        *puVar4 = 0;
      }
      else if (uVar5 == 2) {
        uVar5 = puVar4[-1];
        if (puVar4[1] == puVar4[2]) {
          uVar5 = (uVar5 & 7) << 4;
        }
        *puVar4 = uVar5;
      }
    }
    puVar4 = puVar4 + 6;
  } while (puVar4 < (uint *)(DAT_100bed7c));
  iVar7 = 0;
  puVar4 = (uint *)(DAT_100bdfa0);
  do {
    if ((-1 < (int)puVar4[-3]) && (uVar5 = (puVar4[-2] & 7) << 4, (puVar4[-2] & 7) != 0)) {
      uVar1 = puVar4[-4];
      if (uVar1 == 0) {
        iVar6 = 0;
        puVar2 = (uint *)(DAT_100bdf98);
        do {
          if ((((iVar6 != iVar7) && (-1 < (int)puVar2[-1])) && (puVar2[-2] == 0)) &&
             (puVar2[2] == *puVar4)) {
            *puVar2 = *puVar2 | uVar5;
          }
          puVar2 = puVar2 + 6;
          iVar6 = iVar6 + 1;
        } while (puVar2 < (uint *)(DAT_100bed78));
      }
      else if ((0 < (int)uVar1) && ((int)uVar1 < 3)) {
        iVar6 = 0;
        piVar3 = (int *)(DAT_100bdf90);
        do {
          if (((iVar6 != iVar7) && (-1 < piVar3[1])) && (*piVar3 != 0)) {
            if ((uint)(piVar3[4]) == *puVar4) {
              piVar3[2] = piVar3[2] | uVar5;
            }
            if (*piVar3 == 2) {
              if ((uint)(piVar3[5]) == *puVar4) {
                piVar3[3] = piVar3[3] | uVar5;
              }
              if (*piVar3 != 2) goto LAB_10053b5e;
              if (puVar4[1] == (uint)(piVar3[4])) {
                piVar3[2] = piVar3[2] | (puVar4[-1] & 7) << 4;
              }
            }
            if ((*piVar3 == 2) && ((uint)(piVar3[5]) == puVar4[1])) {
              piVar3[3] = piVar3[3] | (puVar4[-1] & 7) << 4;
            }
          }
LAB_10053b5e:
          piVar3 = piVar3 + 6;
          iVar6 = iVar6 + 1;
        } while (piVar3 < (int *)(DAT_100bed70));
      }
    }
    puVar4 = puVar4 + 6;
    iVar7 = iVar7 + 1;
    if ((uint *)0x100bed7f < puVar4) {
      _File = FID_conflict___wfopen(s_temp_map_1009fdc4,DAT_1009fdc0);
      DAT_1009f378 = 0;
      DAT_1009f37c = 0;
      if (_File == (FILE *)0x0) {
        FUN_1005b1b0(s_Error__Could_not_write_map_file__1009fe70);
      }
      else {
        uVar5 = 0;
        puVar4 = (uint *)(DAT_100bdf98);
        FID_conflict__fwprintf(_File,(wchar_t *)s___mw2shell_CockPit_Config_genera_1009fdd0);
        do {
          if (-1 < (int)puVar4[-1]) {
            FUN_10053780(_File,(byte *)(PTR_s_throttle_1009c5f8[uVar5 % 0x25]),(int *)(puVar4 + -2));
            *puVar4 = *puVar4 & 0x80000007;
            puVar4[1] = 0;
          }
          puVar4 = puVar4 + 6;
          uVar5 = uVar5 + 1;
        } while (puVar4 < (uint *)(DAT_100bed78));
        local_18 = 1;
        local_10 = 0;
        local_14 = DAT_1009c6ac;
        local_4 = 0xffffffff;
        local_8 = 0x66;
        local_c = 0xffffffff;
        FUN_10053780(_File,(byte *)s_legs_pan_minus_1009fe00,&local_18);
        FUN_10053780(_File,(byte *)s_jumpjet_enabled_1009fe10,&local_18);
        local_8 = 100;
        FUN_10053780(_File,(byte *)s_legs_pan_plus_1009fe20,&local_18);
        FUN_10053780(_File,(byte *)s_jumpjet_enabled_1009fe30,&local_18);
        FID_conflict__fwprintf(_File,(wchar_t *)s___analog_count____d_1009fe40,DAT_1009f378);
        FID_conflict__fwprintf(_File,(wchar_t *)s___discrete_count____d_1009fe58,DAT_1009f37c);
        _fclose(_File);
      }
      if ((DAT_1009f378 < 0x29) && (DAT_1009f37c < 0x5b)) {
        return 1;
      }
      return 0;
    }
  } while( true );
}
