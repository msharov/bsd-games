/*	$NetBSD: pathnames.h,v 1.2 1995/03/24 03:59:17 cgd Exp $	*/

/*-
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)pathnames.h	8.2 (Berkeley) 4/2/94
 */

#ifdef linux /* _PATH_GAMEPROG and PHANTASIA_DIR defined in the Makefile */
#define	_PATH_GOLD	PHANTASIA_DIR "/gold"
#define	_PATH_LASTDEAD	PHANTASIA_DIR "/lastdead"
#define	_PATH_MESS	PHANTASIA_DIR "/mess"
#define	_PATH_MONST	PHANTASIA_DIR "/monsters"
#define	_PATH_MOTD	PHANTASIA_DIR "/motd"
#define	_PATH_PEOPLE	PHANTASIA_DIR "/characs"
#define	_PATH_SCORE	PHANTASIA_DIR "/scoreboard"
#define	_PATH_VOID	PHANTASIA_DIR "/void"
#else
#define	_PATH_GAMEPROG	"/usr/games/phantasia"
#define	_PATH_GOLD	"/var/games/phantasia/gold"
#define	_PATH_LASTDEAD	"/var/games/phantasia/lastdead"
#define	_PATH_MESS	"/var/games/phantasia/mess"
#define	_PATH_MONST	"/var/games/phantasia/monsters"
#define	_PATH_MOTD	"/var/games/phantasia/motd"
#define	_PATH_PEOPLE	"/var/games/phantasia/characs"
#define	_PATH_SCORE	"/var/games/phantasia/scoreboard"
#define	_PATH_VOID	"/var/games/phantasia/void"
#endif