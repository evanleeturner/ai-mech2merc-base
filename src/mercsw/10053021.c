/* SPDX-License-Identifier: MIT */
/* mercsw 10053021 */
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_100eef44;
extern int DAT_100eef48;
extern int DAT_100eef4c;
extern int DAT_100eef50;
extern int DAT_100eef54;
extern int DAT_100eef58;
extern int DAT_100eef5c;
extern int DAT_100ad6e4;
extern int DAT_100ad6e0;
extern int DAT_100aa1ac;
extern unsigned int DAT_100adf98;
extern int DAT_100ba970;
extern int DAT_100ba974;
extern unsigned char DAT_100ba9ca;
extern unsigned char DAT_100ba9cd;
extern unsigned char DAT_100ba9d4;
extern unsigned char DAT_100ba9d7;
extern unsigned char DAT_100ba9e0;
extern int DAT_10114db8;
extern int DAT_10114df4;
extern int DAT_10114e2c;
extern int DAT_10114e30;
extern int DAT_10114e34;
extern int DAT_10114e18;
extern int DAT_10114e08;
extern int DAT_100adcd0;
extern unsigned int DAT_100adcdc;
extern int DAT_100b36fc;
extern unsigned int DAT_100a7b4c;
extern int DAT_100b0a08;
extern int DAT_100b0a00;
extern unsigned char DAT_100ba993;
extern int DAT_10215658;
extern int DAT_100ab2fc;
extern unsigned char DAT_100ba995;
extern unsigned char DAT_100ba996;
extern unsigned char DAT_100ba997;
extern unsigned char DAT_100ba989;
extern unsigned char DAT_100ba98a;
extern unsigned char DAT_100ba98b;
extern unsigned char DAT_100ba998;
extern unsigned char DAT_100ba999;
extern unsigned char DAT_100ba99a;
extern int DAT_100a4104;
extern unsigned int DAT_100ab31c;
extern char DAT_100ba988;
extern int DAT_100b09f8;
extern unsigned char DAT_100ba99b;
extern unsigned char DAT_100ba984;
extern unsigned char DAT_100ba985;
extern unsigned char DAT_100ba98c;
extern unsigned char DAT_100ba98d;
extern unsigned char DAT_100ba98e;
extern unsigned char DAT_100ba991;
extern unsigned char DAT_100ba990;
extern unsigned char DAT_100ba98f;
extern unsigned char DAT_100ba992;
extern unsigned char DAT_100ba994;
extern int DAT_100b3214;
extern int DAT_100ab300;
extern unsigned char DAT_100ba99c;
extern int DAT_100adf8c;
extern int DAT_100adf28;
extern int DAT_100adf2c;
extern int DAT_100adf80;
extern int DAT_100b9a18;
extern int DAT_100b0a0c;
extern unsigned int DAT_100b3914;
extern unsigned char DAT_100ba983;
extern unsigned char DAT_100ba97f;
extern unsigned char DAT_100ba980;
extern unsigned char DAT_100ba981;
extern unsigned char DAT_100ba982;
extern int DAT_10218074;
extern int DAT_100aafa4;
extern int DAT_100aafa8;
extern int _DAT_100ba960;
extern unsigned char DAT_100ba97c;
extern char s_Waiting_for_players___Function_d_100b0e50[];
extern char s_Saving_HUD_configuration_100b0e7c[];
extern char s_Automatic_ejection_OFF_100b0e98[];
extern char s_Automatic_ejection_ON_100b0eb0[];
extern char s_Time_compression_enabled_100b0ec8[];
extern char s_Time_compression_disabled_100b0ee4[];
extern char s_GIF_saved___MW2000__GIF_100b0f00[];

int _sprintf(char *, const char *, ...);
void FUN_1005be24(char *, int, int, int);
void FUN_1006804e(void);
void FUN_10068026(int);
void FUN_10003742(int, int, int, int, int);
void FUN_10067d90(void);
void FUN_1005cfc4(void);
int FUN_1001a620(void);
unsigned char FUN_10009bd5(void);
void FUN_10009bfe(void);
void FUN_1001a5e1(int);
void FUN_1001a7d4(int, int);
int FUN_1004bb42(void);
void FUN_100681c0(void);
int FUN_10067f22(void);
void FUN_10082ab2(void);
void FUN_10009b92(void);
void FUN_10009ce8(int);
void FUN_10009c90(void);
void FUN_100482cb(int);
void FUN_10036649(int);
void FUN_10036804(void);
void FUN_10036872(void);
void FUN_1003689b(void);
void FUN_100368c4(void);
void FUN_100368fb(void);
void FUN_10036932(void);
void FUN_10036969(void);
void FUN_1003683b(void);
void FUN_1004831f(int);
void FUN_100069d3(int *, int);
void FUN_100082c4(int, int);
void FUN_1000f580(void);
void FUN_1000242a(int, unsigned int);
void FUN_1006811b(void);
void FUN_10068226(void);
void FUN_10063564(int);
void FUN_10005207(int, int *, int);
void FUN_10036b20(int, int);
void FUN_10048051(void);
void FUN_1005124a(unsigned int);

void __cdecl FUN_10053021(unsigned int param_1)
{
  unsigned char bVar1;
  int iVar2;
  char local_38[40];
  int local_10;
  int local_c;
  int local_8;

  iVar2 = DAT_100ad6e4;
  local_10 = -1;
  local_c = *(int *)(DAT_100eef40[DAT_100adf38] + 0x20);
  if ((((DAT_100aa1ac == 0) || (((unsigned char)DAT_100adf98 & 1) != 0)) || (param_1 == 0x71)) ||
     ((param_1 == 0x4a || (param_1 == 0x4b)))) {
    switch (param_1) {
    case 0:
      break;
    case 1:
      DAT_100ba970 = 1;
      DAT_100ba974 = 1;
      DAT_100ba9ca = 1;
      DAT_100ba9cd = 1;
      DAT_100ba9d4 = 1;
      DAT_100ba9d7 = 1;
      break;
    case 2:
      FUN_10068026(DAT_10114db8);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 3:
      FUN_10068026(DAT_10114df4);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 4:
      FUN_10068026(DAT_10114e2c);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 5:
      FUN_10068026(DAT_10114e30);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 6:
      FUN_10068026(DAT_10114e34);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 7:
      FUN_10068026(DAT_10114e18);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 8:
      FUN_10068026(DAT_10114e08);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 9:
      FUN_1006804e();
      break;
    case 10:
      FUN_10067d90();
      DAT_100adcd0 = 2;
      FUN_1005be24(s_Saving_HUD_configuration_100b0e7c, 0, 0x21f, 0x32);
      break;
    case 0xb:
      DAT_100adcdc = (unsigned int)(DAT_100adcdc == 0);
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 0xc:
      FUN_1005cfc4();
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 0, 0x32);
      }
      break;
    case 0xd:
      if (*(int *)(DAT_10114db8 + 0x30) == 2) {
        *(int *)(DAT_10114db8 + 0x30) = 0;
      } else {
        *(int *)(DAT_10114db8 + 0x30) = 2;
      }
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 1, 0x32);
      }
      break;
    case 0xe:
      if (*(int *)(DAT_10114db8 + 0x30) == 3) {
        *(int *)(DAT_10114db8 + 0x30) = 0;
      } else {
        *(int *)(DAT_10114db8 + 0x30) = 3;
      }
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 2, 0x32);
      }
      break;
    case 0xf:
      if (*(int *)(DAT_10114db8 + 0x30) == 5) {
        *(int *)(DAT_10114db8 + 0x30) = 0;
      } else {
        *(int *)(DAT_10114db8 + 0x30) = 5;
      }
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 3, 0x32);
      }
      break;
    case 0x10:
      if (*(int *)(DAT_10114db8 + 0x30) == 7) {
        *(int *)(DAT_10114db8 + 0x30) = 0;
      } else {
        *(int *)(DAT_10114db8 + 0x30) = 7;
      }
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 4, 0x32);
      }
      break;
    case 0x11:
      if (*(int *)(DAT_10114db8 + 0x30) == 1) {
        *(int *)(DAT_10114db8 + 0x30) = 0;
      } else {
        *(int *)(DAT_10114db8 + 0x30) = 1;
      }
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 6, 0x32);
      }
      break;
    case 0x12:
      DAT_100b36fc = (int)((unsigned int)DAT_100b36fc + 1u);
      if (2 < DAT_100b36fc) {
        DAT_100b36fc = 0;
      }
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        FUN_10003742(0xf0, 100, 0x40, 7, 0x32);
      }
      break;
    case 0x13:
      DAT_100a7b4c = (unsigned int)(DAT_100a7b4c == 0);
      break;
    case 0x14:
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 2) == 0) {
        iVar2 = FUN_1001a620();
        if ((iVar2 == 0) && (bVar1 = FUN_10009bd5(), bVar1 == 0)) {
          FUN_1001a5e1(1);
          FUN_1001a7d4(0, 1);
        } else {
          FUN_10009bfe();
          FUN_1001a5e1(0);
          DAT_100ba9ca = 1;
          DAT_100ba9cd = 1;
          DAT_100ba9e0 = 1;
        }
      }
      break;
    default:
      if (DAT_100b0a08 != 0) {
        FUN_1005124a(param_1);
      }
      break;
    case 0x19:
      if (DAT_100aa1ac == 0) {
        FUN_10036649(0);
      }
      break;
    case 0x1a:
      if (DAT_100aa1ac == 0) {
        FUN_10036649(1);
      }
      break;
    case 0x1b:
      if (DAT_100aa1ac == 0) {
        FUN_10036649(2);
      }
      break;
    case 0x1c:
      if (DAT_100aa1ac == 0) {
        FUN_10036804();
      }
      break;
    case 0x1d:
      if (DAT_100aa1ac == 0) {
        FUN_100368c4();
      }
      break;
    case 0x1e:
      if (DAT_100aa1ac == 0) {
        FUN_100368fb();
      }
      break;
    case 0x1f:
      if (DAT_100aa1ac == 0) {
        FUN_10036932();
      }
      break;
    case 0x20:
      if (DAT_100aa1ac == 0) {
        FUN_10036969();
      }
      break;
    case 0x21:
      if (DAT_100aa1ac == 0) {
        FUN_1003683b();
      }
      break;
    case 0x22:
      if (DAT_100aa1ac == 0) {
        FUN_100368fb();
      }
      break;
    case 0x23:
      if (DAT_100aa1ac == 0) {
        FUN_10036872();
      }
      break;
    case 0x24:
      if (DAT_100aa1ac == 0) {
        FUN_1003689b();
      }
      break;
    case 0x25:
      iVar2 = FUN_1004bb42();
      if (iVar2 != 0) {
        FUN_1001a5e1(3);
      }
      break;
    case 0x28:
      DAT_100b0a00 = 1;
      break;
    case 0x29:
      DAT_100ba993 = 1;
      break;
    case 0x2a:
      if (DAT_10215658 != 4) {
        DAT_100adcd0 = (int)((unsigned int)DAT_100adcd0 + 1u) % 3;
        if (DAT_100adcd0 == 1) {
          FUN_1006804e();
          FUN_100681c0();
        } else if ((DAT_100adcd0 == 2) && (iVar2 = FUN_10067f22(), iVar2 == 0)) {
          DAT_100adcd0 = 0;
        }
        DAT_100ad6e4 = 0;
        if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
          FUN_10003742(0xf0, 100, 0x40, 8, 0x32);
        }
      }
      break;
    case 0x2b:
      DAT_100ab2fc = 1;
      break;
    case 0x2e:
      DAT_100ba9e0 = 1;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
      local_10 = (int)(param_1 - 0x31);
      break;
    case 0x3b:
      DAT_100ba995 = 1;
      break;
    case 0x3c:
      DAT_100ba996 = 1;
      break;
    case 0x3d:
      DAT_100ba997 = 1;
      break;
    case 0x3e:
      FUN_10082ab2();
      break;
    case 0x3f:
      DAT_100ba989 = 1;
      break;
    case 0x40:
      DAT_100ba98a = 1;
      break;
    case 0x41:
      DAT_100ba98b = 1;
      break;
    case 0x42:
      DAT_100ba998 = 1;
      break;
    case 0x43:
      DAT_100ba999 = 1;
      break;
    case 0x44:
      DAT_100ba99a = 1;
      break;
    case 0x45:
      FUN_10009b92();
      break;
    case 0x46:
      FUN_10009ce8(1);
      break;
    case 0x47:
      FUN_10009ce8(2);
      break;
    case 0x48:
      FUN_10009ce8(0);
      break;
    case 0x49:
      FUN_10009c90();
      break;
    case 0x4a:
      FUN_100482cb(4);
      break;
    case 0x4b:
      FUN_1004831f(5);
      break;
    case 0x52:
      FUN_100069d3(*(int **)(DAT_100eef40[DAT_100adf38] + 0x20), 1);
      break;
    case 0x53:
      if ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) != 0) {
        if (DAT_100a4104 == 0) {
          DAT_100a4104 = 1;
          _sprintf(local_38, s_Automatic_ejection_ON_100b0eb0);
          FUN_1005be24(local_38, 1, 0x16a, 0x32);
        } else {
          DAT_100a4104 = 0;
          _sprintf(local_38, s_Automatic_ejection_OFF_100b0e98);
          FUN_1005be24(local_38, 1, 0x16a, 0x32);
        }
      }
      break;
    case 0x54:
      if (*(int *)(local_c + 0x3d4) == 3) {
        DAT_100ab31c = 1;
      } else {
        DAT_100ab31c = 0xffffffff;
      }
      break;
    case 0x55:
      if (*(int *)(local_c + 0x3d4) != 7) {
        if (*(int *)(local_c + 0x3d4) == 3) {
          DAT_100ab31c = 1;
        } else {
          DAT_100ab31c = 0xffffffff;
        }
      }
      break;
    case 0x56:
      DAT_100ba988 = (char)(DAT_100ba988 == '\0');
      break;
    case 0x57:
      DAT_100b09f8 = 1;
      break;
    case 0x58:
      DAT_100ad6e0 = 0;
      local_8 = DAT_100ad6e4;
      (void)local_8;
      if (DAT_100adcd0 != 0) {
        if (DAT_100ad6e4 == 0) {
          DAT_100ad6e4 = 1;
        } else if (DAT_100ad6e4 == 1) {
          if (DAT_100aa1ac == 0) {
            DAT_100ad6e4 = 0;
          } else {
            DAT_100ad6e4 = 2;
          }
        } else if (DAT_100ad6e4 == 2) {
          DAT_100ad6e4 = 0;
        }
        if ((DAT_100ad6e4 == 0) || (iVar2 != 0)) {
          if (DAT_100ad6e4 == 0) {
            FUN_10068226();
          }
        } else {
          FUN_100681c0();
          FUN_1006811b();
        }
      }
      break;
    case 0x59:
      DAT_100ad6e4 = 0;
      if (DAT_100aa1ac == 0) {
        FUN_1004831f(1);
      } else {
        DAT_100ad6e0 = -1;
      }
      break;
    case 0x5a:
      DAT_100ad6e4 = 0;
      if (DAT_100aa1ac == 0) {
        FUN_1004831f(7);
      } else if (DAT_100eef44 != 0) {
        DAT_100ad6e0 = 1;
      }
      break;
    case 0x5b:
      DAT_100ad6e4 = 0;
      if (DAT_100aa1ac == 0) {
        FUN_1004831f(8);
      } else if (DAT_100eef48 != 0) {
        DAT_100ad6e0 = 2;
      }
      break;
    case 0x5c:
      DAT_100ad6e4 = 0;
      if ((DAT_100aa1ac != 0) && (DAT_100eef4c != 0)) {
        DAT_100ad6e0 = 3;
      }
      break;
    case 0x5d:
      DAT_100ad6e4 = 0;
      if ((DAT_100aa1ac != 0) && (DAT_100eef50 != 0)) {
        DAT_100ad6e0 = 4;
      }
      break;
    case 0x5e:
      DAT_100ad6e4 = 0;
      if ((DAT_100aa1ac != 0) && (DAT_100eef54 != 0)) {
        DAT_100ad6e0 = 5;
      }
      break;
    case 0x5f:
      DAT_100ad6e4 = 0;
      if ((DAT_100aa1ac != 0) && (DAT_100eef58 != 0)) {
        DAT_100ad6e0 = 6;
      }
      break;
    case 0x60:
      DAT_100ad6e4 = 0;
      if ((DAT_100aa1ac != 0) && (DAT_100eef5c != 0)) {
        DAT_100ad6e0 = 7;
      }
      break;
    case 0x61:
      DAT_100ba99b = 1;
      break;
    case 0x62:
      DAT_100ba984 = 1;
      break;
    case 99:
      DAT_100ba985 = 1;
      break;
    case 100:
      DAT_100ba98c = 1;
      break;
    case 0x65:
      DAT_100ba98d = 1;
      break;
    case 0x66:
      DAT_100ba98e = 1;
      break;
    case 0x68:
      DAT_100ba991 = 1;
      break;
    case 0x69:
      DAT_100ba990 = 1;
      break;
    case 0x6a:
      DAT_100ba98f = 1;
      break;
    case 0x6b:
      DAT_100ba992 = 1;
      break;
    case 0x6c:
      DAT_100ba994 = 1;
      break;
    case 0x6d:
      DAT_100b3214 = 1;
      break;
    case 0x6e:
      DAT_100ab300 = 1;
      break;
    case 0x6f:
      DAT_100ba99c = 1;
      break;
    case 0x70:
      DAT_100adf8c = 1;
      break;
    case 0x71:
      DAT_100adf28 = 1;
      DAT_100adf2c = (int)((unsigned int)DAT_100adf2c + 2u);
      break;
    case 0x73:
      FUN_10036b20(0x80, 1);
      if (DAT_100adf80 != 0) {
        ((void (__cdecl *)(void))*(unsigned int *)(DAT_100b9a18 + 0x20))();
      }
      FUN_10048051();
      FUN_10036b20(0x80, 0);
      _sprintf(local_38, s_GIF_saved___MW2000__GIF_100b0f00);
      FUN_1005be24(local_38, 1, 0x16a, 0x32);
      break;
    case 0x85:
      FUN_10005207(-2, *(int **)(DAT_100eef40[DAT_100adf38] + 0x20), 8);
      break;
    case 0xab:
      if (DAT_100b0a0c != 0) {
        DAT_100b3914 = (unsigned int)(DAT_100b3914 == 0);
        if (DAT_100b3914 == 0) {
          _sprintf(local_38, s_Time_compression_disabled_100b0ee4);
          FUN_1005be24(local_38, 1, 0x16a, 0x32);
        } else {
          _sprintf(local_38, s_Time_compression_enabled_100b0ec8);
          FUN_1005be24(local_38, 1, 0xb50, 0x32);
        }
      }
      break;
    case 0xb0:
      FUN_10063564(0);
      break;
    case 0xb1:
      FUN_10063564(1);
      break;
    case 0xb2:
      FUN_10063564(2);
      break;
    case 0xb3:
      DAT_100ba983 = 1;
      break;
    case 0xb4:
      DAT_100ba97f = 1;
      break;
    case 0xb5:
      DAT_100ba980 = 1;
      break;
    case 0xb6:
      DAT_100ba981 = 1;
      break;
    case 0xb7:
      DAT_100ba982 = 1;
      break;
    case 0xbf:
      FUN_1000242a(0, (unsigned int)(DAT_10218074 == 0));
      break;
    case 0xc0:
      if ((DAT_100aafa4 == 1) || ((*(unsigned short *)(DAT_100eef40[DAT_100adf38] + 0x14) & 0x2000) == 0)) {
        DAT_100aafa4 = 0;
      } else {
        DAT_100aafa4 = 1;
        DAT_100aafa8 = 0;
        FUN_100082c4(0x1b, 1);
      }
      break;
    case 0xc1:
      FUN_1000f580();
      break;
    case 0xc2:
      FUN_10063564(3);
      break;
    case 0xc4:
      FUN_10063564(4);
      break;
    case 0xc6:
      DAT_100ba97f = 1;
      DAT_100ba983 = 1;
    }
    if (local_10 != -1) {
      _DAT_100ba960 = (int)((unsigned int)local_10 * 0x71u);
      DAT_100ba97c = 1;
    }
  } else {
    _sprintf(local_38, s_Waiting_for_players___Function_d_100b0e50);
    FUN_1005be24(local_38, 1, 0x16a, 0x32);
  }
  return;
}
