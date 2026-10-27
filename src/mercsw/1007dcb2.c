/* SPDX-License-Identifier: MIT */
/* mercsw 1007dcb2 */
extern char DAT_100b94cc[];
extern char DAT_100b94c8[];
extern int _sprintf(char *dst, const char *fmt, ...);
extern uint __stdcall FILE_read(char *filename, uint param2);

uint __cdecl FUN_1007dcb2(uint param_1)
{
    char local_104[256];
    _sprintf(local_104, "%s/%s.%s", DAT_100b94cc, (char *)param_1, DAT_100b94c8);
    return FILE_read(local_104, 0);
}
