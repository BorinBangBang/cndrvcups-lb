AC_INIT([pstoufr2cpca], [1.0.0], [no-define])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign])
# AC_CONFIG_SRCDIR([filter/paramlist.h])
AM_CONFIG_HEADER(config.h)

AC_ARG_ENABLE(progpath)
if test "${enable_progpath}" = "" ; then
   enable_progpath="$prefix/bin"
fi

AC_DEFINE_UNQUOTED(PROG_PATH, "$enable_progpath")
AC_SUBST(PROG_PATH)

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lbuftool':
AC_CHECK_LIB([buftool], [main])
# FIXME: Replace `main' with a function in `-lcups':
AC_CHECK_LIB([cups], [main])

# Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS([fcntl.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_CHECK_FUNCS([dup2 memset])

LT_INIT

#AH_VERBATIM([_GNU_SOURCE],[#undef PROG_PATH])
# purpose unclear (has been in Makefile.in (?) without comment and causes 
# failure because is used in `pstoufr2cpca.c`; unclear how this worked before); 
# omitting causes `autoheader: warning: missing template: PROG_PATH`
AC_DEFINE([PROG_PATH], ["/usr/local/bin"], [Description: unclear])

AC_CONFIG_FILES([Makefile filter/Makefile])
AC_OUTPUT