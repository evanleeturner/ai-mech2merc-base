/* SPDX-License-Identifier: MIT */
/* mw2shell 1005ab30 */
extern unsigned short s_MW2DIF_CFG_100a50b0[];
extern unsigned short DAT_100a50ac[];
extern char DAT_100a6848[];

void *__cdecl __wfopen(unsigned short *filename, unsigned short *mode);
unsigned int __cdecl _fread(void *buffer, unsigned int size, unsigned int count, void *stream);
int __cdecl _fclose(void *stream);

void __stdcall ReadMw2DifCfgFile(void)
{
    void *_File;
    
    _File = __wfopen(s_MW2DIF_CFG_100a50b0, DAT_100a50ac);
    if (_File != (void *)0x0) {
        _fread(&DAT_100a6848, 0x17, 1, _File);
        _fclose(_File);
    }
    return;
}
