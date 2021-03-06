/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        Bitmap converter for emWin V5.04.
*        Compiled Jan  8 2010, 16:37:17
*        (C) 1998 - 2005 Segger Microcontroller Systeme GmbH
*
**********************************************************************
*
* Source file: YellowSD
* Dimensions:  27 * 35
* NumColors:   256
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsYellowSD[] = {
     0x000000,0x222121,0x28D5E5,0x1EFFFF
    ,0x050505,0x121212,0x32BBDA,0x110202
    ,0x0A7270,0x2EBEDA,0x2DC4DE,0x29CDE2
    ,0x1EF1F3,0x21E8F0,0x25DDE8,0x24E1EB
    ,0x22E6EE,0xFDFEFE,0x20EDF0,0x15C9C6
    ,0x2D2C2C,0x414141,0x393939,0x252424
    ,0x080505,0x2A2929,0x29C8E0,0x2CC9E1
    ,0x33AED3,0x33B2D5,0x31C2DD,0x313131
    ,0x3D3D3D,0x1D3136,0x2889A6,0x2BB3DA
    ,0x33B5D9,0x34BDE2,0x2EC2DC,0x090909
    ,0x1C1616,0x1B1B1B,0x353535,0x3CB5D9
    ,0xB9B5B6,0xE4FEFF,0x050101,0x0D0909
    ,0x1F3439,0x242222,0x227385,0x1E99B9
    ,0x2691AA,0x2BB3D5,0x25BEDA,0x3DBADE
    ,0x30CAE5,0x39C0E8,0xDDF9FE,0xE4FAFE
    ,0x060403,0x1E3D3E,0x2C2B2A,0x203C3E
    ,0x214141,0x454544,0x4E4D4D,0x6A7174
    ,0x2B798C,0x288BA8,0x2596AC,0x2B91AC
    ,0x239AAE,0x229FB1,0x1FA9B6,0x1CB1B9
    ,0x2FA5C2,0x24AACE,0x2BABD2,0x39BEE5
    ,0x32C5E3,0x2ED2EB,0x20FDFE,0xB4B2B4
    ,0xE2F9FD,0xEAFBFF,0x030505,0x090000
    ,0x080403,0x000C0C,0x0F0F0F,0x110505
    ,0x100A0A,0x110E0D,0x170F0F,0x0A1619
    ,0x1B1616,0x101F1F,0x03292B,0x042D2C
    ,0x152227,0x163030,0x103336,0x193133
    ,0x1F383B,0x232324,0x3C3B3B,0x403F3F
    ,0x183B42,0x213F40,0x393D40,0x184B58
    ,0x075757,0x095C5C,0x244545,0x2B4047
    ,0x105867,0x1F6A7D,0x107473,0x236A7B
    ,0x4A4949,0x4C4C4B,0x495150,0x46555A
    ,0x525151,0x545353,0x565555,0x585757
    ,0x5C5B5B,0x646468,0x646868,0x6B6E70
    ,0x627477,0x6B7478,0x1F748A,0x207F9B
    ,0x128D8F,0x0F809D,0x238097,0x23859D
    ,0x1B8CAE,0x1D91AE,0x1391B2,0x1D95B3
    ,0x278CA7,0x278EA9,0x2595AB,0x2499AE
    ,0x2095B8,0x259FBE,0x329EBD,0x13B2B1
    ,0x1BB8BD,0x21A1B3,0x7D8182,0x578FA2
    ,0x419DB9,0x6D94A0,0x18BFC1,0x1DBEC5
    ,0x25A4C4,0x2AACCC,0x39A4C5,0x36ADCD
    ,0x3BADCE,0x26ABD2,0x28B9D7,0x26BBDA
    ,0x3CB1D3,0x40ABCD,0x56ADC4,0x4DB1C7
    ,0x46B7D8,0x4AB9D9,0x54BDDD,0x69AFC3
    ,0x67B1C0,0x75B2C4,0x6ABFDA,0x17CACA
    ,0x16CDCB,0x1ECCCA,0x29C6D5,0x26C0DB
    ,0x28C0DA,0x31C0DB,0x34C0DF,0x3AC0DD
    ,0x3AC5DE,0x33C2E2,0x39C6E1,0x37CBE4
    ,0x30CDE8,0x26D7E7,0x2CD6ED,0x29D9EA
    ,0x2FDFEB,0x2BDDEF,0x34D4E9,0x32DEED
    ,0x1DEBEB,0x1FEAF1,0x1EEFF2,0x22E2EC
    ,0x24E2ED,0x2AE1F1,0x26EBF6,0x2FE8F2
    ,0x2CF0F7,0x23F3FB,0x21F6F9,0x2EF0F8
    ,0x2BF5F8,0x29F2FE,0x22F9FC,0x25F8FF
    ,0x2BF9FB,0x2BFFFF,0x2CFFFF,0x63C2DE
    ,0x5BCAE1,0x61C8E0,0x73C8E1,0x79D5E8
    ,0x8E8F90,0x9E9494,0x979997,0xA29A9B
    ,0x98A9AE,0x8FA7B0,0xA7A0A5,0xB0AAAB
    ,0xA1B2B8,0xB1B6BB,0xBEB9BA,0x81D6E7
    ,0x8AD3E7,0x96D7EA,0xA2DBED,0xA1E3F6
    ,0xB8EAF3,0xC4C7C5,0xDBCFCA,0xE3DEDE
    ,0xE7E1DD,0xC4EFF7,0xD9EDF2,0xDFF7FB
    ,0xDFFCFF,0xE6E3E3,0xE4F3F9,0xFFF4F0
    ,0xF1F9F9,0xF5FAFA,0xF3FFFF,0xF4FFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalYellowSD = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &ColorsYellowSD[0]
};

static GUI_CONST_STORAGE unsigned char acYellowSD[] = {
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x69, 0x69, 0x17, 0x31, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x31, 0x17, 0x17, 0x69, 0x69, 0x69, 0x69, 0x69,
  0x14, 0x14, 0x69, 0x18, 0x56, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x2E, 0x5C, 0x19, 0x1F, 0x14, 0x14, 0x14, 0x14,
  0x16, 0x6A, 0x60, 0x65, 0xB5, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0xB4, 0x97, 0x63, 0x57, 0x3E, 0x6A, 0x16, 0x16, 0x16,
  0x15, 0x41, 0x28, 0x40, 0xDA, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xC8, 0x71, 0x2E, 0x31, 0x15, 0x41, 0x15,
  0x15, 0x41, 0x28, 0x3D, 0xD4, 0xCA, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0xD2, 0xD6, 0x88, 0x59, 0x5E, 0x20, 0x41,
  0x15, 0x41, 0x28, 0x3D, 0xD3, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0D, 0xD7, 0x9F, 0x62, 0x2F, 0x20,
  0x6B, 0x15, 0x28, 0x67, 0xC4, 0xCC, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0xD5, 0x4B, 0x2E, 0x42,
  0x20, 0x6B, 0x3E, 0x00, 0x66, 0xB6, 0xC3, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xC5, 0x4A, 0x18, 0x80,
  0x6A, 0x6A, 0x20, 0x19, 0x00, 0x49, 0x51, 0x1B, 0x1B, 0x1A, 0x1A, 0x1A, 0x1B, 0x1B, 0x1B, 0x1A, 0x1A, 0x1A, 0x1A, 0x1B, 0x1B, 0x1B, 0x1B, 0x51, 0x49, 0x18, 0x7F,
  0x16, 0x16, 0x6A, 0x1F, 0x00, 0x93, 0x38, 0x26, 0x36, 0x1E, 0xBC, 0x1E, 0x36, 0x26, 0x26, 0x1E, 0x1E, 0x1E, 0x1E, 0xB8, 0xB7, 0x26, 0x26, 0x38, 0x48, 0x18, 0x7E,
  0x2A, 0x2A, 0x16, 0x14, 0x00, 0x46, 0x50, 0xA6, 0xDF, 0xF8, 0xFE, 0xF7, 0xEB, 0x36, 0xB9, 0xF0, 0x54, 0x3B, 0x3B, 0xF5, 0xDC, 0xA7, 0x06, 0x50, 0x92, 0x18, 0x7D,
  0x1F, 0x1F, 0x1F, 0x3E, 0x00, 0x34, 0x09, 0xDD, 0x11, 0xE7, 0x82, 0xF1, 0x11, 0xB0, 0x35, 0x3A, 0xF9, 0xE0, 0xE2, 0xF4, 0xFC, 0xAB, 0xA6, 0xBA, 0x34, 0x18, 0x7C,
  0x14, 0x14, 0x1F, 0x17, 0x00, 0x45, 0xA7, 0xEC, 0x11, 0x84, 0x89, 0xA3, 0xE5, 0x7A, 0x4C, 0x2D, 0x53, 0x74, 0x8E, 0xAA, 0x11, 0xE4, 0x95, 0x25, 0x90, 0x18, 0x42,
  0x3E, 0x14, 0x01, 0x2E, 0x5F, 0x96, 0x23, 0xAD, 0xFA, 0x11, 0xF8, 0xEF, 0x9C, 0x8C, 0x1D, 0x2D, 0x2C, 0x44, 0x39, 0x2B, 0x55, 0x53, 0x8A, 0x39, 0x22, 0x18, 0x79,
  0x19, 0x19, 0x5D, 0x64, 0xA2, 0x24, 0x1C, 0xA5, 0xA9, 0xE8, 0xF2, 0xFB, 0xFF, 0xB2, 0x4E, 0x3B, 0x2C, 0x32, 0x24, 0x1C, 0x3B, 0x2C, 0x77, 0x39, 0x22, 0x18, 0x78,
  0x69, 0x17, 0x2F, 0x30, 0x37, 0x1C, 0x1C, 0xDB, 0xDE, 0x94, 0x87, 0x9B, 0x11, 0xE9, 0x47, 0x2D, 0x2C, 0x32, 0x23, 0xA8, 0xFF, 0xE6, 0x75, 0x39, 0x22, 0x18, 0x41,
  0x01, 0x01, 0x2F, 0x21, 0x2B, 0x1C, 0x4E, 0xEE, 0x11, 0xB1, 0x23, 0xAE, 0x11, 0xE3, 0x32, 0x2D, 0xEA, 0x44, 0x37, 0xED, 0x11, 0x81, 0x8B, 0x4F, 0x22, 0x18, 0x15,
  0x29, 0x29, 0x18, 0x21, 0x2B, 0x1C, 0x1C, 0xAC, 0xF6, 0x11, 0x55, 0x11, 0xF3, 0x6E, 0x47, 0x3A, 0x11, 0xFD, 0x11, 0x11, 0xE1, 0x6C, 0x1D, 0x37, 0x22, 0x18, 0x6B,
  0x60, 0x60, 0x58, 0x21, 0x2B, 0x1D, 0x1D, 0x35, 0xA4, 0x9D, 0x9A, 0x83, 0x73, 0x86, 0x4F, 0xAF, 0x43, 0x85, 0x43, 0x7B, 0x6F, 0x4C, 0x24, 0x06, 0x45, 0x18, 0x6A,
  0x05, 0x05, 0x2E, 0x21, 0x37, 0x24, 0x24, 0x24, 0x23, 0x4D, 0x8F, 0x8D, 0xA1, 0x25, 0x24, 0x4D, 0x33, 0x33, 0x33, 0xA0, 0x25, 0x06, 0x1D, 0x25, 0x91, 0x18, 0x16,
  0x5A, 0x5A, 0x2E, 0x21, 0xBB, 0x06, 0x06, 0x06, 0x06, 0x06, 0xBA, 0xBA, 0x06, 0x06, 0x06, 0x06, 0xBA, 0xBA, 0xBA, 0x06, 0x06, 0x06, 0x06, 0xBD, 0x34, 0x18, 0x2A,
  0x27, 0x27, 0x00, 0x30, 0xBE, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x38, 0x46, 0x18, 0x1F,
  0x27, 0x27, 0x00, 0x30, 0xBF, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xC0, 0x48, 0x18, 0x14,
  0x04, 0x04, 0x00, 0x68, 0xC6, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0xC2, 0x99, 0x3C, 0x3E,
  0x2E, 0x2E, 0x00, 0x3F, 0xC7, 0xC1, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xCD, 0x4A, 0x3C, 0x19,
  0x00, 0x00, 0x00, 0x3F, 0xCF, 0xCB, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xCE, 0x4B, 0x3C, 0x17,
  0x00, 0x00, 0x00, 0x6D, 0xD0, 0xC9, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0xD1, 0x98, 0x3C, 0x17,
  0x00, 0x00, 0x00, 0x40, 0xD8, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x52, 0x9E, 0x3C, 0x31,
  0x00, 0x00, 0x00, 0x72, 0xD9, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xB3, 0x04, 0x31,
  0x00, 0x00, 0x00, 0x61, 0x76, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x76, 0x70, 0x27, 0x17,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x5B, 0x3E, 0x69,
  0x00, 0x00, 0x00, 0x2E, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x2E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmYellowSD = {
  27, /* XSize */
  35, /* YSize */
  27, /* BytesPerLine */
  8, /* BitsPerPixel */
  acYellowSD,  /* Pointer to picture data (indices) */
  &PalYellowSD  /* Pointer to palette */
};

/* *** End of file *** */
