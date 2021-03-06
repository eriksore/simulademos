/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */
/* $Id: $ */

/* Copyright (C) 1997 Sverre Hvammen Johansen,
 * Department of Informatics, University of Oslo.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. */
/* Additional compiler flags for building shared library objects */
#define PIC_FLAG " -fPIC -DPIC"

/* Compiler flag to prevent dynamic linking */
#define LINK_STATIC_FLAG "-static"

/* How to pass a linker flag through the compiler.*/
#define WL_FLAG "-Wl,"

/* Define cpu type derived from system type.  */
#define CPU_TYPE "I686"

/* Define if we have signal sigbus.  */
#define HAVE_SIGBUS 1

/* Define if we have signal sigfpe.  */
#define HAVE_SIGFPE 1

/* Define if we have signal sigill.  */
#define HAVE_SIGILL 1

/* Define if we have signal sigsegv.  */
#define HAVE_SIGSEGV 1

/* Define if we have signal sigsys.  */
#define HAVE_SIGSYS 1

/* Define if we have signal sigtrap.  */
#define HAVE_SIGTRAP 1

/* Define the system type we are running.  */
#define SYSTEM_TYPE "i686-pc-linux-gnu"

/* Define manufacturer derived from system type.  */
#define MANUFACTURER "PC"

/* Define os type derived from system type.  */
#define OS_TYPE "LINUX-GNU"

/* Define os type including version derived from system type.  */
#define OS_TYPE_VERSION "LINUX-GNU"

/* Define if temporary file have to be opened in binary mode.  */
/* #undef OPEN_FILE_IN_BINARY_MODE */

/* Define version string */
#define PACKAGE_VERSION ""

/* Define version string */
#define PACKAGE "cim"

/* Define if ISO_LATIN is implemented.  */
#define ISO_LATIN 1

/* Define input_line_length.  */
#define INPUT_LINE_LENGTH 80

/* Define output line length.  */
#define OUTPUT_LINE_LENGTH 80

/* Define lines per page.  */
#define LINES_PER_PAGE 60

/* Define the size of the heap */
#define DYNMEMSIZEKB 512

/* Define if dump is implemented.  */
/* #undef DUMP */

/* Define if the implementation conforms to IEEE-754.  */
#define FLOAT_IEEE 1

/* Define if the implementation conforms to the vax architecture.  */
/* #undef FLOAT_VAX */

/* Define MIN_DOUBLE and MAX_DOUBLE  */
#define MAX_DOUBLE DBL_MAX
#define MIN_DOUBLE DBL_MIN

/* Define alignment */
#define ALIGNMENT 8


/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getdomainname' function. */
#define HAVE_GETDOMAINNAME 1

/* Define to 1 if you have the `getegid' function. */
#define HAVE_GETEGID 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `ft' library (-lft). */
/* #undef HAVE_LIBFT */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the `time' function. */
#define HAVE_TIME 1

/* Define to 1 if you have the `times' function. */
#define HAVE_TIMES 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlink' function. */
#define HAVE_UNLINK 1

/* Define to 1 if you have the <values.h> header file. */
#define HAVE_VALUES_H 1

/* Name of package */
#define PACKAGE "cim"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of a `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "3.37"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif

/* Define the adress of the first data location.  */
#define FIRST_DATA_LOCATION ((int)(&__start_data_segment))

/* Define MAX_INT */
#if SIZEOF_LONG == 8
#define	MAX_INT (~(1L<<63))
#else
#define	MAX_INT (~(1L<<31))
#endif

/* Define TYPE_32_INT */
#if SIZEOF_LONG == 8
#define TYPE_32_INT int
#else
#define TYPE_32_INT long
#endif

