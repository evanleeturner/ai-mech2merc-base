/* SPDX-License-Identifier: MIT */
/* mw2shell 1005abb0 */
extern void *__cdecl __wfopen(const void *filename, const void *mode);
extern int __cdecl _fread(void *ptr, int size, int count, void *stream);
extern int __cdecl _fclose(void *stream);

extern const char s_MW2SND_CFG_100a50d0[];
extern const char DAT_100a50cc[];
extern undefined4 DAT_100a67f0;

void __stdcall FUN_1005abb0(void)
{
    void *_File;
    
    _File = __wfopen(s_MW2SND_CFG_100a50d0, DAT_100a50cc);
    if (_File != (void *)0x0) {
        _fread(&DAT_100a67f0, 0x54, 1, _File);
        _fclose(_File);
    }
    return;
}
