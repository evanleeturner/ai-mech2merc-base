/* SPDX-License-Identifier: MIT */
/* mercsw 10013be9 */
extern int DAT_100aa1ac;
extern char *DAT_100aa1b0;
extern short DAT_100aa1b8;
extern int DAT_100aa1f0;
extern int DAT_100aa1f4;
extern unsigned int DAT_100aa1f8;
extern unsigned int DAT_100aa1fc;
extern unsigned int DAT_100aa200;
extern unsigned int DAT_100aa204;
extern int *DAT_100aa208;
extern int DAT_100aa20c;
extern int DAT_100aa210;
extern int DAT_100aa214;
extern int DAT_100b38fc;
extern int DAT_100b3900;
extern int DAT_101eb518;

extern char s_StartExternalIO____No_DirectPlay_100aa300[];
extern char s_StartExternalIO___No_DPlay_servi_100aa32c[];
extern char s_StartExternalIO___DirectPlayCrea_100aa35c[];
extern char s_StartExternalIO___DPlay_Open_CRE_100aa38c[];
extern char s_Master_Mech_Player_100aa3c0[];
extern char s_StartExternalIO___Searching_for_s_100aa3d4[];
extern char s_StartExternalIO___DPlay_Open_OPE_100aa400[];
extern char s_Slave_Mech2_Player_100aa434[];
extern char s_StartExternalIO___DPlay_CreatePl_100aa448[];
extern char s_StartExternalIO___Located__d_of___100aa478[];

extern void __cdecl FUN_10002168(const char *param_1, ...);
extern void __cdecl FUN_100140da(void);
extern int __cdecl FUN_10065d78(void);
extern int __cdecl FUN_10065e16(void);
extern int __cdecl FUN_10013b3d(unsigned int *param_1);
extern short __cdecl FUN_1007069f(void);
extern int __cdecl FUN_10013b09(void);
extern void __cdecl FUN_10013a57(void);
/* Ordinals: DirectPlayEnumerate / DirectPlayCreate (real APIs are __stdcall) */
extern int __stdcall Ordinal_2(void *param_1, int param_2);
extern int __stdcall Ordinal_1(int param_1, int **param_2, int param_3);

typedef int (__stdcall *DPOpenFn)(int *, unsigned int *);
typedef int (__stdcall *DPCreatePlayerFn)(int *, int *, char *, char *, int);
typedef int (__stdcall *DPEnumFn)(int *, int, void *, int, int);

unsigned int __cdecl FUN_10013be9(int *param_1)
{
    char cVar1;
    short sVar2;
    unsigned int uVar3;
    int iVar4;
    unsigned int uVar5;
    unsigned int uVar6;
    char *pcVar7;
    unsigned int *puVar8;
    char *pcVar9;
    int local_98;
    unsigned int local_94[31];
    unsigned int local_18;
    unsigned int local_14;
    unsigned int local_10;
    unsigned int local_c;
    unsigned int local_8;
    DPOpenFn pfnOpen;
    DPCreatePlayerFn pfnCreatePlayer;
    DPEnumFn pfnEnum;

    local_18 = DAT_100aa1f8;
    local_14 = DAT_100aa1fc;
    local_10 = DAT_100aa200;
    local_c = DAT_100aa204;
    local_8 = 1;
    (void)local_18;
    (void)local_14;
    (void)local_10;
    (void)local_c;
    (void)local_8;
    if (param_1 == (int *)0) {
        Ordinal_2((void *)FUN_10013b09, 0);
        if (DAT_100aa214 == 0) {
            FUN_10002168(s_StartExternalIO___No_DPlay_servi_100aa32c);
            uVar3 = 0;
        }
        else {
            Ordinal_1(DAT_100aa214, &DAT_100aa208, 0);
            if (DAT_100aa208 == (int *)0) {
                FUN_10002168(s_StartExternalIO___DirectPlayCrea_100aa35c);
                uVar3 = 0;
            }
            else {
                puVar8 = local_94;
                for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *puVar8 = 0;
                    puVar8 = puVar8 + 1;
                }
                local_94[0] = 0x7c;
                local_94[6] = 8;
                local_94[1] = DAT_100aa1f8;
                local_94[2] = DAT_100aa1fc;
                local_94[3] = DAT_100aa200;
                local_94[4] = DAT_100aa204;
                uVar5 = 0xffffffff;
                pcVar7 = DAT_100aa1b0;
                do {
                    pcVar9 = pcVar7;
                    if (uVar5 == 0) break;
                    uVar5 = uVar5 - 1;
                    pcVar9 = pcVar7 + 1;
                    cVar1 = *pcVar7;
                    pcVar7 = pcVar9;
                } while (cVar1 != '\0');
                uVar5 = ~uVar5;
                pcVar7 = pcVar9 + -uVar5;
                pcVar9 = (char *)&local_94[9];
                for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(unsigned int *)pcVar9 = *(unsigned int *)pcVar7;
                    pcVar7 = pcVar7 + 4;
                    pcVar9 = pcVar9 + 4;
                }
                for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *pcVar9 = *pcVar7;
                    pcVar7 = pcVar7 + 1;
                    pcVar9 = pcVar9 + 1;
                }
                if (DAT_100aa1f4 == 1) {
                    local_94[8] = 2;
                    pfnOpen = *(DPOpenFn *)(*DAT_100aa208 + 0x50);
                    iVar4 = pfnOpen(DAT_100aa208, local_94);
                    if (iVar4 == 0) {
                        pfnCreatePlayer = *(DPCreatePlayerFn *)(*DAT_100aa208 + 0x14);
                        local_98 = pfnCreatePlayer(DAT_100aa208, &DAT_100aa20c, DAT_100aa1b0,
                                                   s_Master_Mech_Player_100aa3c0, 0);
LAB_10013ea0:
                        if (local_98 == 0) {
                            do {
                                if (DAT_100aa1ac <= DAT_101eb518) {
                                    DAT_100aa1f0 = 1;
                                    FUN_100140da();
                                    DAT_100b38fc = FUN_10065d78();
                                    DAT_100b3900 = FUN_10065e16();
                                    return 1;
                                }
                                if (DAT_100aa208 != (int *)0) {
                                    DAT_100aa210 = DAT_100aa20c;
                                    DAT_101eb518 = 0;
                                    pfnEnum = *(DPEnumFn *)(*DAT_100aa208 + 0x34);
                                    pfnEnum(DAT_100aa208, 500, (void *)FUN_10013a57, 0, 0);
                                }
                                FUN_10002168(s_StartExternalIO___Located__d_of___100aa478);
                                sVar2 = FUN_1007069f();
                            } while (sVar2 != 0x1b);
                            uVar3 = 0;
                        }
                        else {
                            FUN_10002168(s_StartExternalIO___DPlay_CreatePl_100aa448);
                            uVar3 = 0;
                        }
                    }
                    else {
                        FUN_10002168(s_StartExternalIO___DPlay_Open_CRE_100aa38c);
                        uVar3 = 0;
                    }
                }
                else {
                    FUN_10002168(s_StartExternalIO___Searching_for_s_100aa3d4);
                    do {
                        iVar4 = FUN_10013b3d(local_94);
                        if (iVar4 != 0) {
                            local_94[8] = 1;
                            pfnOpen = *(DPOpenFn *)(*DAT_100aa208 + 0x50);
                            iVar4 = pfnOpen(DAT_100aa208, local_94);
                            if (iVar4 != 0) {
                                FUN_10002168(s_StartExternalIO___DPlay_Open_OPE_100aa400);
                                return 0;
                            }
                            pfnCreatePlayer = *(DPCreatePlayerFn *)(*DAT_100aa208 + 0x14);
                            local_98 = pfnCreatePlayer(DAT_100aa208, &DAT_100aa20c, DAT_100aa1b0,
                                                       s_Slave_Mech2_Player_100aa434, 0);
                            goto LAB_10013ea0;
                        }
                        sVar2 = FUN_1007069f();
                    } while (sVar2 != 0x1b);
                    uVar3 = 0;
                }
            }
        }
    }
    else {
        DAT_100aa1b8 = 1;
        DAT_100aa208 = (int *)*param_1;
        if (DAT_100aa208 == (int *)0) {
            FUN_10002168(s_StartExternalIO____No_DirectPlay_100aa300);
            uVar3 = 0;
        }
        else {
            DAT_100aa20c = param_1[1];
            DAT_100aa1f0 = 1;
            DAT_100aa210 = DAT_100aa20c;
            FUN_100140da();
            DAT_100b38fc = FUN_10065d78();
            DAT_100b3900 = FUN_10065e16();
            uVar3 = 1;
        }
    }
    return uVar3;
}
