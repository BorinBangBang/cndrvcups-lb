filterdir = $(libdir)/cups/filter

filter_PROGRAMS = pstoufr2cpca

pstoufr2cpca_SOURCES = \
	pstoufr2cpca_func.c pstoufr2cpca_func.h pstoufr2cpca.c paramlist.c paramlist.h

pstoufr2cpca_LDADD = -lbuftool -lcups -llog4c -lpthread

AM_CFLAGS = -O2 -Wall -fPIC

ACLOCAL_AMFLAGS = -I m4
