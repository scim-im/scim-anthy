/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2006 Takashi Nakamoto <bluedwarf@bpost.plala.or.jp>
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

#ifndef __SCIM_ANTHY_TRAY_H__
#define __SCIM_ANTHY_TRAY_H__

#define Uses_SCIM_HELPER
#define Uses_SCIM_CONFIG_BASE
#define Uses_STL_MAP
#include <gtk/scimtrayicon.h>
#include <gtk/gtk.h>
#include "scim_anthy_const.h"

//#define USE_GTK_BUTTON_FOR_TRAY

using namespace scim;

class AnthyTray; // pre definition

typedef struct _MenuItemProperties
{
    const char *label;
    const char *tips;
          int   command;
          int   command_data;
} MenuItemProperties;

class AnthyTray
{
public:
    AnthyTray ();
    ~AnthyTray ();

    void popup_input_mode_menu  (GdkEventButton *event);
    void popup_general_menu     (GdkEventButton *event);
    void activated_item         (GtkMenuItem        *item);
    void attach_input_context   (const HelperAgent  *agent,
                                 int                 ic,
                                 const String       &ic_uuid);

    void set_input_mode         (InputMode           mode);
    void show                   (void);
    void hide                   (void);

private:
    void create_tray            (void);
    void destroy_current_tray   (void);

private:
    const HelperAgent           *m_agent;
    int                          m_ic;
    String                       m_ic_uuid;

    bool                         m_initialized;
    bool                         m_visible;

    ScimTrayIcon                *m_tray;
    GtkWidget                   *m_box;

#ifdef USE_GTK_BUTTON_FOR_TRAY
    GtkWidget                   *m_tray_button;
#else
    GtkWidget                   *m_tray_event_box;
    GtkWidget                   *m_tray_label;
#endif

    GtkWidget                   *m_dummy;

    GtkWidget                   *m_input_mode_menu;
    GtkTooltips                 *m_tooltips;
};

#endif /* __SCIM_ANTHY_TRAY_H__ */
