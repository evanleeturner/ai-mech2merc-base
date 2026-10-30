/* SPDX-License-Identifier: MIT */
/* mercsw 10058c97 */
extern int pcRam100b12c5;
extern int iRam100b12c1;
extern char *pcRam100b12d1;
extern int pcRam100b12d5;
extern int pcRam100b12cd;
extern int iRam100b12c9;
extern int DAT_100b12e9;
extern int DAT_100b12f1;

int __cdecl FUN_10058c97(int param_1, int param_2, int param_3)
{
    int pcVar1;
    int pcVar2;
    int pcVar3;

    if (param_1 == 2) {
        if (pcRam100b12c5 != 0) {
            do {
                pcVar1 = pcRam100b12c5;
                if (0xfe < pcRam100b12c5) {
                    pcVar1 = 0xff;
                }
                pcRam100b12c5 = pcRam100b12c5 - pcVar1;
                if (iRam100b12c1 != 0) {
                    *pcRam100b12d1 = 1;
                    pcRam100b12d1[1] = (char)pcVar1;
                }
                pcRam100b12d1 = pcRam100b12d1 + 2;
                pcRam100b12d5 = pcRam100b12d5 + pcVar1;
            } while (pcRam100b12c5 != 0);
            pcRam100b12c5 = 0;
        }
        pcVar3 = pcRam100b12cd - param_2 - pcRam100b12d5;
        pcVar1 = pcRam100b12d5 + (param_3 - iRam100b12c9);
        if (pcVar1 < DAT_100b12e9) {
            DAT_100b12e9 = pcVar1;
        }
        pcVar2 = pcVar1 + pcVar3 - 1;
        if (pcVar1 + pcVar3 - 1 <= DAT_100b12f1) goto LAB_10058d67;
        for (; DAT_100b12f1 = pcVar2, pcVar3 != 0; pcVar3 = pcVar3 - pcVar1) {
LAB_10058d67:
            pcVar1 = pcVar3;
            if (0x7e < pcVar3) {
                pcVar1 = 0x7f;
            }
            if (iRam100b12c1 != 0) {
                *pcRam100b12d1 = (char)pcVar1 * 2;
                pcRam100b12d1[1] = *(char *)pcRam100b12d5;
            }
            pcRam100b12d1 = pcRam100b12d1 + 2;
            pcRam100b12d5 = pcRam100b12d5 + pcVar1;
            pcVar2 = DAT_100b12f1;
        }
    }
    else if (param_1 == 1) {
        if (pcRam100b12c5 != 0) {
            do {
                pcVar1 = pcRam100b12c5;
                if (0xfe < pcRam100b12c5) {
                    pcVar1 = 0xff;
                }
                pcRam100b12c5 = pcRam100b12c5 - pcVar1;
                if (iRam100b12c1 != 0) {
                    *pcRam100b12d1 = 1;
                    pcRam100b12d1[1] = (char)pcVar1;
                }
                pcRam100b12d1 = pcRam100b12d1 + 2;
                pcRam100b12d5 = pcRam100b12d5 + pcVar1;
            } while (pcRam100b12c5 != 0);
            pcRam100b12c5 = 0;
        }
        pcVar3 = pcRam100b12cd - param_2 - pcRam100b12d5;
        pcVar1 = pcRam100b12d5 + (param_3 - iRam100b12c9);
        if (pcVar1 < DAT_100b12e9) {
            DAT_100b12e9 = pcVar1;
        }
        pcVar2 = pcVar1 + pcVar3 - 1;
        if (pcVar1 + pcVar3 - 1 <= DAT_100b12f1) goto LAB_10058e0e;
        for (; DAT_100b12f1 = pcVar2, pcVar3 != 0; pcVar3 = pcVar3 - pcVar1) {
LAB_10058e0e:
            pcVar1 = pcVar3;
            if (0x7e < pcVar3) {
                pcVar1 = 0x7f;
            }
            if (iRam100b12c1 == 0) {
                pcRam100b12d5 = pcRam100b12d5 + pcVar1;
                pcRam100b12d1 = pcRam100b12d1 + (pcVar1 + 1);
            }
            else {
                *pcRam100b12d1 = (char)pcVar1 * 2 + 1;
                for (pcVar2 = pcVar1; pcRam100b12d1 = pcRam100b12d1 + 1, pcVar2 != 0;
                    pcVar2 = pcVar2 - 1) {
                    *pcRam100b12d1 = *(char *)pcRam100b12d5;
                    pcRam100b12d5 = pcRam100b12d5 + 1;
                }
            }
            pcVar2 = DAT_100b12f1;
        }
    }
    else if (param_1 == 3) {
        pcRam100b12c5 = pcRam100b12cd - param_2 - pcRam100b12d5;
    }
    else if (param_1 == 4) {
        if (iRam100b12c1 != 0) {
            *pcRam100b12d1 = 0;
        }
        pcRam100b12d1 = pcRam100b12d1 + 1;
    }
    else if (param_1 == 0) {
        pcRam100b12c5 = 0;
        pcRam100b12d5 = pcRam100b12cd;
    }
    return 0;
}
