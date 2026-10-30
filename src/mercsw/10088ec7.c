/* SPDX-License-Identifier: MIT */
/* mercsw 10088ec7 */
extern int DAT_100c0f64;
extern char DAT_100c8508[];
extern int DAT_100b9d4c;
extern HWND DAT_100adf6c;
extern char s_Mouse_100c27a4[];
extern char s_The_input_device___s__does_not_e_100c27ac[];
extern char s_The_input_channel___s__on_device_100c28d8[];
extern char s_The_input_device___s__is_not_con_100c29c8[];
extern char s_An_input_device_has_caused_an_un_100c2b20[];
extern char s_Mercenaries_Message_100c2bcc[];

int __cdecl _sprintf(char *, const char *, ...);
void __cdecl FUN_1005dd5a(char *code);
void __cdecl FUN_10010a8e(void);
void __cdecl _exit(int);
int __stdcall ShowWindow(HWND hWnd, int nCmdShow);
int __stdcall MessageBoxA(HWND hWnd, const char *lpText, const char *lpCaption, unsigned int uType);

/* Unresolved: param_2 is typed undefined4 in the decompile, but it is passed to a "%s"
   format in the 0x6f case, so it is really a char *. It is kept as unsigned int, as in the decompile.
   ShowCursor appears in the callee list, but it is only in the unreachable blocks
   Ghidra removed (0x10089038 and 0x10089048), so it is not emitted. */
void __cdecl FUN_10088ec7(int code, unsigned int param_2, char *param_3)
{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    int bVar4;

    if (DAT_100c0f64 == 0) {
        DAT_100c0f64 = 1;
        iVar1 = 6;
        bVar4 = 1;
        pcVar2 = s_Mouse_100c27a4;
        pcVar3 = param_3;
        do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = (*pcVar2 == *pcVar3);
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
        } while (bVar4);
        if (!bVar4) {
            if (code == 0x6e) {
                _sprintf(DAT_100c8508, s_The_input_device___s__does_not_e_100c27ac, param_3, param_3);
            }
            else if (code == 0x6f) {
                _sprintf(DAT_100c8508, s_The_input_channel___s__on_device_100c28d8, param_2, param_3);
            }
            else if (code == 0x70) {
                _sprintf(DAT_100c8508, s_The_input_device___s__is_not_con_100c29c8, param_3, param_3);
            }
            else {
                _sprintf(DAT_100c8508, s_An_input_device_has_caused_an_un_100c2b20);
            }
            FUN_1005dd5a(DAT_100c8508);
            if (DAT_100b9d4c == 1) {
                ShowWindow(DAT_100adf6c, 7);
            }
            iVar1 = MessageBoxA(DAT_100adf6c, DAT_100c8508, s_Mercenaries_Message_100c2bcc, 0x41);
            if (iVar1 == 2) {
                FUN_10010a8e();
                _exit(code);
            }
            if (DAT_100b9d4c == 1) {
                ShowWindow(DAT_100adf6c, 9);
            }
        }
    }
    return;
}
