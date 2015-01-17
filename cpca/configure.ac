#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

AC_INIT([libcnpk.so], [1.0.0], [no-define])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_MACRO_DIR([m4])
# AC_CONFIG_SRCDIR([cnpklib/cnpkopt.c])
AM_CONFIG_HEADER(config.h)

LT_VERSION=1:0:1
LT_RELEASE=1
AC_SUBST(LT_VERSION)
AC_SUBST(LT_RELEASE)

AC_ARG_ENABLE(progpath)
if test "${enable_progpath}" = "" ; then
   enable_progpath="$prefix/bin"
fi

AC_DEFINE_UNQUOTED(PROG_PATH, "$enable_progpath")
AC_SUBST(PROG_PATH)

# Checks for programs.
AC_PROG_CC
AM_PROG_LIBTOOL

# Checks for libraries.

AH_VERBATIM([_GNU_SOURCE],[#undef PROG_PATH])

# Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS([stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_FUNC_VPRINTF
AC_CHECK_FUNCS([memset strcasecmp strdup strrchr])

AC_OUTPUT([Makefile
                 cnpklib/Makefile])
