/* SPDX-License-Identifier: MIT */
/* mercsw 100139e1 */
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_100aa1cc;
extern int DAT_10165922;
extern char DAT_100aa2c4[];

int _sprintf(char *dst, const char *fmt, ...);
void FUN_1005be24(const char *msg, int p2, int p3, int p4);

void __cdecl FUN_100139e1(int param_1, int param_2)
{
    char local_54[80];

    if (param_2 != DAT_100adf38) {
        _sprintf(local_54, DAT_100aa2c4, DAT_100eef40[param_2] + 0x110);
        FUN_1005be24(local_54, 1, 0x712, 0x50);
        DAT_10165922 = param_2;
        if (DAT_100aa1cc == 0) {
            DAT_100aa1cc = 1;
        }
    }
    return;
}
