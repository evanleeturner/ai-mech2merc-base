/* SPDX-License-Identifier: MIT */
/* mercsw 1003d47c */
extern int DAT_10160e68;
extern int DAT_10160e60;
extern int DAT_10160c00[25];

extern unsigned char DAT_100c6d48[];

extern int DAT_100c6d24;
extern int DAT_100c6d1c;
extern int DAT_100c6d28;
extern int DAT_100c6d20;
extern short DAT_100c6d18;
extern int DAT_100c6d0c;
extern int DAT_100c6d04;
extern int DAT_100c6d10;
extern int DAT_100c6d08;
extern short DAT_100c6d00;
extern int DAT_100c6d3c;
extern int DAT_100c6d34;
extern int DAT_100c6d40;
extern int DAT_100c6d38;
extern short DAT_100c6d30;
extern int DAT_100c7ad4;
extern int DAT_100c7acc;
extern int DAT_100c7ad8;
extern int DAT_100c7ad0;
extern short DAT_100c7ac8;

extern void *DAT_100af098;
extern void *DAT_100af09c;
extern void *DAT_100aefc4;

void __cdecl FUN_1003cb2a(void);

void __stdcall FUN_1003d47c(void)
{
    int local_c;
    int local_8;

    DAT_10160e68 = 0;
    DAT_10160e60 = 0;
    FUN_1003cb2a();
    for (local_8 = 0; local_8 < 0x19; local_8 = local_8 + 1) {
        DAT_10160c00[local_8] = 0;
    }
    for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
        for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
            unsigned char *e = DAT_100c6d48 + local_c * 0x18 + local_8 * 0x120;
            *(int *)(e + 0xc) = 0;
            *(int *)(e + 4) = *(int *)(e + 0xc);
            *(int *)(e + 0x10) = 0;
            *(int *)(e + 8) = *(int *)(e + 0x10);
            *(short *)(e + 0) = 0x4000;
            *(unsigned char **)(e + 0x14) = DAT_100c6d48 + local_8 * 0x120 + local_c * 0x18;
        }
    }
    DAT_100c6d24 = 0;
    DAT_100c6d1c = 0;
    DAT_100c6d28 = 0;
    DAT_100c6d20 = 0;
    DAT_100c6d18 = 0x4000;
    DAT_100c6d0c = 0;
    DAT_100c6d04 = 0;
    DAT_100c6d10 = 0;
    DAT_100c6d08 = 0;
    DAT_100c6d00 = 0x4000;
    DAT_100c6d3c = 0;
    DAT_100c6d34 = 0;
    DAT_100c6d40 = 0;
    DAT_100c6d38 = 0;
    DAT_100c6d30 = 0x4000;
    DAT_100c7ad4 = 0;
    DAT_100c7acc = 0;
    DAT_100c7ad8 = 0;
    DAT_100c7ad0 = 0;
    DAT_100c7ac8 = 0x4000;
    DAT_100af098 = &DAT_100c6d00;
    DAT_100af09c = &DAT_100c6d30;
    DAT_100aefc4 = &DAT_100c6d18;
    return;
}
