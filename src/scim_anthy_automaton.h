/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2004 Hiroyuki Ikezoe
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

#ifndef __SCIM_ANTHY_AUTOMATON_H__
#define __SCIM_ANTHY_AUTOMATON_H__

#define Uses_SCIM_ICONV
#include <scim.h>
using namespace scim;

typedef struct _TempTable
{
  char *string;
  char *result;
  char *cont;
} TempTable;

typedef struct _HiraganaKatakanaRule
{
    char *hiragana;
    char *katakana;
    char *half_katakana;
} HiraganaKatakanaRule;

typedef struct _WideRule
{
    char *code;
    char *wide;
} WideRule;

class ConvRule
{
    WideString *m_string;
    WideString *m_result;
    WideString *m_continue;

public:
    ConvRule ();
    virtual ~ConvRule();
};

class Automaton
{
    WideString    m_pending;
    TempTable    *m_table;
    unsigned int  m_table_len;
    TempTable    *m_exact_match;
    std::vector<TempTable*> m_tables;

public:
    enum {
        HAS_PARSHAL_MATCH,
        HAS_EXACT_MATCH,
        COMMIT_PREV_PENDING,
    };

    Automaton ();
    virtual ~Automaton ();

    virtual bool       append             (const String & str,
                                           WideString   & result,
                                           WideString   & pending);
    virtual void       clear              (void);

    virtual bool       is_pending         (void);
    virtual WideString get_pending        (void);
    virtual WideString flush_pending      (void);

#if 1 /* FIXME! */
    virtual void       set_table          (TempTable *table);
    virtual void       append_table       (TempTable *table);
    virtual void       remove_table       (TempTable *table);
#endif
};
#endif /* __SCIM_ANTHY_AUTOMATON_H__ */
/*
vi:ts=4:nowrap:ai:expandtab
*/
