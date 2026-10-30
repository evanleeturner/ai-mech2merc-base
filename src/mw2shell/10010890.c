/* SPDX-License-Identifier: MIT */
/* mw2shell 10010890 */
void AppendToCollection(int param_1, int param_2);

void __thiscall FUN_10010890(void *this, int param_1)
{
    int field_0x11;
    __builtin_memcpy(&field_0x11, (char *)this + 0x11, 4);
    AppendToCollection(field_0x11, param_1);
    return;
}
