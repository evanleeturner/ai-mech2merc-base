/* SPDX-License-Identifier: MIT */
/* mw2shell 10060010 */
extern int DAT_100c5c30;
extern int DAT_100c5c34;
extern int DAT_100c5c38;
extern short DAT_100c5c3c;
extern short DAT_100c5c3e;
extern int DAT_100c5c40;
extern int DAT_100c5c44;
extern int DAT_100c5c48;
extern int DAT_100c5c4c;
extern int DAT_100c5c50;
extern int DAT_100c5c54;

void __cdecl FUN_10060010(int width, int height)
{
    DAT_100c5c30 = 0x28;
    DAT_100c5c3c = 1;
    DAT_100c5c3e = 8;
    DAT_100c5c34 = width;
    DAT_100c5c38 = (int)(0u - (unsigned int)height);
    DAT_100c5c40 = 0;
    DAT_100c5c44 = 0;
    DAT_100c5c50 = 0;
    DAT_100c5c48 = 0;
    DAT_100c5c4c = 0;
    DAT_100c5c54 = 0;
}
