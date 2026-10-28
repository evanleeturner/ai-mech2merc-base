/* SPDX-License-Identifier: MIT */
/* mw2shell 10036780 */
extern int DAT_100b529c;
extern int DAT_10093c60;
extern char DAT_10093c84;
extern char DAT_100b5298;

void * __cdecl __wfopen(char *filename, char *mode);
int __cdecl _fread(void *dst, int size, int count, void *stream);
int __cdecl _fclose(void *stream);

void __cdecl FUN_10036780(char *param_1)
{
    void *_File;
    
    DAT_100b529c = DAT_10093c60;
    _File = __wfopen(param_1, &DAT_10093c84);
    if (_File != (void *)0x0) {
        _fread(&DAT_100b5298, 1, DAT_10093c60, _File);
        _fclose(_File);
    }
    return;
}
