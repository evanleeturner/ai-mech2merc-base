/* SPDX-License-Identifier: MIT */
/* mw2shell 1001a730 */
extern int DAT_100a67a4;
extern int DAT_100a6798;
extern int DAT_1008f980;
extern int DAT_1008f964;
extern char s_userstar_bwd_1008fb74[];
extern char s_MW2DIF_CFG_1008fb88[];
extern char DAT_1008fb84[];
extern char s_en_02dstar_bwd_1008fb94[];

void __cdecl FUN_100366c0(void);
int __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FindListEntryByKey_Likely(int param_1, int param_2);
char * __cdecl FUN_1005bbb0(char *param_1);
int __cdecl _strncmp(const char *_Str1, const char *_Str2, unsigned int _MaxCount);
void __cdecl FUN_1001a480(char *param_1, char *param_2, char *param_3, int param_4,
                          int param_5, int param_6, int param_7, int param_8);
void __cdecl FUN_10036780(char *param_1);
void * __cdecl FID_conflict___wfopen(const char *param_1, const char *param_2);
unsigned int __cdecl _fread(void *_DstBuf, unsigned int _ElementSize, unsigned int _Count, void *_File);
int __cdecl _fclose(void *_File);
int __cdecl _sprintf(char *_Dest, const char *_Format, ...);

void __cdecl FUN_1001a730(int param_1, int param_2, int param_3, int *param_4)
{
    int iVar1;
    int iVar2;
    char *_Str2;
    char *_Str1;
    void *_File;
    int iVar3;
    char *pcVar4;
    int iVar5;
    int *piVar6;
    unsigned int _MaxCount;
    int local_30;
    int local_2c;
    unsigned char local_28[0x17];
    char local_10[16];

    local_2c = -1;
    if (0 < param_1) {
        iVar5 = 0;
        FUN_100366c0();
        local_30 = 0;
        pcVar4 = (char *)(param_2 + 4);
        do {
            if (-1 < *(int *)(pcVar4 + -4)) {
                iVar3 = 0;
                if (0 < *(int *)(DAT_100a67a4 + 4)) {
                    do {
                        iVar1 = FUN_10018060(DAT_100a67a4, iVar3);
                        if (*(int *)(iVar1 + 0x20) != -1) {
                            iVar2 = FindListEntryByKey_Likely(DAT_100a6798, *(int *)(iVar1 + 0x20));
                            _MaxCount = 8;
                            _Str2 = FUN_1005bbb0((char *)(iVar2 + 0x823));
                            _Str1 = FUN_1005bbb0(pcVar4);
                            iVar2 = _strncmp(_Str1, _Str2, _MaxCount);
                            if (iVar2 == 0) {
                                local_2c = *(int *)(iVar1 + 0x24);
                                break;
                            }
                        }
                        iVar3 = (int)((unsigned int)iVar3 + 1u);
                    } while (iVar3 < *(int *)(DAT_100a67a4 + 4));
                }
                FUN_1001a480(pcVar4, pcVar4 + 0x10, pcVar4 + 0x26, iVar5, 0, 0, local_2c, -1);
                local_30 = (int)((unsigned int)local_30 + 1u);
                if (param_1 <= local_30) break;
            }
            pcVar4 = pcVar4 + 0x40;
            iVar5 = (int)((unsigned int)iVar5 + 1u);
        } while (iVar5 < 3);
        FUN_10036780(s_userstar_bwd_1008fb74);
    }
    if (0 < param_3) {
        iVar5 = 1;
        do {
            iVar3 = DAT_1008f980;
            iVar1 = (int)((unsigned int)DAT_1008f980 - 2u);
            _File = FID_conflict___wfopen(s_MW2DIF_CFG_1008fb88, DAT_1008fb84);
            if (_File != (void *)0) {
                _fread(local_28, 0x17, 1, _File);
                _fclose(_File);
                if ((char)local_28[5] == '\0') {
                    iVar1 = (int)((unsigned int)iVar3 - 1u);
                }
                else if ((char)local_28[5] == '\x02') {
                    iVar1 = (int)((unsigned int)iVar3 - 3u);
                }
            }
            if (-1 < DAT_1008f964) {
                iVar1 = DAT_1008f964;
            }
            iVar3 = 0;
            FUN_100366c0();
            local_30 = 0;
            piVar6 = param_4;
            do {
                if (-1 < *piVar6) {
                    FUN_1001a480((char *)(piVar6 + 1), (char *)(piVar6 + 5),
                                 (char *)((int)piVar6 + 0x2a), iVar3, iVar5, iVar1, -1, -1);
                    local_30 = (int)((unsigned int)local_30 + 1u);
                    if (param_3 <= local_30) break;
                }
                piVar6 = piVar6 + 0x10;
                iVar3 = (int)((unsigned int)iVar3 + 1u);
            } while (iVar3 < 3);
            iVar3 = (int)((unsigned int)iVar5 + 1u);
            _sprintf(local_10, s_en_02dstar_bwd_1008fb94, iVar5);
            FUN_10036780(local_10);
            iVar5 = iVar3;
        } while (iVar3 < 6);
    }
    return;
}
