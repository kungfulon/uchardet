/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"

/********* Language model for: Vietnamese *********/

/**
 * Generated by BuildLangModel.py
 * On: 2019-11-02 06:53:53.677563
 **/

    /* Character Mapping Table:
     * ILL: illegal character.
     * CTR: control character specific to the charset.
     * RET: carriage/return.
     * SYM: symbol (punctuation) that does not belong to word.
     * NUM: 0 - 9.
     *
     * Other characters are ordered by probabilities
     * (0 is the most common character in the language).
     *
     * Orders are generic to a language. So the codepoint with order X in
     * CHARSET1 maps to the same character as the codepoint with the same
     * order X in CHARSET2 for the same language.
     * As such, it is possible to get missing order. For instance the
     * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
     * even though they are both used for French. Same for the euro sign.
     */
    static const unsigned char Tcvn5712_3_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  6, 19,  3, 23, 22, 67,  5,  1,  4, 79, 21, 13, 10,  0,  8, /* 4X */
   15, 32, 11, 16,  2,  7, 14, 72, 45, 20, 80,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  6, 19,  3, 23, 22, 67,  5,  1,  4, 79, 21, 13, 10,  0,  8, /* 6X */
   15, 32, 11, 16,  2,  7, 14, 72, 45, 20, 80,SYM,SYM,SYM,SYM,CTR, /* 7X */
  ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL, /* 8X */
  ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL,ILL, /* 9X */
  SYM, 47, 27, 33, 28, 48, 17,  9, 47, 27, 33, 28, 48, 17,  9,ILL, /* AX */
  ILL,ILL,ILL,ILL,ILL, 12, 34, 51, 18, 26,ILL, 71, 86, 91, 59,ILL, /* BX */
  ILL,ILL,ILL,ILL,ILL,ILL, 64, 50, 77, 78, 38, 41, 88,ILL, 85, 84, /* CX */
   75, 90, 40, 46, 73, 24, 30, 53, 70,ILL,ILL,ILL, 66, 43, 39, 61, /* DX */
  ILL, 74, 89, 36, 55, 58, 57, 83, 29, 25, 37, 54, 87, 35, 42, 63, /* EX */
  ILL, 31, 68, 62, 56, 60, 65, 52, 49, 44, 69, 82, 81, 69, 92,ILL, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Windows_1258_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  6, 19,  3, 23, 22, 67,  5,  1,  4, 79, 21, 13, 10,  0,  8, /* 4X */
   15, 32, 11, 16,  2,  7, 14, 72, 45, 20, 80,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  6, 19,  3, 23, 22, 67,  5,  1,  4, 79, 21, 13, 10,  0,  8, /* 6X */
   15, 32, 11, 16,  2,  7, 14, 72, 45, 20, 80,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,ILL,SYM,108,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,104,ILL,ILL,ILL, /* 8X */
  ILL,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM,104,ILL,ILL,110, /* 9X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM,109,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   12, 18, 27, 47, 97,103, 96, 95, 88, 75, 33,102,SYM, 43,100,105, /* CX */
    9, 98,SYM, 36, 28, 48, 94,SYM, 99, 63, 62,106, 93, 17,SYM,101, /* DX */
   12, 18, 27, 47, 97,103, 96, 95, 88, 75, 33,102,SYM, 43,100,105, /* EX */
    9, 98,SYM, 36, 28, 48, 94,SYM, 99, 63, 62,106, 93, 17,107,110, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Viscii_CharToOrderMap[] =
{
  CTR,CTR, 86,CTR,CTR, 91, 78,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR, 82,CTR,CTR,CTR,CTR, 81,CTR,CTR,CTR,CTR, 92,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM,  6, 19,  3, 23, 22, 67,  5,  1,  4, 79, 21, 13, 10,  0,  8, /* 4X */
   15, 32, 11, 16,  2,  7, 14, 72, 45, 20, 80,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM,  6, 19,  3, 23, 22, 67,  5,  1,  4, 79, 21, 13, 10,  0,  8, /* 6X */
   15, 32, 11, 16,  2,  7, 14, 72, 45, 20, 80,SYM,SYM,SYM,SYM,CTR, /* 7X */
   26, 59, 71, 64, 38, 50, 77, 41, 84, 90, 24, 40, 46, 73, 30, 29, /* 8X */
   58, 57, 83, 25, 42, 35, 37, 54, 39, 74, 55, 70, 31, 68, 56, 76, /* 9X */
   89, 59, 71, 64, 38, 50, 77, 41, 84, 90, 24, 40, 46, 73, 30, 29, /* AX */
   58, 57, 83, 87, 48, 25, 37, 54, 39, 44, 49, 60, 65, 48, 35, 17, /* BX */
   12, 18, 27, 51, 34, 47, 86, 91, 88, 75, 33, 85, 53, 43, 66, 76, /* CX */
    9, 49, 61, 36, 28, 26, 82, 60, 65, 63, 62, 81, 92, 69, 87, 17, /* DX */
   12, 18, 27, 51, 34, 47, 52, 78, 88, 75, 33, 85, 53, 43, 66, 70, /* EX */
    9, 44, 61, 36, 28, 89, 74, 55, 56, 63, 62, 68, 31, 69, 42, 52, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */


/* Model Table:
 * Total sequences: 3313
 * First 512 sequences: 0.9232394224345223
 * Next 512 sequences (512-1024): 0.06780578237592802
 * Rest: 0.008954795189549697
 * Negative sequences: TODO
 */
static const PRUint8 VietnameseLangModel[] =
{
  2,3,3,3,3,3,3,2,3,1,2,2,3,1,1,1,3,3,1,2,2,2,3,3,
   2,3,2,2,3,2,1,1,1,3,1,1,3,1,1,1,3,1,1,1,1,1,1,3,2,
  2,1,2,1,3,1,3,3,3,1,2,2,3,1,1,1,1,3,3,1,3,1,3,1,
   3,3,3,3,3,3,3,3,1,3,3,2,3,3,3,3,2,3,3,3,3,1,3,2,3,
  1,3,3,2,3,1,3,3,3,1,1,3,3,2,2,1,2,3,3,1,3,1,3,1,
   3,3,3,3,3,3,2,1,1,3,2,3,1,1,3,2,1,3,1,3,3,1,1,3,1,
  2,3,2,2,3,1,3,3,3,1,1,2,2,2,1,1,2,3,3,1,2,2,3,1,
   0,3,2,2,3,2,0,3,1,1,3,1,3,2,3,0,0,3,1,1,2,1,0,2,3,
  3,1,3,3,3,2,3,2,3,1,3,3,2,3,2,2,3,1,3,2,2,2,3,3,
   3,1,1,1,1,2,3,1,1,3,3,3,1,2,2,1,3,1,1,1,1,2,3,1,1,
  2,3,1,1,3,1,3,3,3,1,1,2,3,2,1,1,2,3,2,1,2,1,3,2,
   1,2,2,2,3,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,0,2,1,
  3,2,3,3,3,3,2,3,3,1,3,3,0,3,2,2,3,0,1,2,3,2,2,3,
   0,0,0,1,1,0,0,1,1,1,1,0,1,0,1,1,0,1,0,1,0,2,0,1,0,
  3,1,3,2,2,2,3,2,1,1,2,3,1,3,1,2,3,1,3,2,3,2,2,2,
   2,3,1,3,2,3,2,0,1,2,3,1,1,1,3,1,1,3,1,1,0,1,1,1,1,
  3,2,3,2,2,2,3,3,2,1,3,3,3,3,2,2,3,0,3,2,2,2,2,2,
   0,0,3,1,1,0,0,0,1,1,3,0,1,1,0,1,0,1,0,1,0,2,0,1,0,
  1,1,1,1,3,1,3,2,3,1,1,1,3,1,1,1,1,3,3,1,0,1,2,1,
   3,3,3,3,3,3,2,2,1,2,3,1,3,2,3,3,3,2,1,2,1,1,3,2,2,
  1,1,1,1,3,1,3,3,3,1,2,1,3,1,1,2,2,2,3,2,2,1,3,1,
   1,3,3,2,3,2,2,1,1,1,1,3,2,1,2,1,1,2,1,1,1,1,1,1,1,
  2,2,3,2,3,2,3,3,3,1,2,2,2,2,2,2,2,3,3,2,3,2,3,3,
   1,2,2,1,2,2,1,1,1,3,2,1,1,2,3,3,1,3,2,2,2,2,1,2,2,
  3,1,1,1,3,0,1,3,3,1,3,1,1,1,1,1,1,0,0,1,3,1,0,1,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,2,2,3,2,3,3,3,1,2,1,3,3,2,2,2,3,2,2,2,2,3,2,
   1,2,3,2,2,2,3,1,1,3,1,3,1,2,2,3,1,3,3,2,3,1,1,2,1,
  1,1,1,1,3,1,3,3,2,1,1,1,3,1,1,1,1,3,1,1,1,1,3,1,
   1,1,2,2,2,2,2,1,1,1,1,3,1,1,2,3,3,3,2,2,3,1,1,3,1,
  1,3,2,1,2,1,3,2,3,1,1,3,1,2,1,2,2,1,1,1,2,1,3,1,
   1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,0,0,0,1,0,1,0,1,1,
  2,3,3,3,3,1,3,3,3,1,2,2,2,2,1,2,3,2,3,2,2,2,3,2,
   1,1,1,2,2,3,1,1,1,1,3,2,2,1,1,1,1,1,2,1,3,1,1,1,2,
  3,1,1,1,1,1,3,3,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,
   0,1,0,0,0,1,0,0,0,0,0,3,1,3,0,0,0,0,3,0,0,0,0,0,3,
  3,1,3,3,3,1,1,2,3,1,3,1,0,1,1,3,1,0,0,1,3,1,1,1,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
  2,1,1,2,3,1,3,3,3,1,1,3,3,2,1,1,2,2,3,2,2,1,3,1,
   1,3,3,1,1,3,2,1,1,3,3,1,2,2,3,3,2,2,1,2,1,1,1,2,1,
  2,1,1,2,1,1,2,2,2,1,2,2,1,2,1,2,2,1,1,1,1,1,2,2,
   3,0,1,1,1,0,3,0,1,3,0,0,1,0,0,0,3,0,0,1,0,1,3,1,1,
  1,3,1,1,3,1,3,2,2,1,2,2,1,2,1,1,2,1,1,1,2,1,2,1,
   3,0,1,1,1,1,1,1,1,2,1,0,1,0,0,2,1,0,0,2,0,1,2,1,1,
  3,2,3,3,3,2,3,2,3,1,3,3,0,3,2,2,3,0,1,2,2,2,2,3,
   0,0,0,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,2,0,1,0,
  2,2,1,1,3,2,3,3,3,1,1,2,3,1,1,2,2,3,1,1,2,1,3,2,
   1,1,2,3,1,1,1,1,1,1,1,1,1,1,2,3,1,2,1,1,3,1,1,1,1,
  3,1,3,2,1,1,1,3,0,1,3,1,0,0,1,3,1,0,0,1,1,1,0,0,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,3,3,3,0,0,0,0,1,1,0,0,1,1,1,1,0,0,1,1,1,0,0,
   0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,
  3,0,3,3,3,1,0,0,3,1,3,0,0,1,1,3,0,0,0,0,2,0,0,1,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,1,1,1,1,1,1,3,1,0,3,1,0,1,0,1,1,0,0,1,3,1,0,0,
   0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,1,1,3,1,0,1,0,1,2,1,0,1,1,1,1,0,0,1,1,1,1,1,
   0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
  3,0,3,3,3,1,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,1,1,1,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,1,3,3,0,0,0,3,0,0,3,0,0,1,1,3,0,0,0,0,0,1,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,1,1,1,1,3,0,1,1,1,1,0,1,1,1,0,1,0,1,3,1,1,1,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
  1,1,1,1,1,1,1,3,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,
   0,0,0,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,
  3,1,1,1,1,1,1,3,1,1,3,1,0,1,1,1,1,0,0,1,1,1,1,1,
   0,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
  3,0,1,1,3,1,0,1,3,1,3,1,0,1,0,1,0,0,0,0,2,1,0,1,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,1,3,3,0,0,1,0,0,2,0,0,0,0,2,0,0,0,0,0,1,0,0,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,
  3,1,1,2,3,1,3,1,1,1,2,1,0,1,1,2,1,0,0,1,1,1,1,1,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,0,0,3,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,3,1,1,0,0,3,0,0,2,0,0,0,0,3,0,0,0,0,3,0,0,0,
   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,1,3,0,0,3,2,1,1,1,1,0,0,0,2,1,0,0,1,0,1,0,0,
   0,0,1,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,1,1,1,0,1,3,0,1,2,0,0,1,1,1,0,0,0,1,0,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,0,3,2,0,0,0,3,0,0,2,0,0,1,0,3,0,0,0,0,2,0,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,2,3,3,1,0,1,0,0,1,0,0,0,0,3,1,0,0,0,0,1,0,0,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  3,1,2,3,1,1,3,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,
   1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,1,1,3,0,0,2,2,1,1,1,0,0,0,1,1,0,0,0,1,1,1,0,0,
   0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
  1,1,1,1,3,1,2,3,2,1,1,1,1,1,2,1,1,2,2,1,1,1,3,1,
   2,1,1,3,2,1,1,0,1,1,2,1,2,0,1,1,1,1,1,2,1,2,0,1,1,
  3,0,1,1,0,0,1,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,1,
   0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,1,1,1,1,1,1,1,0,3,1,0,1,0,1,1,0,0,0,0,1,1,1,
   0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,1,1,1,3,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,
   0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,
};


const SequenceModel Tcvn5712_3VietnameseModel =
{
  Tcvn5712_3_CharToOrderMap,
  VietnameseLangModel,
  49,
  (float)0.9232394224345223,
  PR_FALSE,
  "TCVN5712-3"
};

const SequenceModel Windows_1258VietnameseModel =
{
  Windows_1258_CharToOrderMap,
  VietnameseLangModel,
  49,
  (float)0.9232394224345223,
  PR_FALSE,
  "WINDOWS-1258"
};

const SequenceModel VisciiVietnameseModel =
{
  Viscii_CharToOrderMap,
  VietnameseLangModel,
  49,
  (float)0.9232394224345223,
  PR_FALSE,
  "VISCII"
};