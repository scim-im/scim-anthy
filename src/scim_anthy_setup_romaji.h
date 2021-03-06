/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2004 Hiroyuki Ikezoe
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
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __SCIM_ANTHY_SETUP_ROMAJI_H__
#define __SCIM_ANTHY_SETUP_ROMAJI_H__

#ifdef HAVE_CONFIG_H
  #include <config.h>
#endif

#include <gtk/gtk.h>

#define Uses_SCIM_CONFIG_BASE
#include <scim.h>

namespace scim_anthy {

GtkWidget *romaji_page_create_ui     (void);
void       romaji_page_load_config   (const ConfigPointer &config);
void       romaji_page_save_config   (const ConfigPointer &config);
bool       romaji_page_query_changed (void);

};

#endif /* __SCIM_ANTHY_SETUP_ROMAJI_H__ */
