/* SPDX-License-Identifier: MIT */
/* mercsw 10007f02 */
extern int DAT_100a5058;
extern void FUN_10007440(void *param_1, void *param_2, int param_3);

void __cdecl FUN_10007f02(int param_1)
{
    if ((-1 < param_1) && (param_1 < 3)) {
        FUN_10007440((void *)((char *)&DAT_100a5058 + param_1 * 0xc), (void *)0, -1);
    }
    return;
}
