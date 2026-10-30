/* SPDX-License-Identifier: MIT */
/* mercsw 100696b1 */
extern int DAT_100eeed0;
extern int DAT_100eeed4;
extern int DAT_100eeed8;
extern int DAT_100eef40;
extern int DAT_101600ec;
extern int DAT_100b39b0;
extern int DAT_100b39c0;
extern int DAT_100ef03c;
extern int DAT_100c7fb0;
extern int DAT_100b39a8;

uint __cdecl FUN_100696b1(uint param_1)
{
  int local_c;
  
  local_c = 0;
  if (DAT_100eeed0 != 0) {
    if (((((char)param_1 == '\0') || ((char)param_1 == '\x02')) || ((char)param_1 == '\x04')) ||
       ((((char)param_1 == '\x06' || ((char)param_1 == '\b')) || ((char)param_1 == '\n')))) {
      if (DAT_100eeed4 != 0x100) {
        return param_1;
      }
      local_c = *(int *)(&DAT_101600ec + *(int *)((&DAT_100eef40)[DAT_100eeed8] + 8) * 0x3c);
      if (local_c < 1) {
        local_c = 0;
      }
      else if (7 < local_c) {
        local_c = 7;
      }
      if ((local_c != 1) && (local_c != 0)) {
        return ((uint)(unsigned char)(&DAT_100b39b0)[*(int *)(&DAT_100b39c0 + local_c * 4)] |
               (param_1 & 0xff00)) + ((param_1 & 0xfe) >> 1);
      }
      return param_1 + local_c;
    }
    if ((char)param_1 == '?') {
      if (DAT_100eeed4 == 0x100) {
        local_c = *(int *)(&DAT_101600ec + *(int *)((&DAT_100eef40)[DAT_100eeed8] + 8) * 0x3c);
      }
      else if (*(int *)(&DAT_100ef03c + DAT_100eeed8 * 0x40) != -1) {
        local_c = *(int *)(&DAT_100ef03c + DAT_100eeed8 * 0x40);
      }
      return param_1 + local_c;
    }
  }
  if ((((param_1 & 0x8000) != 0) && (param_1 = param_1 & 0x7fff, DAT_100c7fb0 != 0)) &&
     (param_1 <= (uint)DAT_100b39a8)) {
    param_1 = *(uint *)(DAT_100c7fb0 + param_1 * 4);
  }
  return param_1;
}
