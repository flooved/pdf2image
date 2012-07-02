/* aconf.h.  Generated from aconf.h.in by configure.  */
/*
 * aconf.h
 *
 * Copyright 2002 Derek B. Noonburg
 */

#ifndef ACONF_H
#define ACONF_H

/*
 * Full path for the system-wide xpdfrc file.
 */
#define SYSTEM_XPDFRC "/usr/local/packages/pdf2image-0.53/etc/xpdfrc"

/*
 * Various include files and functions.
 */
#define HAVE_DIRENT_H 1
#define HAVE_STRINGS_H 1
#define HAVE_POPEN 1
#define HAVE_MKSTEMP 1
#define HAVE_MKSTEMPS 1

#define GHOSTSCRIPT "gs"

/*
 * This is defined if using libXpm.
 */
/* #undef HAVE_X11_XPM_H */

/*
 * One of these is defined if using FreeType (version 1 or 2).
 */
/* #undef HAVE_FREETYPE_FREETYPE_H */
/* #undef FREETYPE2 */

/*
 * Defined if the Splash library is avaiable.
 */
/* #undef HAVE_SPLASH */

#endif
