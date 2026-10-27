/* SPDX-License-Identifier: MIT */
/* mercsw 1006a133 */
extern void __cdecl _sprintf(char *param_1, char *param_2, int param_3, int param_4);
extern char s__100b3bd4[];
extern int DAT_100b3a70;

void __stdcall FUN_1006a133(void)
{
    char local_20[28];
    
    _sprintf(local_20, s__100b3bd4, 0x19, 0x19);
    DAT_100b3a70 = 0;
    return;
}
