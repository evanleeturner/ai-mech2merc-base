/* SPDX-License-Identifier: MIT */
/* mercsw 1003cd85 */
extern int DAT_100aefc0;
extern int DAT_100af098;
extern int DAT_100af088;
extern int DAT_100af08c;
extern int DAT_100af090;
extern int DAT_100af094;

/* DAT_10160c00 / DAT_10160c04 overlap: same list, 4-byte stride, zero-terminated.
   DAT_10160c04[n] is the slot just after DAT_10160c00[n]. */
extern int DAT_10160c00[];
extern int DAT_10160c04[];

extern int DAT_10160e48;
extern int DAT_10160e50;
extern int DAT_10160e54;
extern int DAT_10160e58;
extern int DAT_10160e5c;
extern int DAT_10160e60;
extern int DAT_10160e64;
extern int DAT_10160e68;
extern int DAT_10160e70[4]; /* e70, e74, e78, e7c */

extern int DAT_100aefc8[]; /* pairs: x at +0 (0x100aefc8), y at +4 (0x100aefcc) */
extern int DAT_100aefe8[]; /* 0x100aefe8 / 0x100aefec */
extern int DAT_100af028[]; /* 0x100af028 / 0x100af02c */
extern int DAT_100af068[]; /* 0x100af068 / 0x100af06c */

extern unsigned char DAT_100c6d5c[];

void __cdecl FUN_1003cd85(int *param_1)
{
  unsigned int uVar1;
  unsigned int uVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int idx;

  local_18 = 0;
  if ((DAT_100aefc0 == 0) || (param_1 == (int *)0x0)) {
    DAT_10160c00[0] = DAT_100af098;
    DAT_10160c04[0] = 0;
  }
  else {
    local_c = (param_1[3] >> 0x10) % 0x168;
    if (local_c < 0) {
      local_c = (int)((unsigned int)local_c + 0x168u);
    }
    uVar1 = (unsigned int)(((int)((unsigned int)local_c + 0x16u) % 0x168) / 0x2d);
    uVar2 = (unsigned int)((int)uVar1 >> 0x1f);
    if (((((uVar1 ^ uVar2) - uVar2) & 1) ^ uVar2) == uVar2) {
      DAT_10160e70[2] = 3;
      DAT_10160e70[3] = 3;
    }
    else {
      DAT_10160e70[2] = 5;
      DAT_10160e70[3] = 2;
    }
    DAT_10160e70[1] = 4;
    DAT_10160e70[0] = 2;
    switch (uVar1) {
    case 0:
      DAT_10160e5c = 0;
      DAT_10160e50 = 0;
      DAT_10160e54 = 0;
      DAT_10160e58 = 1;
      break;
    case 1:
      DAT_10160e50 = 1;
      DAT_10160e54 = 1;
      DAT_10160e58 = 1;
      DAT_10160e5c = 1;
      break;
    case 2:
      DAT_10160e50 = 1;
      DAT_10160e54 = 2;
      DAT_10160e58 = 3;
      DAT_10160e5c = 1;
      break;
    case 3:
      DAT_10160e50 = 2;
      DAT_10160e54 = 3;
      DAT_10160e58 = 3;
      DAT_10160e5c = 2;
      break;
    case 4:
      DAT_10160e50 = 2;
      DAT_10160e54 = 4;
      DAT_10160e58 = 5;
      DAT_10160e5c = 2;
      break;
    case 5:
      DAT_10160e50 = 3;
      DAT_10160e54 = 5;
      DAT_10160e58 = 5;
      DAT_10160e5c = 3;
      break;
    case 6:
      DAT_10160e50 = 3;
      DAT_10160e54 = 6;
      DAT_10160e58 = 7;
      DAT_10160e5c = 3;
      break;
    default:
      DAT_10160e5c = 0;
      DAT_10160e50 = 0;
      DAT_10160e58 = 7;
      DAT_10160e54 = 7;
    }
    DAT_10160e60 = (int)((unsigned int)*param_1 + 150000u) / 25000;
    DAT_10160e68 = (int)((unsigned int)param_1[2] + 150000u) / 25000;
    DAT_10160e64 = 0;
    DAT_10160e48 = 0;
    while (DAT_10160e64 < 4) {
      switch (DAT_10160e64) {
      case 0:
        idx = (int)((unsigned int)DAT_10160e50 + (unsigned int)DAT_10160e48) % DAT_100af088;
        local_10 = (int)((unsigned int)DAT_100aefc8[(int)((unsigned int)idx * 2u)] + (unsigned int)DAT_10160e60);
        local_14 = (int)((unsigned int)DAT_100aefc8[(int)((unsigned int)idx * 2u + 1u)] + (unsigned int)DAT_10160e68);
        break;
      case 1:
        idx = (int)((unsigned int)DAT_10160e54 + (unsigned int)DAT_10160e48) % DAT_100af08c;
        local_10 = (int)((unsigned int)DAT_100aefe8[(int)((unsigned int)idx * 2u)] + (unsigned int)DAT_10160e60);
        local_14 = (int)((unsigned int)DAT_100aefe8[(int)((unsigned int)idx * 2u + 1u)] + (unsigned int)DAT_10160e68);
        break;
      case 2:
        idx = (int)((unsigned int)DAT_10160e58 + (unsigned int)DAT_10160e48) % DAT_100af090;
        local_10 = (int)((unsigned int)DAT_100af028[(int)((unsigned int)idx * 2u)] + (unsigned int)DAT_10160e60);
        local_14 = (int)((unsigned int)DAT_100af028[(int)((unsigned int)idx * 2u + 1u)] + (unsigned int)DAT_10160e68);
        break;
      case 3:
        idx = (int)((unsigned int)DAT_10160e5c + (unsigned int)DAT_10160e48) % DAT_100af094;
        local_10 = (int)((unsigned int)DAT_100af068[(int)((unsigned int)idx * 2u)] + (unsigned int)DAT_10160e60);
        local_14 = (int)((unsigned int)DAT_100af068[(int)((unsigned int)idx * 2u + 1u)] + (unsigned int)DAT_10160e68);
      }
      DAT_10160e48 = (int)((unsigned int)DAT_10160e48 + 1u);
      if (DAT_10160e70[DAT_10160e64] <= DAT_10160e48) {
        DAT_10160e48 = 0;
        DAT_10160e64 = (int)((unsigned int)DAT_10160e64 + 1u);
      }
      if ((((-1 < local_10) && (local_10 < 0xc)) && (-1 < local_14)) &&
          ((local_14 < 0xc &&
            (*(int *)(*(int *)(DAT_100c6d5c + (int)((unsigned int)local_14 * 0x18u + (unsigned int)local_10 * 0x120u)) + 8) != 0)))) {
        DAT_10160c00[local_18] = *(int *)(DAT_100c6d5c + (int)((unsigned int)local_14 * 0x18u + (unsigned int)local_10 * 0x120u));
        DAT_10160c04[local_18] = 0;
        local_18 = (int)((unsigned int)local_18 + 1u);
      }
    }
    if (*(int *)(*(int *)(DAT_100c6d5c + (int)((unsigned int)DAT_10160e68 * 0x18u + (unsigned int)DAT_10160e60 * 0x120u)) + 8) != 0) {
      DAT_10160c00[local_18] = *(int *)(DAT_100c6d5c + (int)((unsigned int)DAT_10160e68 * 0x18u + (unsigned int)DAT_10160e60 * 0x120u));
      DAT_10160c04[local_18] = 0;
    }
  }
  return;
}
