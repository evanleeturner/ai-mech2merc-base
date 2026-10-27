/* SPDX-License-Identifier: MIT */
/* mercsw 10001d0a */
extern int DAT_10123230;
extern unsigned char DAT_10168410[];
extern unsigned char DAT_10123240[];
extern char DAT_1012327a[];

int __cdecl __strcmpi(const char *a, const char *b);

unsigned int __cdecl FUN_10001d0a(char *param_1)
{
    char cVar1;
    int iVar2;
    unsigned int local_18;
    int local_14;
    int local_c;

    local_18 = 0;
    if (*param_1 == '\0') {
        local_18 = 0;
    }
    else {
        for (local_14 = 0; local_14 < DAT_10123230; local_14 = local_14 + 1) {
            if (*(int *)(DAT_10168410 + local_14 * 4) != 0) {
                for (local_c = 0; local_c < *(int *)(DAT_10123240 + local_14 * 0x3c0a);
                     local_c = local_c + 1) {
                    cVar1 = DAT_1012327a[local_14 * 0x3c0a + local_c * 0x13f];
                    if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\a')) &&
                        (iVar2 = __strcmpi(param_1, (char *)(*(int *)(DAT_10168410 + local_14 * 4) +
                                                             local_c * 0x97 + 0x70)), iVar2 == 0)) {
                        local_18 = local_18 | (1u << ((unsigned char)local_c & 0x1f)) |
                                   ((1u << ((unsigned char)local_14 & 0x1f)) << 0x10);
                        DAT_1012327a[local_14 * 0x3c0a + local_c * 0x13f] = 7;
                    }
                }
            }
        }
    }
    return local_18;
}
