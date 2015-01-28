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

# Rather than making the tests a subpackage because it'd be more elegant to 
# check for the test headers in there, we make this configure.ac the only one, 
# because the project doesn't fulfill requirements of a modular structure 
# otherwise

AC_INIT([cndrvcups-common], [2.90], [krichter722@aol.de])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign -Wall subdir-objects]) 
AC_PROG_CC
AM_PROG_AR
AM_PROG_CC_C_O

AC_INCLUDES_DEFAULT
AC_CHECK_HEADER(check.h,
    [],
    [AC_MSG_ERROR([Couldn't find or include check.h])])

LT_INIT # needs to be after AM_PROGS_AR
AC_CONFIG_HEADERS([config.h])
AC_DEFINE([PROG_PATH], ["/usr/local/bin"], [Description: unclear, potentially dangerous and/or destructive])

AC_CONFIG_SUBDIRS([pstoufr2cpca ppd cpca cngplp ])
AC_CONFIG_FILES([Makefile pstoufr2cpca/Makefile ppd/Makefile cpca/Makefile cngplp/Makefile tests/Makefile tests/pstoufr2cpca/Makefile tests/pstoufr2cpca/filter/Makefile])
AC_OUTPUT