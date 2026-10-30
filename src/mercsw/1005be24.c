/* SPDX-License-Identifier: MIT */
/* mercsw 1005be24 */
extern char *PTR_DAT_100b2ca0[];
extern char DAT_100b2cac[];
extern char DAT_100b2cb0[];
extern char DAT_100b2cb4[];
extern char DAT_100b2cbc[];

extern char *__cdecl _strncpy(char *, const char *, unsigned int);
extern int __cdecl FUN_10065d78(void);

unsigned int __cdecl FUN_1005be24(char *source, int param_2, int param_3, int param_4)
{
    int iVar1;
    int bVar2;
    int iVar3;
    unsigned int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_8;

    bVar2 = 0;
    local_20 = 0;
    local_1c = -1;
    local_8 = 0x29a;
    local_14 = 0;
    while (!bVar2) {
        if (*(int *)(DAT_100b2cac + local_14 * 0x24) == 0) {
            local_1c = local_14;
            bVar2 = 1;
        }
        else {
            if (*(int *)(DAT_100b2cb0 + local_14 * 0x24) <= param_4) {
                if (*(int *)(DAT_100b2cb0 + local_14 * 0x24) < local_8) {
                    local_1c = local_14;
                    local_8 = *(int *)(DAT_100b2cb0 + local_14 * 0x24);
                    local_18 = *(int *)(DAT_100b2cbc + local_14 * 0x24);
                }
                else if ((*(int *)(DAT_100b2cb0 + local_14 * 0x24) == local_8) &&
                         (local_18 < *(int *)(DAT_100b2cbc + local_14 * 0x24))) {
                    local_1c = local_14;
                    local_18 = *(int *)(DAT_100b2cbc + local_14 * 0x24);
                }
            }
            local_14 = local_14 + 1;
            if (local_14 == 2) {
                bVar2 = 1;
            }
        }
    }
    if (local_1c != -1) {
        local_20 = 1;
        iVar1 = local_1c * 0x24;
        _strncpy(PTR_DAT_100b2ca0[local_1c * 9], source, 0xff);
        PTR_DAT_100b2ca0[local_1c * 9][0xff] = 0;
        *(int *)(DAT_100b2cac + iVar1) = 1;
        *(int *)(DAT_100b2cb0 + iVar1) = param_4;
        iVar3 = FUN_10065d78();
        *(int *)(DAT_100b2cbc + iVar1) = (int)((unsigned int)param_3 + (unsigned int)iVar3);
        if (param_2 < 1) {
            *(int *)(DAT_100b2cb4 + iVar1) = 1;
        }
        else {
            *(int *)(DAT_100b2cb4 + iVar1) = param_2;
        }
    }
    return local_20;
}
