/*
 * <char.h>
 *
 * Open Hack'Ware BIOS misc char devices definitions.
 * 
 *  Copyright (c) 2005 Jocelyn Mayer
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License V2
 *   as published by the Free Software Foundation
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#if !defined (__OHW_DEV_CHAR_H__)
#define __OHW_DEV_CHAR_H__

/* Keyboard devices registration */
int pckbd_register (void);
void *adb_kbd_new (void *private);

#endif /* !defined (__OHW_DEV_CHAR_H__) */
