/* SPDX-License-Identifier: MIT */
/* mercsw 1000e7cf */
extern int DAT_100af098;
extern int DAT_100a7b78;
extern int DAT_100a7b7c;
extern int DAT_10160c00[];

void __cdecl FUN_1003cc75(void);
int __cdecl FUN_1001d5cb(int param_1);
void __cdecl FUN_1002f8af(int param_1);
void __cdecl FUN_1003dfde(unsigned short *param_1);
void __cdecl FUN_1003df3a(unsigned short *param_1);

void __stdcall FUN_1000e7cf(void)
{
    unsigned short *puVar1;
    int local_10;
    unsigned short *local_c;
    int local_8;

    local_10 = 0;
    if (DAT_100af098 != 0) {
        FUN_1003cc75();
        local_8 = DAT_10160c00[0];
        while (local_8 != 0) {
            local_10 = (int)((unsigned int)local_10 + 1u);
            for (local_c = *(unsigned short **)(local_8 + 8); local_c != (unsigned short *)0;
                 local_c = *(unsigned short **)((int)local_c + 8)) {
                if (((unsigned char)*(unsigned short *)((int)local_c + 2) & 0xf0) == 0x90) {
                    DAT_100a7b78 = FUN_1001d5cb((int)local_c);
                    FUN_1002f8af(DAT_100a7b78);
                    break;
                }
            }
            for (local_c = *(unsigned short **)(local_8 + 8); local_c != (unsigned short *)0;
                 local_c = *(unsigned short **)((int)local_c + 8)) {
                if (((unsigned char)*(unsigned short *)((int)local_c + 2) & 0xf0) == 0xa0) {
                    DAT_100a7b7c = FUN_1001d5cb((int)local_c);
                    break;
                }
            }
            puVar1 = *(unsigned short **)(local_8 + 8);
            while (local_c = puVar1, local_c != (unsigned short *)0) {
                puVar1 = *(unsigned short **)(local_c + 4);
                if (((unsigned char)local_c[1] & 0xf0) == 0x70) {
                    FUN_1003dfde(local_c);
                    FUN_1003df3a(local_c);
                }
                if (*(int *)(local_c + 0x12) == 4) {
                    FUN_1003df3a(local_c);
                }
            }
            local_8 = DAT_10160c00[local_10];
        }
    }
    return;
}
