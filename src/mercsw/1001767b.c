/* SPDX-License-Identifier: MIT */
/* mercsw 1001767b */
int __cdecl __isctype(int param_1, int param_2);
int __cdecl _tolower(int param_1);

extern char *PTR_DAT_100c2be0;
extern int DAT_100c2dec;

void __cdecl FUN_1001767b(int param_1, char *param_2)
{
    char cVar1;
    int iVar2;
    unsigned int uVar3;
    char *pcVar4;
    unsigned int local_10;
    int local_c;

    uVar3 = 0xffffffffu;
    pcVar4 = param_2;
    do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    for (local_c = 0; local_c < (int)(~uVar3 - 1); local_c = local_c + 1) {
        if (DAT_100c2dec < 2) {
            local_10 = *(unsigned short *)(PTR_DAT_100c2be0 + param_2[local_c] * 2) & 0x103;
        }
        else {
            local_10 = (unsigned int)__isctype((int)param_2[local_c], 0x103);
        }
        if (local_10 == 0) {
            *(char *)(local_c + param_1) = param_2[local_c];
        }
        else {
            iVar2 = _tolower((int)param_2[local_c]);
            *(char *)(local_c + param_1) = (char)iVar2;
        }
    }
    *(unsigned char *)(local_c + param_1) = 0;
    return;
}
