/* SPDX-License-Identifier: MIT */
/* mercsw 100821fe */
extern unsigned int g_bitmapHeader100c9250;
extern unsigned int DAT_100c9254;
extern int DAT_100c9258;
extern unsigned short DAT_100c925c;
extern unsigned short DAT_100c925e;
extern unsigned int DAT_100c9260;
extern unsigned int DAT_100c9264;
extern unsigned int DAT_100c9268;
extern unsigned int DAT_100c926c;
extern unsigned int DAT_100c9270;
extern unsigned int DAT_100c9274;

void __cdecl InitBitmapHeader8Bit(unsigned int width, int height)
{
    g_bitmapHeader100c9250 = 0x28;
    DAT_100c9254 = width;
    DAT_100c9258 = (int)(0u - (unsigned int)height);
    DAT_100c925c = 1;
    DAT_100c925e = 8;
    DAT_100c9260 = 0;
    DAT_100c9264 = 0;
    DAT_100c9270 = 0;
    DAT_100c9268 = 0;
    DAT_100c926c = 0;
    DAT_100c9274 = 0;
    return;
}
