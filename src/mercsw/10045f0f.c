/* SPDX-License-Identifier: MIT */
/* mercsw 10045f0f */
extern void *_strncpy(void *, const char *, unsigned int);

void __cdecl FUN_10045f0f(int param_1, char *source)
{
    _strncpy((char *)(param_1 + 0x10), source, 0x20);
    *(char *)(param_1 + 0x2f) = 0;
    return;
}
