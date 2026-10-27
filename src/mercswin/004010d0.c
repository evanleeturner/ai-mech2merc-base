/* SPDX-License-Identifier: MIT */
/* mercswin 004010d0 */
void __stdcall _memcpy(void *dst, const void *src, unsigned int len);

void __stdcall FUN_004010d0(void)
{
    _memcpy((void *)0xb0000, (void *)0xb00a0, 0xf00);
    return;
}
