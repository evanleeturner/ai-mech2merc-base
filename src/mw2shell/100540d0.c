/* SPDX-License-Identifier: MIT */
/* mw2shell 100540d0 */
extern int DAT_1009c558;
extern int _DAT_1009c68c;
extern unsigned char *PTR_DAT_1009c690;
extern char s_giddiwin__s_cpc_1009fea0[];
extern char DAT_1009feb0[];
extern char DAT_100bd950[];
extern char DAT_100bfed8[];
extern char DAT_100beeb8[];
extern unsigned int DAT_100bdf90[];

int __cdecl EntryAddress120_Likely(int param_1);
int __cdecl _sprintf(char *param_1, const char *param_2, ...);
void * __cdecl FID_conflict___wfopen(const char *param_1, const char *param_2);
unsigned int __cdecl _fread(void *param_1, unsigned int param_2, unsigned int param_3, void *param_4);
int __cdecl _fclose(void *param_1);
void __cdecl RemapEntryIndicesByName_Likely(int param_1);

void __stdcall FUN_100540d0(void)
{
    int iVar2;
    void *_File;
    int iVar3;
    int iVar4;
    int iVar6;
    int local_20[8];
    int *src;
    int *dst;
    unsigned int *puVar5;
    unsigned int *puVar7;

    iVar2 = EntryAddress120_Likely(DAT_1009c558);
    _sprintf((char *)local_20, s_giddiwin__s_cpc_1009fea0, (int)((unsigned int)iVar2 + 0x50u));
    _File = FID_conflict___wfopen((char *)local_20, DAT_1009feb0);
    if (_File != (void *)0) {
        _fread(DAT_100bd950, 0x40, 1, _File);
        _fread(DAT_100bfed8, 0x10, 0x10, _File);
        _fread(DAT_100beeb8, 0xde0, 1, _File);
        _fclose(_File);
        RemapEntryIndicesByName_Likely((int)DAT_100beeb8);
        local_20[0] = 0;
        do {
            iVar4 = 0;
            iVar2 = 0;
            do {
                src = (int *)(DAT_100beeb8 + (local_20[0] + iVar4) * 0x18);
                if (DAT_1009c558 == src[1]) {
                    iVar6 = 0;
                    iVar3 = iVar2;
LAB_1005419b:
                    dst = (int *)((char *)DAT_100bdf90 + iVar3);
                    if (((((dst[1] != src[1]) || (src[0] != dst[0])) || (src[2] != dst[2]))
                         || ((src[4] != dst[4] || (src[5] != dst[5])))) || (src[3] != dst[3])) {
                        if (-1 < dst[1]) goto code_r0x100541f5;
                        puVar5 = (unsigned int *)src;
                        puVar7 = DAT_100bdf90 + (iVar6 * 0x25 + iVar4) * 6;
                        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                            *puVar7 = *puVar5;
                            puVar5 = puVar5 + 1;
                            puVar7 = puVar7 + 1;
                        }
                    }
                }
LAB_10054222:
                iVar2 = iVar2 + 0x18;
                iVar4 = iVar4 + 1;
            } while (iVar2 < 0x378);
            local_20[0] = local_20[0] + 0x25;
        } while (local_20[0] < 0x94);
        _DAT_1009c68c = 0;
        PTR_DAT_1009c690 = (unsigned char *)DAT_100bdf90;
    }
    return;
code_r0x100541f5:
    iVar3 = (int)((unsigned int)iVar3 + 0x378u);
    iVar6 = iVar6 + 1;
    if (3 < iVar6) goto LAB_10054222;
    goto LAB_1005419b;
}
