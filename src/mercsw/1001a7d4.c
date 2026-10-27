/* SPDX-License-Identifier: MIT */
/* mercsw 1001a7d4 */
extern int DAT_100b38d8;
extern int DAT_100ab0a4;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_100ab0a0;
extern unsigned int DAT_100ab07c;

void __cdecl FUN_1001a7d4(int param_1, int param_2);

void __cdecl FUN_1001a7d4(int param_1, int param_2)
{
    int local_8;

    local_8 = -1;
    if (DAT_100b38d8 != 0) {
        if (param_2 == 0) {
            if (param_1 != 0) {
                local_8 = 1;
            }
        }
        else {
            DAT_100ab0a4 = DAT_100adf38;
            local_8 = 0;
        }
        DAT_100ab0a4 = (int)((unsigned int)DAT_100ab0a4 + (unsigned int)local_8);
        if (DAT_100ab0a4 < 0) {
            DAT_100ab0a4 = (int)((unsigned int)DAT_100b38d8 + 0xffffffffU);
        }
        else if (DAT_100b38d8 <= DAT_100ab0a4) {
            DAT_100ab0a4 = 0;
        }
        DAT_100ab0a0 = DAT_100eef40[DAT_100ab0a4];
        if ((*(unsigned short *)(DAT_100ab0a0 + 0x14) & 0x4800) != 0) {
            FUN_1001a7d4(param_1, param_2);
        }
        DAT_100ab07c = 0xffffffffU;
    }
    return;
}
