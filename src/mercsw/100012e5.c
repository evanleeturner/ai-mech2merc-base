/* SPDX-License-Identifier: MIT */
/* mercsw 100012e5 */
extern int DAT_100c2dec;
extern unsigned char *PTR_DAT_100c2be0;
int __cdecl __isctype(int c, int mask);

char * __cdecl FUN_100012e5(char *param_1)
{
    int iVar1;
    char cVar2;
    unsigned int uVar3;
    char *pcVar4;
    unsigned int local_14;
    unsigned int local_c;
    int local_8;

    if (param_1 != (char *)0) {
        while (1) {
            if (DAT_100c2dec < 2) {
                local_c = *(unsigned short *)(PTR_DAT_100c2be0 + (int)(unsigned int)((int)*param_1 * 2)) & 8;
            }
            else {
                local_c = __isctype((int)*param_1, 8);
            }
            if (local_c == 0) break;
            param_1 = param_1 + 1;
        }
        uVar3 = 0xffffffff;
        pcVar4 = param_1;
        do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        iVar1 = (int)(~uVar3 - 1);
        do {
            local_8 = iVar1;
            iVar1 = (int)((unsigned int)local_8 - 1);
            if (local_8 < 1) break;
            if (DAT_100c2dec < 2) {
                local_14 = *(unsigned short *)(PTR_DAT_100c2be0 + (int)(unsigned int)((int)param_1[iVar1] * 2)) & 8;
            }
            else {
                local_14 = __isctype((int)param_1[iVar1], 8);
            }
        } while (local_14 != 0);
        param_1[local_8] = '\0';
    }
    return param_1;
}
