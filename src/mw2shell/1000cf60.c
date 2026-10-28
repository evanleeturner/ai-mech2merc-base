/* SPDX-License-Identifier: MIT */
/* mw2shell 1000cf60 */
extern void * __cdecl __wfopen(const char *filename, const char *mode);
extern unsigned int __cdecl _fread(void *ptr, unsigned int size, unsigned int nmemb, void *stream);
extern int __cdecl _fclose(void *stream);

extern const char s_mw2rmg_cfg_1008d078[];
extern const char DAT_1008d074[];

int __cdecl FUN_1000cf60(void *dstBuf)
{
  void *_File;
  
  _File = __wfopen(s_mw2rmg_cfg_1008d078, DAT_1008d074);
  if (_File != 0) {
    _fread(dstBuf, 0xf3, 1, _File);
    _fclose(_File);
    return 1;
  }
  return 0;
}
