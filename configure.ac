dnl Process this file with autoconf to produce a configure script.
AC_INIT(src/include/config.h.in)
AC_CONFIG_HEADER(src/include/config.h)

PACKAGE=MathSpad

AC_SUBST(PACKAGE)

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CXX
AC_PROG_LEX
AC_PROG_MAKE_SET
AC_PROG_YACC
AC_PROG_INSTALL

AC_CHECK_TOOL(MAKEDEPEND, makedepend, :)

AC_CHECK_PROGS(BDFTOPCF, bdftopcf, :)
AC_CHECK_PROGS(MKFONTDIR, mkfontdir dxmkfontdir xtmkfontdir, :)
AC_CHECK_PROGS(COMPRESS, compress, :)
AC_PATH_PROG(CONVERTFONT, convertfont, :, $PATH:/usr/openwin/bin)
AC_PATH_PROG(BLDFAMILY, bldfamily, :, $PATH:/usr/openwin/bin)
AC_PATH_PROG(MAKEPSRES, makepsres, :, $PATH:/usr/openwin/bin)

if test "$BLDFAMILY" = ":"; then
	XNEWSFONT=""
else
	XNEWSFONT='$(XNEWSFONT)'
fi

if test "$MAKEPSRES" = ":"; then
	:
else
	XNEWSFONT="$XNEWSFONT "'$(PSFONT)'
fi
AC_SUBST(XNEWSFONT)

if test "$BDFTOPCF" = ":" ; then
	if test "$COMPRESS" = ":"; then
		PCFFONT='$(BDFFONT)'
	else
		PCFFONT='$(BDFZFONT)'
	fi
else
	if test "$COMPRESS" = ":"; then
		PCFFONT='$(PCFFONT)'
	else
		PCFFONT='$(PCFZFONT)'
	fi
fi
AC_SUBST(PCFFONT)

AM_PROG_LIBTOOL
AC_PATH_X
AC_PATH_XTRA

dnl Checks for libraries.
dnl Replace `main' with a function in -lX11:
dnl AC _ CHECK _ LIB ( X11 ,  XOpenDisplay )

dnl Replace `main' with a function in -lc:
dnl AC _ CHECK _ LIB ( c ,  main )

dnl Replace `main' with a function in -ldl:
AC_CHECK_LIB(dl, dlopen)

dnl Replace `main' with a function in -lsocket:
dnl AC _ CHECK _ LIB ( socket ,  main )

dnl Checks for header files.
AC_HEADER_DIRENT
AC_HEADER_STDC
AC_CHECK_HEADERS(fcntl.h limits.h sys/file.h unistd.h)

dnl Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_STRUCT_TM

dnl Checks for library functions.
AC_FUNC_MEMCMP
AC_TYPE_SIGNAL
AC_CHECK_FUNCS(getcwd mkdir putenv strdup strerror strstr strtol)
AC_CHECK_LIB(mp, pow, AC_DEFINE([HAVE_POW_IN_LIBMP],[],[description]))


MAKE_RULES=Make.rules
AC_SUBST_FILE(MAKE_RULES)

AC_OUTPUT(
Make.rules
Makefile
src/Make.rules
src/Makefile
src/include/Makefile
src/language/Makefile
src/module/Makefile
src/treeedit/Makefile
src/unicode/Makefile
src/windows/Makefile
src/util/Makefile
src/templates/Makefile
src/markup/Makefile
src/tools/Makefile
src/output/Makefile
src/keyboard/Makefile
src/documents/Makefile
mpk/Makefile
maps/Makefile
scripts/Makefile
fonts/Makefile
latex/Makefile
help/Makefile
stencils/Makefile
)
