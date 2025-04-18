# Process this file with autoconf to produce a configure script.
AC_PREREQ(2.59)

m4_define([scim_anthy_major_version], [1])
m4_define([scim_anthy_minor_version], [3])
m4_define([scim_anthy_micro_version], [2])
m4_define([scim_anthy_version],
          [scim_anthy_major_version.scim_anthy_minor_version.scim_anthy_micro_version])

AC_INIT(scim-anthy, scim_anthy_version, ashie@homa.ne.jp)
AC_CONFIG_SRCDIR([configure.ac])

# Save this value here, since automake will set cflags and cxxflags later
cflags_set=${CFLAGS+set}
cppflags_set=${CPPFLAGS+set}

SCIM_ANTHY_MAJOR_VERSION=scim_anthy_major_version
SCIM_ANTHY_MINOR_VERSION=scim_anthy_minor_version
SCIM_ANTHY_MICRO_VERSION=scim_anthy_micro_version

SCIM_ANTHY_VERSION=scim_anthy_version

AC_SUBST(SCIM_ANTHY_MAJOR_VERSION)
AC_SUBST(SCIM_ANTHY_MINOR_VERSION)
AC_SUBST(SCIM_ANTHY_MICRO_VERSION)
AC_SUBST(SCIM_ANTHY_VERSION)

# Init automake stuff
AM_INIT_AUTOMAKE(1.9)
AM_CONFIG_HEADER(config.h)

# Init gettext
ALL_LINGUAS="de ja"
AM_GNU_GETTEXT
AM_GNU_GETTEXT_VERSION(0.16.1)

GETTEXT_PACKAGE=scim-anthy
AC_SUBST(GETTEXT_PACKAGE)
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE", [The gettext domain])

# Init libtool
AC_LIBTOOL_DLOPEN
AC_PROG_LIBTOOL
AC_LIB_LTDL
AC_SUBST(LIBTOOL_DEPS)

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_YACC
AC_LANG(C++)

AC_C_CONST
AC_TYPE_SIZE_T
AC_TYPE_PID_T
AC_CHECK_TYPES([ptrdiff_t])

# Checks for libraries.

SCIM_VERSION=1.2.0

PKG_CHECK_MODULES(SCIM,[scim >= $SCIM_VERSION])

# Check if we should build setup module
PKG_CHECK_MODULES(SCIM_GTKUTILS,[scim-gtkutils >= $SCIM_VERSION],
		  		[SCIM_HAS_GTKUTILS=yes],
				[SCIM_HAS_GTKUTILS=no])

AC_SUBST(SCIM_VERSION)

AM_CONDITIONAL(SCIM_BUILD_SETUP, [test "$SCIM_HAS_GTKUTILS" = "yes"])
AM_CONDITIONAL(SCIM_BUILD_TRAY, [test "$SCIM_HAS_GTKUTILS" = "yes"])
AM_CONDITIONAL(SCIM_BUILD_HELPER,[test "$SCIM_HAS_GTKUTILS" = "yes"])

if test "$SCIM_HAS_GTKUTILS" = "yes"; then
  SCIM_BUILD_SETUP=1
  SCIM_BUILD_TRAY=1
  SCIM_BUILD_HELPER=1
  AC_DEFINE([SCIM_ANTHY_BUILD_TRAY], [], [build tray icon])
else
  SCIM_BUILD_SETUP=0
  SCIM_BUILD_TRAY=0
  SCIM_BUILD_HELPER=0
fi

AC_SUBST(SCIM_BUILD_SETUP)
AC_SUBST(SCIM_BUILD_TRAY)
AC_SUBST(SCIM_BUILD_HELPER)

# Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_HEADER_TIME
AC_HEADER_STDBOOL
AC_CHECK_HEADERS([argz.h fcntl.h float.h inttypes.h langinfo.h libintl.h limits.h locale.h malloc.h stddef.h stdint.h stdio_ext.h stdlib.h string.h strings.h sys/param.h sys/time.h unistd.h wchar.h])

# Checks for library functions.
AC_FUNC_ALLOCA
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_VPRINTF
AC_CHECK_FUNCS([gettimeofday isascii])
AC_CHECK_FUNCS([nl_langinfo strcspn strstr ])
AC_SUBST(ac_aux_dir)

# Checks for anthy
ANTHY_VERSION=7500
PKG_CHECK_MODULES(ANTHY, [anthy-unicode], [], [
    PKG_CHECK_MODULES(ANTHY,[anthy >= $ANTHY_VERSION])
])

# libtool option to control which symbols are exported
# right now, symbols starting with _ are not exported
LIBTOOL_EXPORT_OPTIONS='-export-symbols-regex "^[[^_]].*"'
AC_SUBST(LIBTOOL_EXPORT_OPTIONS)

# Extra args.
AC_ARG_ENABLE(debug,
	      [  --enable-debug     Turn on debugging],
	      [case "${enableval}" in
	       yes) debug=yes ;;
	       no)  debug=no ;;
	       *) AC_MSG_ERROR(bad value ${enableval} for --enable-debug) ;;
       	      esac],[debug=no])

if test "x$debug" = "xyes"; then
  test "$cflags_set" = set || CFLAGS="$CFLAGS -g"
  test "$cppflags_set" = set || CPPFLAGS="$CXXFLAGS -g"
  SCIM_DEBUG_FLAGS="-DENABLE_DEBUG=1"
else
  SCIM_DEBUG_FLAGS=""
fi
AC_SUBST(SCIM_DEBUG_FLAGS)

SCIM_DATADIR=`$PKG_CONFIG --variable=scimdatadir scim`
SCIM_ICONDIR=`$PKG_CONFIG --variable=icondir scim`
SCIM_MODULEDIR=`$PKG_CONFIG --variable=moduledir scim`

if test "x$SCIM_DATADIR" = "x"; then
  SCIM_DATADIR=${datadir}/scim
fi

if test "x$SCIM_ICONDIR" = "x"; then
  SCIM_ICONDIR=${datadir}/scim/icons
fi

if test "x$SCIM_MODULEDIR" = "x"; then
  SCIM_MODULEDIR=${libdir}/scim-1.0
fi

SCIM_ANTHY_DATADIR=${SCIM_DATADIR}/Anthy

AC_SUBST(SCIM_DATADIR)
AC_SUBST(SCIM_ICONDIR)
AC_SUBST(SCIM_MODULEDIR)
AC_SUBST(SCIM_ANTHY_DATADIR)
        
AC_CONFIG_FILES([
Makefile
po/Makefile.in
m4/Makefile
src/Makefile
data/Makefile
])

AC_OUTPUT
