/* SPDX-License-Identifier: MIT */
/* mw2shell 1003fd30 */
extern char s_Tracker_1009611c[];
extern char s_tracker_10096124[];
extern char s_SideWinder_1009612c[];
extern char s_sidewind_10096138[];
extern char s_Flightstick_Pro_10096144[];
extern char s_fltstick_10096154[];
extern char s_Thrustmaster_10096160[];
extern char s_tmaster_10096170[];
extern char s_joystick_10096178[];

char * __cdecl _strstr(const char *param_1, const char *param_2);

void __cdecl FUN_1003fd30(int param_1, int param_2)
{
    unsigned short uVar1;
    char *pcVar2;

    uVar1 = *(unsigned short *)(param_2 + 0x60);
    pcVar2 = _strstr((char *)(param_1 + 0xc), s_Tracker_1009611c);
    if (pcVar2 != (char *)0) {
        *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_tracker_10096124);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_tracker_10096124 + 4);
        return;
    }
    pcVar2 = _strstr((char *)(param_1 + 0xc), s_SideWinder_1009612c);
    if ((pcVar2 != (char *)0) ||
        (((((uVar1 & 1) != 0 && ((uVar1 & 2) != 0)) && ((uVar1 & 0x10) != 0)) &&
          (((uVar1 & 0x20) != 0 && (*(int *)(param_2 + 0x3c) == 8)))))) {
        *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_sidewind_10096138);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_sidewind_10096138 + 4);
        *(char *)(param_1 + 0x54) = s_sidewind_10096138[8];
        return;
    }
    pcVar2 = _strstr((char *)(param_1 + 0xc), s_Flightstick_Pro_10096144);
    if ((pcVar2 != (char *)0) ||
        ((((uVar1 & 1) != 0 && ((uVar1 & 0x10) != 0)) &&
          (((uVar1 & 0x20) != 0 && (*(int *)(param_2 + 0x3c) == 4)))))) {
        *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_fltstick_10096154);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_fltstick_10096154 + 4);
        *(char *)(param_1 + 0x54) = s_fltstick_10096154[8];
        return;
    }
    pcVar2 = _strstr((char *)(param_1 + 0xc), s_Thrustmaster_10096160);
    if ((pcVar2 == (char *)0) &&
        (((((uVar1 & 2) == 0 || ((uVar1 & 0x10) == 0)) || ((uVar1 & 0x20) == 0)) ||
          (*(int *)(param_2 + 0x3c) != 4)))) {
        *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_joystick_10096178);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_joystick_10096178 + 4);
        *(char *)(param_1 + 0x54) = s_joystick_10096178[8];
        return;
    }
    *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_tmaster_10096170);
    *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_tmaster_10096170 + 4);
    return;
}
