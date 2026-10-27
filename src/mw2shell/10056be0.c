/* SPDX-License-Identifier: MIT */
/* mw2shell 10056be0 */
extern void _rand(void);
extern long long __ftol(void);

long long __stdcall FUN_10056be0(void)
{
    long long lVar1;
    
    _rand();
    lVar1 = __ftol();
    return lVar1;
}
