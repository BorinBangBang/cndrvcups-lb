#################################################
# LIPS IV Driver for PDAPI               #
#   Integrated Makefile                  #
#################################################

### Macros ###
#DRIVERDIR = driver
FILTERDIR  = pstoufr2cpca
PPDDIR     = ppd
CPCADIR    = cpca
CNGPLPDIR  = cngplp
SRCDIRS = $(FILTERDIR) $(PPDDIR) $(CPCADIR) $(CNGPLPDIR)
SUBDIRS = $(SRCDIRS) tests
# tests and its subdirs are handled in tests/pstoufr2cpca/filter/configure.ac 
# (this might change when more unittests in higher subdirs are added)

ACLOCAL_AMFLAGS = -I m4

### Install modules ###
install-exec-local:
	for dir in $(SRCDIRS); do\
		echo Installing modules $$dir ...;\
		(cd $$dir; make install) || exit 1;\
	done

### Uninstall modules ###
uninstall-local:
	for dir in $(SRCDIRS); do\
		echo Uninstalling modules $$dir ...;\
		(cd $$dir; make uninstall) || exit 1;\
	done

### Clean-up objects files ###
clean-local:
	for dir in $(SRCDIRS); do\
		echo Cleaning $$dir ...;\
		(cd $$dir; make clean) || exit 1;\
	done

### Clean-up objects and configure files ###
distclean-local:
	for dir in $(SRCDIRS); do\
		echo distclean $$dir ...;\
		(cd $$dir; make distclean) || exit 1;\
	done
