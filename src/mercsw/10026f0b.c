/* SPDX-License-Identifier: MIT */
/* mercsw 10026f0b */
extern int DAT_100adf38;
extern int DAT_100eee64;
extern short DAT_1016a6c8;
extern int DAT_100ad0a8;
extern int DAT_100eef40[];
extern void (__cdecl *PTR_FUN_100ad340[])(int *, short);

void __cdecl FUN_10028a85(void);
int __cdecl FUN_1004d47f(int param_1);
void __cdecl FUN_1002bd38(int param_1);
int __cdecl FUN_1004d5e3(int param_1);
void __cdecl FUN_1002a9bb(int param_1, unsigned int param_2);
void __cdecl FUN_10023258(int param_1, unsigned int *param_2);
int __cdecl FUN_10027088(int param_1);
void __cdecl FUN_1002950f(int param_1, short param_2);
void __cdecl FUN_10027c05(int *param_1);

void __cdecl FUN_10026f0b(int *param_1)
{
    int iVar1;
    unsigned int local_8;

    if (param_1[4] != 1) {
        if ((param_1[1] == DAT_100adf38) && (DAT_100eee64 != 0)) {
            FUN_10028a85();
        }
        if (param_1[1] == 0) {
            DAT_1016a6c8 = 0;
        }
        if (*(short *)((int)param_1 + 0x176) != 0xc) {
            iVar1 = FUN_1004d47f(param_1[2]);
            if (iVar1 == param_1[1]) {
                FUN_1002bd38(param_1[2]);
            }
            if (param_1[4] == 2) {
                iVar1 = FUN_10027088((int)param_1);
                if (iVar1 == 0) {
                    PTR_FUN_100ad340[*(short *)((int)param_1 + 0x176)](param_1, (short)param_1[0x5e]);
                }
                FUN_1002950f((int)param_1, *(short *)((int)param_1 + 0x17a));
                FUN_10027c05(param_1);
            } else {
                if ((*(int *)(param_1[8] + 0x3d8) != 0) && (param_1[0x1f] != -1) &&
                    (iVar1 = FUN_1004d5e3(param_1[0x1f]), iVar1 == 1)) {
                    FUN_1002a9bb(param_1[1], *(unsigned int *)(DAT_100eef40[param_1[0x1f]] + 4));
                }
                if (DAT_100ad0a8 != 0) {
                    FUN_10023258((int)param_1, &local_8);
                }
            }
        }
    }
    return;
}
