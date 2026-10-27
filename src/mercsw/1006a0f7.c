/* SPDX-License-Identifier: MIT */
/* mercsw 1006a0f7 */
extern void __cdecl _sprintf(char *dst, const char *fmt, ...);
extern char s_Items_in_cache___li_100b3bb8[];
extern long DAT_100c9050;
extern int DAT_100b3a70;

void __stdcall FUN_1006a0f7(void)
{
    char local_20[28];
    
    _sprintf(local_20, s_Items_in_cache___li_100b3bb8, DAT_100c9050);
    DAT_100b3a70 = 1;
    return;
}
