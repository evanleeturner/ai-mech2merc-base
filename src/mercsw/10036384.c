/* SPDX-License-Identifier: MIT */
/* mercsw 10036384 */
void __cdecl FUN_10036384(int param_1, int param_2)
{
    if ((param_1 != 0) && (param_2 != 0)) {
        *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 8);
    }
    return;
}
