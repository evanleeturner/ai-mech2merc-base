/* SPDX-License-Identifier: MIT */
/* mercsw 1000d875 */
extern unsigned char DAT_101f64a0[];
extern unsigned char DAT_101f64ad[];
extern unsigned char DAT_101f64b8[];
extern unsigned char DAT_101f64c0[];
extern unsigned char DAT_100ef030[];
extern int DAT_100a75e4;
extern int DAT_100af17c;
extern int *PTR_DAT_100af0d0;
extern int DAT_100eeed0;
extern int DAT_100eeed4;
extern unsigned int DAT_100eeed8;

extern unsigned char __cdecl FUN_1007bdc0(void);
extern unsigned short __cdecl FUN_1001ca17(unsigned short *);
extern unsigned short * __cdecl FUN_1008668b(int, unsigned int, int *);
extern int __cdecl FUN_1001e8a8(int, int *, unsigned short);
extern void __cdecl FUN_10068d4e(unsigned int, unsigned int, unsigned int);
extern void __cdecl FUN_10068db6(unsigned int);
extern unsigned short * __cdecl FUN_10068dc9(int, int *, int, int);
extern void __cdecl FUN_1008664f(unsigned int, int *);
extern void __cdecl FUN_100895ca(int *, int *, int *);
extern void __cdecl FUN_1001b7cd(unsigned short *, int *);
extern void __cdecl FUN_1001ca37(unsigned int, short);
extern void __cdecl FUN_1001ca62(unsigned int, short);
extern void __cdecl FUN_100141c0(unsigned short *, unsigned int);
extern void __cdecl FUN_1003da99(unsigned short *);
extern void __cdecl FUN_1002f272(unsigned int, unsigned int);
extern void __cdecl FUN_1001d5e1(unsigned int, unsigned int);
extern void __cdecl FUN_1002f3d4(unsigned int, int *);
extern void __cdecl FUN_1002fbc0(int *);
extern void __cdecl FUN_1002f668(unsigned int, unsigned int, unsigned int, unsigned int, int);
extern void __cdecl FUN_1002f37a(unsigned int, unsigned int, unsigned int, unsigned int);
extern void __cdecl FUN_1002f90b(unsigned int, unsigned int);
extern void __cdecl FUN_1002f969(unsigned int, unsigned int);
extern void __cdecl FUN_1002f9c7(unsigned int, unsigned int);
extern void __cdecl FUN_10025270(unsigned int);

unsigned int __cdecl FUN_1000d875(int param_1, int param_2)
{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned short *puVar5;
  int local_4c[12];
  unsigned int *local_1c;
  unsigned int local_18;
  int local_14;
  unsigned short *local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  iVar4 = (int)((unsigned int)param_1 * 0x7c);
  local_1c = (unsigned int *)(DAT_101f64a0 + iVar4);
  if ((DAT_101f64ad[iVar4] & 8) != 0) {
    return 0;
  }
  if (*local_1c != 0xffffffff) {
    local_c = *(int *)(DAT_101f64b8 + iVar4);
    if (((local_c == -1) ||
         ((((int)*(short *)(DAT_100ef030 + (int)((unsigned int)local_c * 0x40))) & 0x8000U) == 0)) ||
        ((DAT_100a75e4 != 0 && ((bVar1 = FUN_1007bdc0()), (unsigned int)bVar1 == 0)))) {
      if ((local_1c[7] != 0) &&
          (uVar2 = FUN_1001ca17((unsigned short *)local_1c[7]), (uVar2 & 0x400) == 0)) {
        return 1;
      }
      local_10 = FUN_1008668b(DAT_100af17c, *local_1c, PTR_DAT_100af0d0);
      if (local_10 == (unsigned short *)0) {
        uVar3 = 0;
      }
      else {
        iVar4 = FUN_1001e8a8(DAT_100af17c, PTR_DAT_100af0d0, (unsigned short)*local_1c);
        FUN_10068d4e(local_1c[9], local_1c[10], local_1c[0xb]);
        FUN_10068db6(local_1c[3] & 0x1ff);
        local_14 = 0;
        if (-1 < (int)local_1c[2]) {
          local_14 = *(int *)(DAT_101f64c0 + (int)(local_1c[2] * 0x7c));
        }
        if (local_1c[6] != 0xffffffff) {
          DAT_100eeed0 = 1;
          DAT_100eeed4 = 0x200;
          DAT_100eeed8 = local_1c[6];
        }
        puVar5 = FUN_10068dc9((int)local_10, &local_8, iVar4, local_14);
        local_1c[7] = (unsigned int)puVar5;
        DAT_100eeed0 = 0;
        FUN_1008664f(*local_1c, PTR_DAT_100af0d0);
        if (local_1c[7] == 0) {
          uVar3 = 0;
        }
        else {
          local_18 = (local_1c[3] & 0xf000) >> 0xc;
          if (local_1c[2] == 0xfffffffe) {
            FUN_100895ca((int *)((unsigned int)param_2 * 0x7c + 0x101f5568), (int *)(local_1c + 0x12), local_4c);
            FUN_1001b7cd((unsigned short *)local_1c[7], local_4c);
            local_1c[8] = 0;
            if ((*(unsigned char *)((int)local_1c + 0xd) & 4) == 0) {
              FUN_1001ca37(local_1c[7], (short)local_1c[4]);
              FUN_1001ca62(local_1c[7], (short)param_1);
            }
            else {
              FUN_1001ca37(local_1c[7], (short)local_1c[4]);
              FUN_1001ca62(local_1c[7], (short)local_1c[6]);
            }
            FUN_100141c0((unsigned short *)local_1c[7], local_18);
            FUN_1003da99((unsigned short *)local_1c[7]);
          }
          else {
            if (local_1c[8] == 0) {
              return 0;
            }
            FUN_1002f272(local_1c[8], local_1c[7]);
            FUN_1001d5e1(local_1c[7], local_1c[8]);
            FUN_1003da99((unsigned short *)local_1c[7]);
            if (local_1c[2] == 0xffffffff) {
              FUN_100895ca((int *)((unsigned int)param_2 * 0x7c + 0x101f5568), (int *)(local_1c + 0x12), local_4c);
              FUN_1002f3d4(local_1c[8], local_4c);
              FUN_1002fbc0((int *)local_1c[8]);
            }
            else {
              FUN_1002f668(local_1c[8], local_1c[0xc], local_1c[0xd], local_1c[0xe], 0);
              FUN_1002f37a(local_1c[8], local_1c[0xf], local_1c[0x10], local_1c[0x11]);
              FUN_1002fbc0((int *)local_1c[8]);
            }
            if ((*(unsigned char *)((int)local_1c + 0xd) & 4) == 0) {
              FUN_1001ca37(local_1c[7], (short)local_1c[4]);
              FUN_1001ca62(local_1c[7], (short)param_1);
            }
            else {
              FUN_1002f90b(local_1c[8], local_1c[4]);
              FUN_1002f969(local_1c[8], local_1c[6]);
            }
            FUN_1002f9c7(local_1c[8], local_18);
          }
          if (local_18 == 5) {
            FUN_10025270(local_1c[7]);
          }
          uVar3 = 1;
        }
      }
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}
