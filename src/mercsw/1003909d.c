/* SPDX-License-Identifier: MIT */
/* mercsw 1003909d */
extern char s_Tracker_100ae6dc[];
extern char s_tracker_100ae6e4[];
extern char s_SideWinder_100ae6ec[];
extern char s_sidewind_100ae6f8[];
extern char s_Flightstick_Pro_100ae704[];
extern char s_fltstick_100ae714[];
extern char s_Thrustmaster_100ae720[];
extern char s_tmaster_100ae730[];
extern char s_joystick_100ae738[];

char * __cdecl _strstr(const char *, const char *);

void __cdecl FUN_1003909d(int param_1, int param_2)
{
    unsigned int uVar1;
    char *pcVar2;

    uVar1 = *(unsigned int *)(param_2 + 0x60);
    pcVar2 = _strstr((char *)(param_1 + 0xc), s_Tracker_100ae6dc);
    if (pcVar2 == (char *)0) {
        pcVar2 = _strstr((char *)(param_1 + 0xc), s_SideWinder_100ae6ec);
        if ((pcVar2 == (char *)0) &&
            (((((uVar1 & 1) == 0 || ((uVar1 & 2) == 0)) || ((uVar1 & 0x10) == 0)) ||
              (((uVar1 & 0x20) == 0 || (*(int *)(param_2 + 0x3c) != 8)))))) {
            pcVar2 = _strstr((char *)(param_1 + 0xc), s_Flightstick_Pro_100ae704);
            if ((pcVar2 == (char *)0) &&
                ((((uVar1 & 1) == 0 || ((uVar1 & 0x10) == 0)) ||
                  (((uVar1 & 0x20) == 0 || (*(int *)(param_2 + 0x3c) != 4)))))) {
                pcVar2 = _strstr((char *)(param_1 + 0xc), s_Thrustmaster_100ae720);
                if ((pcVar2 == (char *)0) &&
                    (((((uVar1 & 2) == 0 || ((uVar1 & 0x10) == 0)) || ((uVar1 & 0x20) == 0)) ||
                      (*(int *)(param_2 + 0x3c) != 4)))) {
                    *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_joystick_100ae738);
                    *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_joystick_100ae738 + 4);
                    *(char *)(param_1 + 0x54) = s_joystick_100ae738[8];
                }
                else {
                    *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_tmaster_100ae730);
                    *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_tmaster_100ae730 + 4);
                }
            }
            else {
                *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_fltstick_100ae714);
                *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_fltstick_100ae714 + 4);
                *(char *)(param_1 + 0x54) = s_fltstick_100ae714[8];
            }
        }
        else {
            *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_sidewind_100ae6f8);
            *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_sidewind_100ae6f8 + 4);
            *(char *)(param_1 + 0x54) = s_sidewind_100ae6f8[8];
        }
    }
    else {
        *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(s_tracker_100ae6e4);
        *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(s_tracker_100ae6e4 + 4);
    }
    return;
}
