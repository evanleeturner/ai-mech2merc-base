/* SPDX-License-Identifier: MIT */
/* mercsw 100280a3 */
/* mercsw 100280a3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100aca54;
extern int DAT_100aca58;
extern undefined4 DAT_100aca5c;
extern undefined DAT_100ad578[];
extern undefined DAT_100ad57c[];
extern undefined4 DAT_10123120;
extern undefined DAT_10123240[];
extern undefined DAT_10123244[];
extern undefined DAT_10123248[];
extern undefined DAT_1012324c[];
extern undefined DAT_10123278[];
extern undefined DAT_1012327a[];
extern undefined DAT_1012327b[];
extern undefined DAT_1012327c[];
extern undefined DAT_101232ed[];
extern char s_Primary_100ad53c[];
extern char s_Return_100ad560[];
extern char s_Secondary_100ad548[];
extern char s_Star__d_mission__Failed_at__d_se_100ad4f0[];
extern char s_Star__d_mission__Out_of_time_at___100ad514[];
extern char s_Star__d_mission__Successful_at___100ad4c8[];
extern char s_Star__d_mission___d_sec_left_100ad488[];
extern char s_Star__d_mission__in_progress_100ad4a8[];
extern char s_Tertiary_100ad554[];
extern char s_Tertiary_100ad56c[];
extern char s__2_2s__2_2d__s___3_3s_100ad580[];
extern char s__s__s__3_3d_sec__s_100ad5f0[];
extern char s__s__s__s_100ad608[];
extern char s__s_failed_at__3_3d_sec__s_100ad5b8[];
extern char s__s_successful_at__3_3d_sec__s_100ad598[];
extern char s_in_progress_100ad5d8[];
extern char s_inactive_100ad5e4[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __stdcall FUN_10027502(void);
undefined4 __cdecl FUN_100274a5(short param_1, int param_2, short param_3);

void __cdecl FUN_100280a3(int param_1)

{
  int *piVar1;
  int iVar2;
  char *local_228;
  char local_220 [256];
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  char local_110 [256];
  undefined *local_10;
  char *local_c;
  char *local_8;
  
  (void)local_120;
  iVar2 = param_1 * 0x3c0a;
  piVar1 = (int *)(DAT_10123240 + iVar2);
  local_120 = 7;
  switch(DAT_10123278[iVar2]) {
  case 0:
    if (*(int *)(DAT_1012324c + iVar2) < 1) {
      _sprintf(local_110,s_Star__d_mission__in_progress_100ad4a8,param_1);
    }
    else {
      local_114 = *(int *)(DAT_1012324c + iVar2) - (DAT_10123120 - *(int *)(DAT_10123244 + iVar2))
      ;
      _sprintf(local_110,s_Star__d_mission___d_sec_left_100ad488,param_1,local_114);
    }
    break;
  case 2:
    _sprintf(local_110,s_Star__d_mission__Successful_at___100ad4c8,param_1,
             *(undefined4 *)(DAT_10123248 + iVar2));
    break;
  case 3:
    _sprintf(local_110,s_Star__d_mission__Failed_at__d_se_100ad4f0,param_1,
             *(undefined4 *)(DAT_10123248 + iVar2));
    break;
  case 4:
    _sprintf(local_110,s_Star__d_mission__Out_of_time_at___100ad514,param_1,
             *(undefined4 *)(DAT_10123248 + iVar2));
  }
  if (DAT_100aca5c == (undefined4)(-1)) {
    DAT_100aca5c = 0;
    DAT_100aca58 = *piVar1 + -1;
    if (0x13 < DAT_100aca58) {
      DAT_100aca58 = 0x14;
    }
  }
  if (DAT_100aca54 < (int)DAT_100aca5c) {
    if (DAT_100aca54 < 1) {
      DAT_100aca54 = DAT_100aca5c;
    }
    else {
      DAT_100aca5c = DAT_100aca54;
      DAT_100aca58 = *piVar1 + -1;
      if (DAT_100aca54 + 0x14 <= *piVar1 + -1) {
        DAT_100aca58 = DAT_100aca54 + 0x14;
      }
      FUN_10027502();
    }
  }
  else if (DAT_100aca58 < DAT_100aca54) {
    if (DAT_100aca54 < *piVar1) {
      DAT_100aca58 = DAT_100aca54;
      DAT_100aca5c = DAT_100aca54 + -0x14;
      if (DAT_100aca5c < 1) {
        DAT_100aca5c = 0;
      }
      FUN_10027502();
    }
    else {
      DAT_100aca54 = DAT_100aca58;
    }
  }
  for (local_11c = DAT_100aca5c; local_11c <= DAT_100aca58; local_11c = local_11c + 1) {
    iVar2 = local_11c * 0x13f + param_1 * 0x3c0a;
    local_c = (char *)(DAT_1012327a + iVar2);
    local_120 = 7;
    if (DAT_101232ed[iVar2] != '\0') {
      local_120 = 0xf;
    }
    switch(DAT_1012327b[iVar2]) {
    case 1:
      local_8 = s_Primary_100ad53c;
      break;
    case 2:
      local_8 = s_Secondary_100ad548;
      break;
    default:
      local_8 = s_Tertiary_100ad56c;
      break;
    case 4:
      local_8 = s_Tertiary_100ad554;
      break;
    case 8:
      local_8 = s_Return_100ad560;
    }
    local_118 = FUN_100274a5((short)*(undefined4 *)(DAT_1012327c + iVar2),0x100accc0,0xe);
    if (DAT_100aca54 == local_11c) {
      local_10 = DAT_100ad578;
    }
    else {
      local_10 = DAT_100ad57c;
    }
    _sprintf(local_220,s__2_2s__2_2d__s___3_3s_100ad580,local_10,local_11c,local_8,local_118);
    if (*local_c == '\x05') {
      _sprintf(local_110,s__s_successful_at__3_3d_sec__s_100ad598,local_220,
               *(undefined4 *)(local_c + 0x6b),local_c + 0xad);
    }
    else if (*local_c == '\x06') {
      _sprintf(local_110,s__s_failed_at__3_3d_sec__s_100ad5b8,local_220,
               *(undefined4 *)(local_c + 0x6b),local_c + 0xad);
    }
    else {
      if (local_c[0x73] == '\0') {
        local_228 = s_inactive_100ad5e4;
      }
      else {
        local_228 = s_in_progress_100ad5d8;
      }
      if ((*(int *)(local_c + 0x6f) < 1) || (local_c[0x73] == '\0')) {
        _sprintf(local_110,s__s__s__s_100ad608,local_220,local_228,local_c + 0xad);
      }
      else {
        local_114 = *(int *)(local_c + 0x6f) - (DAT_10123120 - *(int *)(local_c + 0x67));
        _sprintf(local_110,s__s__s__3_3d_sec__s_100ad5f0,local_220,local_228,local_114,
                 local_c + 0xad);
      }
    }
  }
  return;
}
