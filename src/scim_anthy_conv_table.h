/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2004-2005 Takuro Ashie
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __SCIM_ANTHY_CONV_TABLE_H__
#define __SCIM_ANTHY_CONV_TABLE_H__

typedef struct _ConvRule
{
    const char *string;
    const char *result;
    const char *cont;
} ConvRule;

typedef struct _HiraganaKatakanaRule
{
    const char *hiragana;
    const char *katakana;
    const char *half_katakana;
} HiraganaKatakanaRule;

typedef struct _WideRule
{
    const char *code;
    const char *wide;
} WideRule;

extern ConvRule scim_anthy_romakana_typing_rule[];
extern ConvRule scim_anthy_kana_typing_rule[];

// symbol & number
extern ConvRule scim_anthy_romakana_symbol_rule[];
extern ConvRule scim_anthy_romakana_wide_symbol_rule[];
extern ConvRule scim_anthy_romakana_number_rule[];
extern ConvRule scim_anthy_romakana_wide_number_rule[];

// period rule
extern ConvRule scim_anthy_romakana_ja_period_rule[];
extern ConvRule scim_anthy_romakana_wide_latin_period_rule[];
extern ConvRule scim_anthy_romakana_latin_period_rule[];

extern ConvRule scim_anthy_kana_ja_period_rule[];
extern ConvRule scim_anthy_kana_wide_latin_period_rule[];
extern ConvRule scim_anthy_kana_latin_period_rule[];

// comma rule
extern ConvRule scim_anthy_romakana_ja_comma_rule[];
extern ConvRule scim_anthy_romakana_wide_latin_comma_rule[];
extern ConvRule scim_anthy_romakana_latin_comma_rule[];

extern ConvRule scim_anthy_kana_ja_comma_rule[];
extern ConvRule scim_anthy_kana_wide_latin_comma_rule[];
extern ConvRule scim_anthy_kana_latin_comma_rule[];

// space rule
extern ConvRule scim_anthy_wide_space_rule[];
extern ConvRule scim_anthy_space_rule[];

// misc
extern HiraganaKatakanaRule scim_anthy_hiragana_katakana_table[];
extern WideRule             scim_anthy_wide_table[];

#endif /* __SCIM_ANTHY_CONV_TABLE_H__ */
