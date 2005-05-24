/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2005 Takuro Ashie
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

#include "scim_anthy_key2kana_table.h"

using namespace scim_anthy;

// fundamental table
static Key2KanaTable romaji_table (
    utf8_mbstowcs ("DefaultRomajiTable"),
    scim_anthy_romaji_typing_rule);
static Key2KanaTable kana_table (
    utf8_mbstowcs ("DefaultKanaTable"),
    scim_anthy_kana_typing_rule);

// symbols
static Key2KanaTable half_symbol_table (
    utf8_mbstowcs ("DefaultRomajiHalfSymbolTable"),
    scim_anthy_romaji_half_symbol_rule);
static Key2KanaTable wide_symbol_table (
    utf8_mbstowcs ("DefaultRomajiWideSymbolTable"),
    scim_anthy_romaji_wide_symbol_rule);

// numbers
static Key2KanaTable half_number_table (
    utf8_mbstowcs ("DefaultRomajiHalfNumberTable"),
    scim_anthy_romaji_wide_number_rule);
static Key2KanaTable wide_number_table (
    utf8_mbstowcs ("DefaultRomajiWideNumberTable"),
    scim_anthy_romaji_wide_number_rule);

// period
static Key2KanaTable romaji_ja_period_table (
    utf8_mbstowcs ("DefaultRomajiJaPeriodTable"),
    scim_anthy_romaji_ja_period_rule);
static Key2KanaTable romaji_wide_period_table (
    utf8_mbstowcs ("DefaultRomajiWidePeriodTable"),
    scim_anthy_romaji_wide_period_rule);
static Key2KanaTable romaji_half_period_table (
    utf8_mbstowcs ("DefaultRomajiHalfPeriodTable"),
    scim_anthy_romaji_half_period_rule);

static Key2KanaTable kana_ja_period_table (
    utf8_mbstowcs ("DefaultKanaJaPeriodTable"),
    scim_anthy_kana_ja_period_rule);
static Key2KanaTable kana_wide_period_table (
    utf8_mbstowcs ("DefaultKanaWidePeriodTable"),
    scim_anthy_kana_wide_period_rule);
static Key2KanaTable kana_half_period_table (
    utf8_mbstowcs ("DefaultKanaHalfPeriodTable"),
    scim_anthy_kana_half_period_rule);

// comma
static Key2KanaTable romaji_ja_comma_table (
    utf8_mbstowcs ("DefaultRomajiJaCommaTable"),
    scim_anthy_romaji_ja_comma_rule);
static Key2KanaTable romaji_wide_comma_table (
    utf8_mbstowcs ("DefaultRomajiWideCommaTable"),
    scim_anthy_romaji_wide_comma_rule);
static Key2KanaTable romaji_half_comma_table (
    utf8_mbstowcs ("DefaultRomajiHalfCommaTable"),
    scim_anthy_romaji_half_period_rule);

static Key2KanaTable kana_ja_comma_table (
    utf8_mbstowcs ("DefaultKanaJaCommaTable"),
    scim_anthy_kana_ja_comma_rule);
static Key2KanaTable kana_wide_comma_table (
    utf8_mbstowcs ("DefaultKanaWideCommaTable"),
    scim_anthy_kana_wide_comma_rule);
static Key2KanaTable kana_half_comma_table (
    utf8_mbstowcs ("DefaultKanaHalfCommaTable"),
    scim_anthy_kana_half_period_rule);


Key2KanaTable::Key2KanaTable (WideString name, ConvRule *table)
    : m_name  (name),
      m_table (table)
{
}

Key2KanaTable::~Key2KanaTable ()
{
    m_table= NULL;
}


Key2KanaTableSet::Key2KanaTableSet ()
    : m_name            (utf8_mbstowcs ("")),
      m_typing_method   (SCIM_ANTHY_TYPING_METHOD_ROMAJI),
      m_period_style    (SCIM_ANTHY_PERIOD_JAPANESE),
      m_comma_style     (SCIM_ANTHY_COMMA_JAPANESE),
      m_use_half_symbol (false),
      m_use_half_number (false)
{
    set_typing_method (m_typing_method);
}

Key2KanaTableSet::~Key2KanaTableSet ()
{
}

void
Key2KanaTableSet::set_typing_method (TypingMethod method)
{
    m_typing_method = method;
    reset_tables ();
}

void
Key2KanaTableSet::set_symbol_width (bool half)
{
    m_use_half_symbol = half;
    reset_tables ();
}

void
Key2KanaTableSet::set_number_width (bool half)
{
    m_use_half_number = half;
    reset_tables ();
}

void
Key2KanaTableSet::set_period_style (PeriodStyle style)
{
    m_period_style = style;
    reset_tables ();
}

void
Key2KanaTableSet::set_comma_style (CommaStyle  style)
{
    m_comma_style = style;
    reset_tables ();
}

void
Key2KanaTableSet::reset_tables (void)
{
    m_all_tables.clear ();

    bool is_romaji = m_typing_method == SCIM_ANTHY_TYPING_METHOD_ROMAJI;
    bool is_kana   = m_typing_method == SCIM_ANTHY_TYPING_METHOD_KANA;

    if (m_tables.empty ()) {
        if (is_romaji)
            m_all_tables.push_back (&romaji_table);
        else if (is_kana)
            m_all_tables.push_back (&kana_table);
    } else {
        std::vector<Key2KanaTable>::iterator it;
        for (it = m_tables.begin (); it != m_tables.end (); it++)
            m_all_tables.push_back (&(*it));
    }

    if (is_romaji) {
        // symbols table
        if (m_use_half_symbol)
            m_all_tables.push_back (&half_symbol_table);
        else
            m_all_tables.push_back (&wide_symbol_table);

        // numbers table
        if (m_use_half_number)
            m_all_tables.push_back (&half_number_table);
        else
            m_all_tables.push_back (&wide_number_table);
    }

    if (is_romaji || is_kana)
    {
        switch (m_period_style) {
        case SCIM_ANTHY_PERIOD_JAPANESE:
            if (is_romaji)
                m_all_tables.push_back (&romaji_ja_period_table);
            else
                m_all_tables.push_back (&kana_ja_period_table);
            break;
        case SCIM_ANTHY_PERIOD_WIDE:
            if (is_romaji)
                m_all_tables.push_back (&romaji_wide_period_table);
            else
                m_all_tables.push_back (&kana_wide_period_table);
            break;
        case SCIM_ANTHY_PERIOD_HALF:
            if (is_romaji)
                m_all_tables.push_back (&romaji_half_period_table);
            else
                m_all_tables.push_back (&kana_half_period_table);
            break;
        default:
            break;
        }
    }

    if (is_romaji || is_kana)
    {
        switch (m_comma_style) {
        case SCIM_ANTHY_COMMA_JAPANESE:
            if (is_romaji)
                m_all_tables.push_back (&romaji_ja_comma_table);
            else
                m_all_tables.push_back (&kana_ja_comma_table);
            break;
        case SCIM_ANTHY_COMMA_WIDE:
            if (is_romaji)
                m_all_tables.push_back (&romaji_wide_comma_table);
            else
                m_all_tables.push_back (&kana_wide_comma_table);
            break;
        case SCIM_ANTHY_COMMA_HALF:
            if (is_romaji)
                m_all_tables.push_back (&romaji_half_comma_table);
            else
                m_all_tables.push_back (&kana_half_comma_table);
            break;
        default:
            break;
        }
    }
}