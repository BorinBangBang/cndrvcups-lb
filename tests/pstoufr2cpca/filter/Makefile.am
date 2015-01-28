AUTOMAKE_OPTIONS = subdir-objects

pstoufr2cpca_func_test_PROGRAMS = pstoufr2cpca_func_test
pstoufr2cpca_func_testdir = $(datadir)/foo
pstoufr2cpca_func_test_SOURCES = pstoufr2cpca_func_test.c \
    $(top_srcdir)/pstoufr2cpca/filter/pstoufr2cpca_func.c \
    $(top_srcdir)/pstoufr2cpca/filter/pstoufr2cpca_func.h \
    $(top_srcdir)/pstoufr2cpca/filter/paramlist.h \
    $(top_srcdir)/pstoufr2cpca/filter/paramlist.c

AM_CFLAGS = -O2 -Wall -fPIC

ACLOCAL_AMFLAGS = -I m4

pstoufr2cpca_func_test_LDADD = -lbuftool -lcups 
TESTS = pstoufr2cpca_func_test

pstoufr2cpca_func_test_LDFLAGS = -pthread -lcheck_pic  -pthread -lrt -lm 

TEST_PPD_FILE_PATH = $(top_srcdir)/ppd/CNCUPSMF4100ZK.ppd
