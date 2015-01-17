#
# Modified by Canon INC. on Jul. 2010
# [Change Log]
# the path and name of input file changed.
# keystr.h ... sort & unique line.
#
#!/bin/sh
/usr/bin/perl keytext.pl <.>keystrtmp.h
sort -u keystrtmp.h -o keystr.h
rm keystrtmp.h

/usr/bin/intltool-extract --type=gettext/glade files/cngplp_ufr2.glade> /dev/null

cat >gladestr.h <<EOF
EOF
cat files/cngplp_ufr2.glade.h >>gladestr.h
rm files/cngplp_ufr2.glade.h
