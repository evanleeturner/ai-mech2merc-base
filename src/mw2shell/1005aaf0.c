/* SPDX-License-Identifier: MIT */
/* mw2shell 1005aaf0 */
extern unsigned short s_MW2SND_CFG_100a50a0[];
extern unsigned short DAT_100a509c[];
extern char DAT_100a67f0[];

void *__cdecl __wfopen(unsigned short *filename, unsigned short *mode);
unsigned int __cdecl _fread(void *buffer, unsigned int size, unsigned int count, void *stream);
int __cdecl _fclose(void *stream);

void __stdcall ReadMw2SndCfgFile(void)
{
    void *_File;
    
    _File = __wfopen(s_MW2SND_CFG_100a50a0, DAT_100a509c);
    if (_File != (void *)0x0) {
        _fread(&DAT_100a67f0, 0x54, 1, _File);
        _fclose(_File);
    }
    return;
}
