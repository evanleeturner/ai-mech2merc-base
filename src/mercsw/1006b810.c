/* SPDX-License-Identifier: MIT */
/* mercsw 1006b810 */
/* mercsw 1006b810: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100adf38;
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
size_t __cdecl _fwrite(void * _Str, size_t _Size, size_t _Count, FILE * _File);

undefined4 __cdecl FUN_1006b810(FILE * param_1, int * param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_2a8 [3];
  int aiStack_29c [6];
  ushort auStack_284 [142];
  int local_168;
  uint local_164 [28];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8 [50];
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_2 == (int *)0x0) || ((*(ushort *)((int)param_2 + 0x442) & 2) == 0)) {
    uVar2 = 0;
  }
  else {
    cVar1 = *(char *)(DAT_100adf34 + 5);
    if (cVar1 == '\0') {
      local_ec = 1;
      local_c = 3;
      local_dc = 4;
    }
    else if (cVar1 == '\x01') {
      local_ec = 3;
      local_c = 3;
      local_dc = 4;
    }
    else if (cVar1 == '\x02') {
      local_ec = 4;
      local_c = 4;
      local_dc = 4;
    }
    if ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38) {
      local_8 = local_dc;
    }
    else {
      iVar3 = FUN_1004d5e3(*(int *)(*param_2 + 4));
      if (iVar3 == 0) {
        local_8 = local_c;
      }
      else {
        local_8 = local_ec;
      }
    }
    for (local_e8 = 0; local_e8 < param_2[0xff]; local_e8 = local_e8 + 1) {
      iVar3 = param_2[0x17] + local_e8 * 0x1e;
      if (*(short *)(iVar3 + 2) < 1) {
        for (local_f0 = 0; local_f0 < 8; local_f0 = local_f0 + 1) {
          for (local_f4 = 0; local_f4 < 0xc; local_f4 = local_f4 + 1) {
            if ((uint)*(ushort *)(param_2[0x16] + local_f4 * 2 + 0xc + local_f0 * 0x28) ==
                (uint)((int)*(short *)(iVar3 + 4))) {
              for (local_168 = local_f4; local_168 < 0xb; local_168 = local_168 + 1) {
                *(undefined2 *)(param_2[0x16] + local_168 * 2 + 0xc + local_f0 * 0x28) =
                     *(undefined2 *)(local_168 * 2 + param_2[0x16] + 0xe + local_f0 * 0x28);
              }
              *(undefined2 *)(param_2[0x16] + local_168 * 2 + 0xc + local_f0 * 0x28) = 0;
            }
          }
        }
      }
    }
    if (*(int *)((int)param_2 + 0x4ab) == 0) {
      local_e4 = 10;
    }
    else {
      local_e4 = 0x14;
    }
    for (local_e8 = 0; local_e8 < 8; local_e8 = local_e8 + 1) {
      auStack_284[local_e8 * 0x14 + 1] =
           (*(ushort *)(param_2[0x16] + 0x26 + local_e8 * 0x28) | 0xf800) & 0xfff;
      auStack_284[local_e8 * 0x14] = *(ushort *)(param_2[0x16] + 0x24 + local_e8 * 0x28);
      if ((int)(*(uint *)(param_2[0x16] + 8 + local_e8 * 0x28) & 0xffff0000) < 1) {
        aiStack_29c[local_e8 * 10 + -1] = 0;
        local_2a8[local_e8 * 10] = 0;
        local_2a8[local_e8 * 10 + 1] = 0;
      }
      else {
        aiStack_29c[local_e8 * 10 + -1] = *(int *)(param_2[0x16] + 8 + local_e8 * 0x28) >> 0x10;
        local_2a8[local_e8 * 10] = (*(int *)(param_2[0x16] + local_e8 * 0x28) >> 0x10) / local_8;
        local_2a8[local_e8 * 10 + 1] =
             (*(int *)(param_2[0x16] + 4 + local_e8 * 0x28) >> 0x10) / local_8;
      }
      for (local_f0 = 0; local_f0 < 0xc; local_f0 = local_f0 + 1) {
        if (aiStack_29c[local_e8 * 10 + -1] < 1) {
          *(undefined2 *)((int)aiStack_29c + (local_f0 + local_e8 * 0x14) * 2) = 0;
        }
        else {
          *(undefined2 *)((int)aiStack_29c + (local_f0 + local_e8 * 0x14) * 2) =
               *(undefined2 *)(param_2[0x16] + local_f0 * 2 + 0xc + local_e8 * 0x28);
          if (*(short *)((int)aiStack_29c + (local_f0 + local_e8 * 0x14) * 2) == 8000) {
            local_e4 = local_e4 + 1;
          }
        }
      }
    }
    local_10 = 0;
    local_f0 = 0;
    local_e8 = 0;
    do {
      if (-1 < *(int *)(param_2[0x15] + 4 + local_e8 * 0x40)) {
        if (*(int *)(param_2[0x15] + 0x38 + local_e8 * 0x40) == 0) {
          local_164[local_10 * 2] = *(uint *)(param_2[0x15] + 0x3c + local_e8 * 0x40);
          local_164[local_10 * 2 + 1] =
               (*(uint *)(param_2[0x15] + 0xc + local_e8 * 0x40) & 0xf) << 8 |
               *(uint *)(param_2[0x15] + 0x28 + local_e8 * 0x40);
          local_10 = local_10 + 1;
        }
        local_f0 = local_f0 + 1;
      }
      local_e8 = local_e8 + 1;
    } while ((local_f0 < param_2[0xf7]) && (local_e8 < 0xe));
    *(int *)((int)param_2 + 0x4cb) = local_10;
    local_e0 = 0;
    for (local_e8 = 0; (local_e8 < param_2[0x18] && (local_e8 < 0xe)); local_e8 = local_e8 + 1) {
      if (*(int *)((int)param_2 + local_e8 * 0x3a + 0x66) != 0) {
        for (local_f0 = *(int *)((int)param_2 + local_e8 * 0x3a + 0x6e);
            local_f0 < *(int *)((int)param_2 + local_e8 * 0x3a + 0x6a); local_f0 = local_f0 + 1) {
          iVar3 = *(int *)(local_e8 * 0x3a + local_f0 * 4 + 0x72 + (int)param_2);
          local_d8[local_e0 * 2] = (int)*(short *)(param_2[0x17] + 4 + iVar3 * 0x1e);
          local_d8[local_e0 * 2 + 1] = (uint)*(ushort *)(param_2[0x17] + iVar3 * 0x1e) * 100;
          local_e0 = local_e0 + 1;
        }
      }
    }
    *(int *)((int)param_2 + 0x4cf) = local_e0;
    *(int *)((int)param_2 + 0x4c7) = local_e4;
    uVar2 = FUN_10002570(param_2[0xee],0x697e98);
    *(undefined4 *)((int)param_2 + 0x4bf) = uVar2;
    *(int *)((int)param_2 + 0x4bb) = param_2[0x106];
    *(int *)((int)param_2 + 0x4c3) = param_2[0xfe];
    _fwrite((void *)((int)param_2 + 0x4bb),0x18,1,param_1);
    _fwrite(local_2a8,0x140,1,param_1);
    if (local_10 != 0) {
      _fwrite(local_164,(int)((unsigned int)(local_10) << (3)),1,param_1);
    }
    if (local_e0 != 0) {
      _fwrite(local_d8,(int)((unsigned int)(local_e0) << (3)),1,param_1);
    }
    _fwrite((void *)((int)param_2 + 0x489),0x32,1,param_1);
    uVar2 = 1;
  }
  return uVar2;
}
