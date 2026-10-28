/* SPDX-License-Identifier: MIT */
/* mercsw 1006a4bb */
extern int DAT_101f52c8[2];
extern int DAT_100eee64;

void __cdecl _sprintf(char *dst, const char *fmt, ...);
void __cdecl FUN_1005be24(char *param_1, int param_2, int param_3, int param_4);
void __cdecl FUN_1006a2a5(char *param_1);

void __cdecl FUN_1006a4bb(char *param_1, long param_2)
{
    char local_54[80];
    
    _sprintf(local_54, "%s  Res:%dx%d  Mem:%ld", param_1, DAT_101f52c8[0], DAT_101f52c8[1], param_2);
    FUN_1005be24(local_54, 0, 0x4f3, 0x50);
    if (DAT_100eee64 != 0) {
        _sprintf(local_54, "WarThink / MechWarrior II %s %ld", param_1, param_2);
        FUN_1006a2a5(local_54);
    }
    return;
}
