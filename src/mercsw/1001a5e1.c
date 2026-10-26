/* SPDX-License-Identifier: MIT */
/* mercsw 1001a5e1 */
extern int DAT_100ab318;
extern int DAT_100ab098;
extern int DAT_100ab088;

void __cdecl FUN_1001a5e1(int param_1)
{
    if (DAT_100ab318 != 0) {
        if (DAT_100ab098 == -1) {
            DAT_100ab098 = 1;
        }
        param_1 = DAT_100ab098;
    }
    DAT_100ab088 = param_1;
}
