/* SPDX-License-Identifier: MIT */
/* mw2shell 10053780 */
/* mw2shell 10053780: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern char s_eyepoint_pan_delta_1009fcbc[];
extern char s_eyepoint_pan_minus_1009fdac[];
extern char s_eyepoint_pan_plus_1009fd8c[];
extern char s_glance_down_1009fd5c[];
extern char s_glance_left_1009fda0[];
extern char s_glance_right_1009fd7c[];
extern char s_glance_up_1009fd3c[];
extern char s_pilot_pan_1009fcb0[];
extern char s_pilot_pan_reset_1009fd2c[];
extern char s_pilot_tilt_1009fc90[];
extern char s_pilot_tilt_reset_1009fd08[];
extern char s_torso_pan_reset_1009fd1c[];
extern char s_torso_tilt_reset_1009fcf4[];
extern char s_track_distance_delta_1009fcdc[];
extern char s_track_height_delta_1009fc9c[];
extern char s_track_height_minus_1009fd48[];
extern char s_track_height_plus_1009fd68[];
extern char s_zoom_factor_1009fcd0[];
undefined __cdecl FUN_10053500(FILE * param_1, undefined4 param_2, int param_3);
undefined __cdecl FUN_10053590(FILE * param_1, char * param_2, int param_3);
undefined __cdecl FUN_10053630(FILE * param_1, char * param_2, undefined4 * param_3);

void __cdecl FUN_10053780(FILE * param_1, byte * param_2, int * param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  bool bVar5;
  
  if (-1 < param_3[4]) {
    iVar2 = *param_3;
    if (iVar2 == 0) {
      FUN_10053500(param_1,(undefined4)(param_2),(int)param_3);
    }
    else if (iVar2 == 1) {
      FUN_10053590(param_1,(char *)param_2,(int)param_3);
    }
    else if (iVar2 == 2) {
      FUN_10053630(param_1,(char *)param_2,(undefined4 *)(param_3));
    }
    pcVar4 = s_pilot_tilt_1009fc90;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10053810:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10053815;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10053810;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10053815:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_track_height_delta_1009fc9c,param_3);
      return;
    }
    pcVar4 = s_pilot_pan_1009fcb0;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10053853:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10053858;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10053853;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10053858:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_eyepoint_pan_delta_1009fcbc,param_3);
      return;
    }
    pcVar4 = s_zoom_factor_1009fcd0;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10053896:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1005389b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10053896;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_1005389b:
    if (iVar2 == 0) {
      param_3[2] = param_3[2] ^ 0x80000000;
      FUN_10053780(param_1,(byte *)s_track_distance_delta_1009fcdc,param_3);
      param_3[2] = param_3[2] ^ 0x80000000;
      return;
    }
    pcVar4 = s_torso_tilt_reset_1009fcf4;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_100538ef:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_100538f4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_100538ef;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_100538f4:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_pilot_tilt_reset_1009fd08,param_3);
      FUN_10053780(param_1,(byte *)s_torso_pan_reset_1009fd1c,param_3);
      FUN_10053780(param_1,(byte *)s_pilot_pan_reset_1009fd2c,param_3);
      return;
    }
    pcVar4 = s_glance_up_1009fd3c;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10053950:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10053955;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10053950;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10053955:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_track_height_minus_1009fd48,param_3);
      return;
    }
    pcVar4 = s_glance_down_1009fd5c;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10053993:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10053998;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10053993;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10053998:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_track_height_plus_1009fd68,param_3);
      return;
    }
    pcVar4 = s_glance_right_1009fd7c;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_100539d6:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_100539db;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_100539d6;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_100539db:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_eyepoint_pan_plus_1009fd8c,param_3);
      return;
    }
    pcVar4 = s_glance_left_1009fda0;
    do {
      bVar1 = *param_2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10053a17:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10053a1c;
      }
      if (bVar1 == 0) break;
      bVar1 = param_2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10053a17;
      param_2 = param_2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10053a1c:
    if (iVar2 == 0) {
      FUN_10053780(param_1,(byte *)s_eyepoint_pan_minus_1009fdac,param_3);
    }
  }
  return;
}
