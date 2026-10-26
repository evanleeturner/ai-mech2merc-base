/* SPDX-License-Identifier: MIT */
/* mercsw 1007c9fd */
extern unsigned char DAT_100cded4[];

int __cdecl FUN_1007c9fd(int param_1)
{
    int local_c;
    int local_8;

    local_8 = -1;
    for (local_c = 0; local_c < 0x80; local_c = local_c + 1) {
        if (*(int *)(DAT_100cded4 + (unsigned int)(local_c * 0x24)) == param_1) {
            local_8 = local_c;
            break;
        }
    }
    return local_8;
}
