/* SPDX-License-Identifier: MIT */
/* mercsw 1000bf23 */
extern unsigned char DAT_100a73d0[];

unsigned int __cdecl FUN_1000bf23(unsigned int *param_1, int *param_2, int *param_3)
{
    short sVar1;
    short sVar2;
    short sVar3;
    int local_a8;
    int local_a4;
    unsigned int local_a0;
    int local_9c;
    short local_94[70];
    int local_8;

    local_94[0] = 0x1b58;
    local_94[1] = 1;
    local_94[2] = 0;
    local_94[3] = 0x1b8a;
    local_94[4] = 1;
    local_94[5] = 0;
    local_94[6] = 0x1bbc;
    local_94[7] = (short)0xffc4;
    local_94[8] = 0;
    local_94[9] = 0x1bee;
    local_94[10] = (short)0xffc4;
    local_94[11] = 0;
    local_94[12] = 0x1c20;
    local_94[13] = (short)0xffce;
    local_94[14] = 0;
    local_94[15] = 0x1c52;
    local_94[16] = 1;
    local_94[17] = 0;
    local_94[18] = 0x1c84;
    local_94[19] = 1;
    local_94[20] = 0;
    local_94[21] = 0x1cb6;
    local_94[22] = 1;
    local_94[23] = 0;
    local_94[24] = 0x1ce8;
    local_94[25] = 1;
    local_94[26] = 0;
    local_94[27] = 0x1d1a;
    local_94[28] = 1;
    local_94[29] = 0;
    local_94[30] = 0x1d4c;
    local_94[31] = 1;
    local_94[32] = 0;
    local_94[33] = 0x1d7e;
    local_94[34] = 1;
    local_94[35] = 0;
    local_94[36] = 0x1db0;
    local_94[37] = 1;
    local_94[38] = 0;
    local_94[39] = 0x1de2;
    local_94[40] = 1;
    local_94[41] = 0;
    local_94[42] = 0x1e14;
    local_94[43] = 2;
    local_94[44] = 0;
    local_94[45] = 0x1e46;
    local_94[46] = 0;
    local_94[47] = 0;
    local_94[48] = 0x1e78;
    local_94[49] = 2;
    local_94[50] = 0;
    local_94[51] = 0x1eaa;
    local_94[52] = 3;
    local_94[53] = 0;
    local_94[54] = 0x1edc;
    local_94[55] = 2;
    local_94[56] = 0;
    local_94[57] = 0x1f40;
    local_94[58] = 1;
    local_94[59] = 0;
    local_94[60] = 0x2134;
    local_94[61] = 1;
    local_94[62] = 0;
    local_94[63] = 0x2328;
    local_94[64] = 0;
    local_94[65] = 0;
    local_94[66] = 0x251c;
    local_94[67] = 0;
    local_94[68] = 0;

    local_a0 = *param_1 & 0xffff;
    sVar2 = 0;
    local_8 = 0;
    local_9c = 0;
    do {
        if (7 < local_9c) {
            for (local_9c = 0; (local_9c < (int)param_1[4]) && (local_9c < 0xe); local_9c = local_9c + 1) {
                local_a0 = (unsigned int)(unsigned short)(*(short *)(DAT_100a73d0 + (*param_3 / 100) * 2) + (short)local_a0);
                param_3 = param_3 + 2;
            }
            return ((((unsigned int)param_1 >> 16) & 0xffff) << 16) | (unsigned int)(unsigned short)local_a0;
        }
        for (local_a4 = 0; local_a4 < (short)param_2[9]; local_a4 = local_a4 + 1) {
            local_8 = (int)((unsigned int)local_8 + (unsigned int)param_2[1] + (unsigned int)*param_2);
            for (local_a8 = 0x16; -1 < local_a8; local_a8 = local_a8 + -1) {
                if ((int)local_94[local_a8 * 3] < (int)(unsigned int)*(unsigned short *)((int)param_2 + local_a4 * 2 + 0xc)) {
                    local_94[local_a8 * 3 + 2] = local_94[local_a8 * 3 + 2] + 1;
                    sVar2 = sVar2 + 1;
                    break;
                }
            }
        }
        for (local_a8 = 0x14; sVar1 = (short)local_a0, -1 < local_a8; local_a8 = local_a8 + -1) {
            if (local_94[local_a8 * 3 + 2] != 0) {
                if (local_94[local_a8 * 3 + 1] < 0) {
                    local_a0 = (unsigned int)(unsigned short)(sVar1 - local_94[local_a8 * 3 + 1] * local_94[local_a8 * 3 + 2]);
                }
                else {
                    local_a0 = (unsigned int)(unsigned short)(local_94[local_a8 * 3 + 1] * local_94[local_a8 * 3 + 2] * (short)*param_1 + sVar1);
                }
            }
        }
        sVar3 = sVar2;
        if (local_94[0x41] != 0) {
            sVar3 = sVar2 * 2;
        }
        local_a0 = (unsigned int)(unsigned short)((short)param_2[2] + sVar1 + sVar3 + (short)local_8);
        local_9c = local_9c + 1;
        param_2 = param_2 + 10;
    } while (1);
}
