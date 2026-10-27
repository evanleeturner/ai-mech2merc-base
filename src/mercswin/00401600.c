/* SPDX-License-Identifier: MIT */
/* mercswin 00401600 */
HWND __stdcall FindWindowA(const char *lpClassName, const char *lpWindowName);

extern const char s_Mercenaries_004081bc[];

bool __stdcall FUN_00401600(void)
{
    HWND hVar1;
    
    hVar1 = FindWindowA(s_Mercenaries_004081bc, s_Mercenaries_004081bc);
    if (hVar1 != 0) {
        return 1;
    }
    hVar1 = FindWindowA(s_Mercenaries_004081bc, s_Mercenaries_004081bc);
    return (hVar1 != 0);
}
