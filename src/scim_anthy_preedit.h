/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2004 Takuro Ashie
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

#ifndef __SCIM_ANTHY_PREEDIT_H__
#define __SCIM_ANTHY_PREEDIT_H__

#define Uses_SCIM_ICONV
#include <anthy/anthy.h>
#include <scim.h>
#include <scim_attribute.h>
#include <scim_event.h>
#include <scim_lookup_table.h>
#include "scim_anthy_automaton.h"

using namespace scim;

typedef enum {
    MODE_HIRAGANA,
    MODE_KATAKANA,
    MODE_HALF_KATAKANA,
    MODE_LATIN,
    MODE_WIDE_LATIN,
} InputMode;

typedef enum {
    METHOD_ROMAKANA,
    METHOD_KANA,
} TypingMethod;

typedef enum {
    CANDIDATE_NORMAL        = 0,
    CANDIDATE_LATIN         = -1,
    CANDIDATE_WIDE_LATIN    = -2,
    CANDIDATE_HIRAGANA      = -3,
    CANDIDATE_KATAKANA      = -4,
    CANDIDATE_HALF_KATAKANA = -5,
    LAST_SPECIAL_CANDIDATE  = -6,
} SpecialCandidate;

typedef enum {
    PERIOD_JAPANESE,
    PERIOD_WIDE_LATIN,
    PERIOD_LATIN,
} PeriodStyle;

typedef enum {
    SPACE_NORMAL,
    SPACE_WIDE,
} SpaceType;

typedef enum {
    PREEDIT_CURRENT,
    PREEDIT_RAW_KEY,
    PREEDIT_NO_CONVERSION,
    PREEDIT_NO_CONVERSION_HIRAGANA,
    PREEDIT_CONVERSION,
} PreeditStringType;

class PreeditChar
{
public:
    String     key;
    WideString kana;
    bool       pending;

public:
    PreeditChar (void);
    virtual ~PreeditChar ();

#if 0
    split    ();
    to_valid ();
#endif
};

class Preedit
{
private:
    // converter objects
    Automaton         m_key2kana;
    IConvert          m_iconv;
    anthy_context_t   m_anthy_context;

    // mode flags
    InputMode         m_input_mode;
    TypingMethod      m_typing_method;
    PeriodStyle       m_period_style;
    SpaceType         m_space_type;
    bool              m_auto_convert;

    // raw key code & preedit string
    std::vector<PreeditChar> m_char_list;
    unsigned int             m_char_caret;

    // real position of the caret
    unsigned int      m_caret;

    // conversion string
    WideString        m_conv_string;
    AttributeList     m_conv_attrs;
    std::vector<int>  m_selected_candidates;
    int               m_selected_segment_id;
    int               m_selected_segment_pos;
    bool              m_kana_converting;      /* FIXME! */

public:
    Preedit (void);
    virtual ~Preedit ();

    // get status
    virtual unsigned int  get_length             (PreeditStringType type = PREEDIT_CURRENT);
    virtual WideString    get_string             (PreeditStringType type = PREEDIT_CURRENT);
    virtual AttributeList get_attribute_list     (PreeditStringType type = PREEDIT_CURRENT);

    virtual bool          is_preediting          (void);
    virtual bool          is_converting          (void);
    virtual bool          is_kana_converting     (void);

    // manipulating the preedit string
    virtual bool          append                 (const KeyEvent & key);
    virtual void          erase                  (bool backward = true);
    virtual void          flush_pending          (void);

    // manipulating the conversion string
    virtual void          convert                (SpecialCandidate type = CANDIDATE_NORMAL);
    virtual void          revert                 (void);
    virtual void          commit                 (void);

    // segments of the converted sentence
    virtual int           get_nr_segments        (void);
    virtual int           get_selected_segment   (void);
    virtual void          select_segment         (int segment_id);
    virtual int           get_segment_size       (int segment_id = -1);
    virtual void          resize_segment         (int relative_size,
                                                  int segment_id = -1);

    // candidates for a segment
    virtual void          setup_lookup_table     (CommonLookupTable &table,
                                                  int segment = -1);
    virtual int           get_selected_candidate (int segment_id = -1);
    virtual void          select_candidate       (int candidate_id,
                                                  int segment_id = -1);

    // manipulating the caret
    virtual unsigned int  get_caret_pos          (void);
    virtual void          set_caret_pos          (unsigned int pos);
    virtual void          move_caret             (int len);

    // clear all string
    virtual void          clear                  (void);

    // preference
    virtual void          set_input_mode         (InputMode mode);
    virtual InputMode     get_input_mode         (void);
    virtual void          set_typing_method      (TypingMethod method);
    virtual TypingMethod  get_typing_method      (void);
    virtual void          set_period_style       (PeriodStyle style);
    virtual PeriodStyle   get_period_style       (void);
    virtual void          set_space_type         (SpaceType type);
    virtual SpaceType     get_space_type         (void);
    virtual void          set_auto_convert       (bool autoconv);
    virtual bool          get_auto_convert       (void);

private:
    unsigned int  get_preedit_length             (void);
    WideString    get_preedit_string             (void);
    WideString    get_preedit_string_as_hiragana (void);

    bool          append_str                     (const String & str);
    void          convert_kana                   (SpecialCandidate type);
    void          create_conversion_string       (void);
    void          get_kana_substr                (WideString & substr,
                                                  unsigned int start,
                                                  unsigned int end,
                                                  SpecialCandidate type);
    void          reset_pending                  (void);
    void          set_table                      (TypingMethod method,
                                                  PeriodStyle  period,
                                                  SpaceType    space);
    bool          is_comma_or_period             (const String & str);
};

#endif /* __SCIM_ANTHY_PREEDIT_H__ */
/*
vi:ts=4:nowrap:ai:expandtab
*/
