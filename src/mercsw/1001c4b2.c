/* SPDX-License-Identifier: MIT */
/* mercsw 1001c4b2 */
void __cdecl SetCurrentNode(int param_1, int param_2);

void __cdecl FUN_1001c4b2(int param_1, int param_2)
{
    int *local_8;

    local_8 = *(int **)(param_1 + 0x1c);
    while (1) {
        if (local_8 == (int *)0) {
            return;
        }
        if (*local_8 <= param_2) {
            break;
        }
        local_8 = (int *)local_8[3];
    }
    SetCurrentNode(param_1, (int)local_8);
    return;
}
