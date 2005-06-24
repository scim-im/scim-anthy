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

#include <sys/wait.h>

#include "scim_anthy_utils.h"
#include "scim_anthy_default_tables.h"

namespace scim_anthy {

void
convert_to_wide (WideString & wide, const String & str)
{
    if (str.length () < 0)
        return;

    for (unsigned int i = 0; i < str.length (); i++) {
        int c = str[i];
        char cc[2]; cc[0] = c; cc[1] = '\0';
        bool found = false;

        for (unsigned int j = 0; scim_anthy_wide_table[j].code; j++) {
            if ( scim_anthy_wide_table[j].code &&
                *scim_anthy_wide_table[j].code == c)
            {
                wide += utf8_mbstowcs (scim_anthy_wide_table[j].wide);
                found = true;
                break;
            }
        }

        if (!found)
            wide += utf8_mbstowcs (cc);
    }
}

void
convert_to_half (String & half, const WideString & str)
{
    if (str.length () < 0)
        return;

    for (unsigned int i = 0; i < str.length (); i++) {
        WideString wide = str.substr (i, 1);
        bool found = false;

        for (unsigned int j = 0; scim_anthy_wide_table[j].code; j++) {
            if (scim_anthy_wide_table[j].wide &&
                wide == utf8_mbstowcs (scim_anthy_wide_table[j].wide))
            {
                half += scim_anthy_wide_table[j].code;
                found = true;
                break;
            }
        }

        if (!found)
            half += utf8_wcstombs (wide);
    }
}

void
convert_to_katakana (WideString & kata,
                     const WideString & hira,
                     bool half)
{
    if (hira.length () < 0)
        return;

    for (unsigned int i = 0; i < hira.length (); i++) {
        WideString tmpwide;
        bool found = false;

        HiraganaKatakanaRule *table = scim_anthy_hiragana_katakana_table;

        for (unsigned int j = 0; table[j].hiragana; j++) {
            tmpwide = utf8_mbstowcs (table[j].hiragana);
            if (hira.substr(i, 1) == tmpwide) {
                if (half)
                    kata += utf8_mbstowcs (table[j].half_katakana);
                else
                    kata += utf8_mbstowcs (table[j].katakana);
                found = true;
                break;
            }
        }

        if (!found)
            kata += hira.substr(i, 1);
    }
}

void
launch_program (const char *command)
{
    if (!command) return;

    /* split string */
    unsigned int len = strlen (command);
    char tmp[len + 1];
    strncpy (tmp, command, len);
    tmp[len] = '\0';

    char *str = tmp;
    std::vector<char *> array;

    for (unsigned int i = 0; i < len + 1; i++) {
        if (!tmp[i] || isspace (tmp[i])) {
            if (*str) {
                tmp[i] = '\0';
                array.push_back (str);
            }
            str = tmp + i + 1;
        }
    }

    if (array.size () <= 0) return;
    array.push_back (NULL);

    char *args[array.size()];
    for (unsigned int i = 0; i < array.size (); i++)
        args[i] = array[i];


    /* exec command */
	pid_t child_pid;

	child_pid = fork();
	if (child_pid < 0) {
		perror("fork");
	} else if (child_pid == 0) {		 /* child process  */
		pid_t grandchild_pid;

		grandchild_pid = fork();
		if (grandchild_pid < 0) {
			perror("fork");
			_exit(1);
		} else if (grandchild_pid == 0) { /* grandchild process  */
			execvp(args[0], args);
			perror("execvp");
			_exit(1);
		} else {
			_exit(0);
		}
	} else {                              /* parent process */
		int status;
		waitpid(child_pid, &status, 0);
	}
}

}
