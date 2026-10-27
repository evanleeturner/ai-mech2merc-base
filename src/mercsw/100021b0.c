/* SPDX-License-Identifier: MIT */
/* mercsw 100021b0 */
extern int DAT_100c4c88;
extern unsigned int DAT_100c4c78;
extern unsigned int DAT_100c4c7c;
extern unsigned int DAT_100c4c80;
extern unsigned int DAT_100c4c84;
extern int DAT_100a40b4;
extern int DAT_100a40a0;
extern unsigned int DAT_100a40c0;
extern unsigned int DAT_100a40c4;
extern unsigned int DAT_100a40a8;
extern unsigned int DAT_100a40ac;

unsigned int __cdecl FUN_10002570(unsigned int param_1, unsigned int param_2);

void __stdcall FUN_100021b0(void)
{
    DAT_100c4c88 = 1;
    DAT_100c4c84 = (unsigned int)(DAT_100a40b4 / 0x18);
    DAT_100c4c78 = DAT_100c4c84 * 5u;
    DAT_100c4c7c = DAT_100c4c84 * 7u;
    DAT_100c4c80 = DAT_100c4c84 * 0x11u;
    DAT_100c4c84 = DAT_100c4c84 * 0x13u;
    if (DAT_100a40a0 != -1) {
        DAT_100a40c0 = *(unsigned int *)((unsigned char *)&DAT_100c4c78 + (unsigned int)DAT_100a40a0 * 4u);
    }
    DAT_100a40c4 = DAT_100a40c0;
    DAT_100a40a0 = -1;
    DAT_100a40ac = FUN_10002570(DAT_100a40a8, 0x794);
    return;
}
