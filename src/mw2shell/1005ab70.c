/* SPDX-License-Identifier: MIT */
/* mw2shell 1005ab70 */
extern void *__cdecl __wfopen(const void *filename, const void *mode);
extern int __cdecl _fread(void *ptr, int size, int count, void *stream);
extern int __cdecl _fclose(void *stream);

extern const char s_MW2DIF_CFG_100a50c0[];
extern const char DAT_100a50bc[];
extern undefined4 DAT_100a6848;

void __stdcall FUN_1005ab70(void)
{
    void *_File;
    
    _File = __wfopen(s_MW2DIF_CFG_100a50c0, DAT_100a50bc);
    if (_File != (void *)0x0) {
        _fread(&DAT_100a6848, 0x17, 1, _File);
        _fclose(_File);
    }
    return;
}
