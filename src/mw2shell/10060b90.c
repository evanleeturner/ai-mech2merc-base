/* SPDX-License-Identifier: MIT */
/* mw2shell 10060b90 */
extern int DAT_100a7888;
extern int _DAT_100a7920;
extern int _DAT_100a7958;
extern int _DAT_100a7990;
extern int _DAT_100a79c8;

void __cdecl FUN_10063de0(int *param_1);

void __stdcall FUN_10060b90(void)
{
  _DAT_100a7920 = 1;
  _DAT_100a7958 = 1;
  _DAT_100a7990 = 1;
  _DAT_100a79c8 = 1;
  FUN_10063de0(&DAT_100a7888);
  return;
}
