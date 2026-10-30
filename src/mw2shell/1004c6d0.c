/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c6d0 */
extern unsigned int DAT_10083508;
extern unsigned int DAT_1009b384;
extern unsigned int DAT_1009b394;
extern int DAT_100bacc4;
extern unsigned int DAT_100d08e8;
extern char s_DEATH_1009b704[];
extern char s_DEATH_1009b70c[];
extern char s_Unknown_Shell_Mode_of_Operation__1009b714[];

unsigned int ShowMessageDialog(char *param_1);
unsigned int FUN_10038710(char *param_1);
void FUN_1004c110(void);
unsigned int FUN_1004c220(void);
void FUN_1004b180(char param_1);
void FUN_1004c2d0(void);
void FUN_1004c520(void);
unsigned char *FUN_1005bbb0(char *param_1);
int __stdcall PostMessageA(unsigned int, unsigned int, unsigned int, int);

unsigned int __stdcall FUN_1004c6d0(void)
{
    unsigned char bVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    unsigned char *pbVar4;
    int iVar5;
    int BVar6;
    char *pcVar7;
    int bVar8;
    int mode;
    int sel;
    int tmp;

    __builtin_memcpy(&mode, (unsigned char *)DAT_10083508 + 0x23bb, 4);
    if (mode == 0) {
        __builtin_memcpy(&iVar5, (unsigned char *)DAT_10083508 + 0x1fe, 4);
        uVar3 = DAT_10083508;
        if (iVar5 == 1) {
            if (*((char *)DAT_10083508 + 0x239c) == '\x01') {
                uVar3 = FUN_10038710((char *)(DAT_10083508 + 0x202));
                return uVar3 & 0xffffff00u;
            }
        }
        else {
            if ((iVar5 < 2) || (3 < iVar5)) {
                DAT_1009b394 = DAT_1009b384;
                return DAT_1009b384 & 0xffffff00u;
            }
            if (*((char *)DAT_10083508 + 0x239c) == '\x01') {
                FUN_1004c110();
                uVar3 = FUN_1004c220();
                return uVar3 & 0xffffff00u;
            }
        }
    }
    else {
        __builtin_memcpy(&mode, (unsigned char *)DAT_10083508 + 0x23bb, 4);
        if (mode != 1) {
            uVar3 = ShowMessageDialog(s_Unknown_Shell_Mode_of_Operation__1009b714);
            return uVar3 & 0xffffff00u;
        }
        __builtin_memcpy(&tmp, (unsigned char *)DAT_10083508 + 0x12a, 4);
        tmp = (int)((unsigned int)tmp + (unsigned int)DAT_100bacc4);
        __builtin_memcpy((unsigned char *)DAT_10083508 + 0x12a, &tmp, 4);
        FUN_1004b180('\x01');
        FUN_1004c2d0();
        uVar2 = DAT_10083508;
        __builtin_memcpy(&sel, (unsigned char *)DAT_10083508 + 0x1fe, 4);
        uVar3 = (unsigned int)sel;
        switch ((unsigned int)sel) {
        case 0:
            uVar3 = FUN_10038710((char *)(DAT_10083508 + 0x202));
            return uVar3 & 0xffffff00u;
        case 1:
            if (*((char *)DAT_10083508 + 0x239c) == '\x01') {
                FUN_1004c520();
                uVar3 = FUN_10038710((char *)(DAT_10083508 + 0x202));
                return uVar3 & 0xffffff00u;
            }
            pbVar4 = FUN_1005bbb0((char *)(DAT_10083508 + 0x2a2));
            pcVar7 = s_DEATH_1009b704;
            do {
                bVar1 = *pbVar4;
                bVar8 = bVar1 < (unsigned char)*pcVar7;
                if (bVar1 != (unsigned char)*pcVar7) {
                    goto LAB_1004c82b;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar8 = bVar1 < (unsigned char)pcVar7[1];
                if (bVar1 != (unsigned char)pcVar7[1]) goto LAB_1004c82b;
                pbVar4 = pbVar4 + 2;
                pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
            goto LAB_1004c830;
LAB_1004c82b:
            iVar5 = (int)((1u - (unsigned int)bVar8) - (unsigned int)(bVar8 != 0));
LAB_1004c830:
            if (iVar5 != 0) {
                uVar3 = FUN_10038710((char *)(DAT_10083508 + 0x2a2));
                return uVar3 & 0xffffff00u;
            }
            BVar6 = PostMessageA(DAT_100d08e8, 0xc02b, 0xc00a, 0);
            return (((unsigned int)BVar6 >> 8) << 8) | 1u;
        case 2:
            if (*((char *)DAT_10083508 + 0x239c) == '\0') {
                pbVar4 = FUN_1005bbb0((char *)(DAT_10083508 + 0x2a2));
                pcVar7 = s_DEATH_1009b70c;
                do {
                    bVar1 = *pbVar4;
                    bVar8 = bVar1 < (unsigned char)*pcVar7;
                    if (bVar1 != (unsigned char)*pcVar7) {
                        goto LAB_1004c8a9;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar8 = bVar1 < (unsigned char)pcVar7[1];
                    if (bVar1 != (unsigned char)pcVar7[1]) goto LAB_1004c8a9;
                    pbVar4 = pbVar4 + 2;
                    pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
                goto LAB_1004c8ae;
LAB_1004c8a9:
                iVar5 = (int)((1u - (unsigned int)bVar8) - (unsigned int)(bVar8 != 0));
LAB_1004c8ae:
                if (iVar5 == 0) {
                    BVar6 = PostMessageA(DAT_100d08e8, 0xc02b, 0xc00a, 0);
                    return (((unsigned int)BVar6 >> 8) << 8) | 1u;
                }
            }
            else {
                FUN_1004c520();
            }
            uVar3 = DAT_10083508;
            *((unsigned char *)DAT_10083508 + 0x239d) = 1;
            return uVar3 & 0xffffff00u;
        case 3:
            if (*((char *)DAT_10083508 + 0x239c) == '\x01') {
                FUN_1004c520();
                uVar3 = FUN_10038710((char *)(DAT_10083508 + 0x202));
                return uVar3 & 0xffffff00u;
            }
            *((unsigned char *)DAT_10083508 + 0x239d) = 1;
            uVar3 = uVar2;
        }
    }
    return uVar3 & 0xffffff00u;
}
