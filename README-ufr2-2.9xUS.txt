================================================================================
Canon UFR II Printer Driver Version 2.90 for Linux

PLEASE READ THIS DOCUMENT CAREFULLY
================================================================================


--------------------------------------------------------------------------------
Trademarks

Adobe, Acrobat, Acrobat Reader, PostScript and PostScript 3 are trademarks of 
Adobe Systems Incorporated.
Linux is a trademark of Linus Torvalds.
OpenOffice.org and the seagull logo are registered trademarks of The Apache 
Software Foundation.
HP-GL is a trademark of Hewlett-Packard Company.
UNIX is a trademark of The Open Group in the United States and other countries.
Other product and company names herein may be the trademarks of their respective
owners.
--------------------------------------------------------------------------------


--------------------------------------------------------------------------------
CONTENTS

Before Starting
1. Introduction
2. Distribution File Structure of the Canon UFR II Printer Driver for Linux
3. Hardware Requirements
4. Cautions, Limitations, and Restrictions
--------------------------------------------------------------------------------


1. Introduction-----------------------------------------------------------------
Thank you for using the Canon UFR II/UFR II LT Printer Driver for Linux. This 
printer driver provides printing functions for Canon LBP/imageRUNNER ADVANCE/
Color imageRUNNER/imageRUNNER/imagePRESS/MF series products operating under the
CUPS (Common Unix Printing System) environment, a printing system that functions
on Linux operating systems.
 
2. Distribution File Structure of the Canon UFR II Printer Driver for Linux ----
The Canon UFR II Printer Driver for Linux distribution files are as follows:
Furthermore, the file name for the CUPS driver common module and printer driver
module differs depending on the version.

- README-ufr2-2.9xUS.txt (This document)
Describes supplementary information on the Canon UFR II Printer Driver for 
Linux.

- LICENSE-ufr2drv-2.9x.txt
Describes User License Agreement on the Canon UFR II Printer Driver for Linux.

- guide-ufr2-2.9xUS.tar.gz
Online manual that explains how to use the Canon UFR II Printer Driver for 
Linux.
This includes the system requirements, installation, and usage of the Canon UFR
II Printer Driver for Linux.
Because this file is in a compressed format, you need to extract it to the 
appropriate directory before reading.

- cndrvcups-common-2.90-X.i386.rpm (for 32-bit)
- cndrvcups-common-2.90-X.x86_64.rpm (for 64-bit)
- cndrvcups-common_2.90-X_i386.deb (for Debian 32-bit)
- cndrvcups-common_2.90-X_amd64.deb (for Debian 64-bit)
Installation package for the CUPS driver common module used by the Canon UFR II
Printer Driver for Linux.

- cndrvcups-ufr2-us-2.90-X.i386.rpm (for 32-bit)
- cndrvcups-ufr2-us-2.90-X.x86_64.rpm (for 64-bit)
- cndrvcups-ufr2-us_2.90-X_i386.deb (for Debian 32-bit)
- cndrvcups-ufr2-us_2.90-X_amd64.deb (for Debian 64-bit)
Installation package for the Canon UFR II Printer Driver for Linux.

- cndrvcups-common-2.90-X.tar.gz
Source file for the CUPS driver common module used by the Canon UFR II Printer 
Driver for Linux.

- cndrvcups-lb-2.90-X.tar.gz
Source file for the Canon UFR II Printer Driver for Linux.


3. Hardware Requirements -------------------------------------------------------
This printer driver can be used with the following hardware environment.

Hardware:
Computer that is enable to operate Linux, with x86 compatible CPU (32-bit or 
64-bit)


- Supported Printer
The Canon UFR II Printer Driver for Linux supports the following Canon products.
Refer to the following list to find the PPD file and communication environment 
corresponding to the printer you are using.
* Printer models with "A" and "A*" after their names in the "BIDI (bi-
directional)" column require bi-directional printing connections. Printer models
with "A*" use uni-directional printing when connected via USB.
* Printer models with "A" after their names in the "IPv6" column support IPv6.

  Canon LBP6650/3470 UFR II (CNCUPSLBP6650ZS.ppd)
  LBP3470 (BIDI: -, IPv6: A)

  Canon LBP6670 UFR II (CNCUPSLBP6670ZS.ppd)
  LBP6670dn (BIDI: -, IPv6: A)

  Canon LBP7660C UFR II (CNCUPSLBP7660CZS.ppd)
  LBP7660Cdn (BIDI: -, IPv6: A)

  Canon iR1018/1022/1023 UFRII LT (CNCUPSIR1023ZS.ppd)
  imageRUNNER 1023 (BIDI: -, IPv6: -)

  Canon iR1020/1024/1025 UFRII LT (CNCUPSIR1025ZS.ppd)
  imageRUNNER 1025/1025iF/1025N (BIDI: -, IPv6: -)

  Canon iR1730/1740/1750 UFRII LT (CNCUPSIR1750ZS.ppd)
  imageRUNNER 1730/1740/1750 (BIDI: -, IPv6: -)

  Canon iR2002/2202 UFRII LT (CNCUPSIR2202ZS.ppd)
  imageRUNNER 2202N (BIDI: -, IPv6: A)

  Canon iR2016 UFRII LT (CNCUPSIR2016ZS.ppd)
  imageRUNNER 2016 (BIDI: -, IPv6: -)

  Canon iR2018 UFRII LT (CNCUPSIR2018ZS.ppd)
  imageRUNNER 2018 (BIDI: -, IPv6: -)

  Canon iR2020 UFRII LT (CNCUPSIR2020ZS.ppd)
  imageRUNNER 2020 (BIDI: -, IPv6: -)

  Canon iR2022/2025/2030 UFRII LT (CNCUPSIR2030ZS.ppd)
  imageRUNNER 2022, imageRUNNER 2025, imageRUNNER 2030 (BIDI: -, IPv6: -)

  Canon iR2318/2320 UFRII LT (CNCUPSIR2320ZS.ppd)
  imageRUNNER 2320L (BIDI: -, IPv6: -)

  Canon iR2420 UFRII LT (CNCUPSIR2420ZS.ppd)
  imageRUNNER2420 (BIDI: -, IPv6: -)

  Canon iR2422 UFRII LT (CNCUPSIR2422ZS.ppd)
  imageRUNNER2422 (BIDI: -, IPv6: -)

  Canon iR 2520 UFRII LT (CNCUPSIR2520ZS.ppd)
  imageRUNNER2520 (BIDI: -, IPv6: -)

  Canon iR 2525/2530 UFRII LT (CNCUPSIR2530ZS.ppd)
  imageRUNNER2525/2530 (BIDI: -, IPv6: -)

  Canon iR 2535/2545 UFRII LT (CNCUPSIR2545ZS.ppd)
  imageRUNNER2535/2535i/2545/2545i (BIDI: -, IPv6: -)

  Canon iRC1021/1022 UFRII LT (CNCUPSIRC1022ZS.ppd)
  Color imageRUNNER C1022/C1022i (BIDI: -, IPv6: -)

  Canon iRC1028/1030 UFRII LT (CNCUPSIRC1030ZS.ppd)
  Color imageRUNNER C1028/C1030 (BIDI: A, IPv6: -)

  Canon L90/L160/L230 UFRII LT (CNCUPSL230ZS.ppd)
  L90 (BIDI: -, IPv6: -)

  Canon L100/L150/L170 UFRII LT (CNCUPSL170ZS.ppd)
  L100 (BIDI: -, IPv6: -)

  Canon L190/L410 Series UFRII LT (CNCUPSL410ZS.ppd)
  L190/L410 Series (BIDI: -, IPv6: -)

  Canon LC600 UFRII LT (CNCUPSLC600ZS.ppd)
  LC600 Series (BIDI: -, IPv6: -)

  Canon LC800/L3000 UFRII LT (CNCUPSLC3000ZS.ppd)
  LC800 Series (BIDI: -, IPv6: -)

  Canon D400-450 (CNCUPSD450ZS.ppd)
  D400-450 (BIDI: -, IPv6: -)

  Canon D460-490 (CNCUPSD490ZS.ppd)
  D460-490 (BIDI: -, IPv6: -)

  Canon D500 Series UFRII LT (CNCUPSD500ZS.ppd)
  D500 Series (BIDI: -, IPv6: -)

  Canon D530/D560 UFRII LT (CNCUPSD560ZS.ppd)
  D530/D560 (BIDI: -, IPv6: -)

  Canon D1100/MF6600 UFRII LT (CNCUPSD1100ZS.ppd)
  D1100 Series (BIDI: -, IPv6: -)

  Canon D1300/MF6700 UFRII LT (CNCUPSD1300ZS.ppd)
  D1300 Series (BIDI: -, IPv6: A)

  Canon MF3010 (CNCUPSMF3010ZS.ppd)
  MF3010 (BIDI: -, IPv6: -)

  Canon MF4100 Series UFRII LT (CNCUPSMF4100ZS.ppd)
  MF4100 Series (BIDI: -, IPv6: -)

  Canon MF4200 Series UFRII LT (CNCUPSMF4200ZS.ppd)
  MF4200 Series (BIDI: -, IPv6: -)

  Canon MF4320-4350 (CNCUPSMF4350ZS.ppd)
  MF4320-4350 (BIDI: -, IPv6: -)

  Canon MF4360-4390 (CNCUPSMF4390ZS.ppd)
  MF4360-4390 (BIDI: -, IPv6: -)

  Canon MF4400 UFRII LT (CNCUPSMF4400ZS.ppd)
  MF4400 Series (BIDI: -, IPv6: -)

  Canon MF4500 UFRII LT (CNCUPSMF4500ZS.ppd)
  MF4500 Series (BIDI: -, IPv6: -)

  Canon MF4500w Series (CNCUPSMF4500WZS.ppd)
  MF4500w (BIDI: -, IPv6: -)

  Canon MF4600 Series UFRII LT (CNCUPSMF4600ZS.ppd)
  MF4600 Series (BIDI: -, IPv6: -)

  Canon MF4700 Series UFRII LT (CNCUPSMF4700ZS.ppd)
  MF4700 Series (BIDI: -, IPv6: -)

  Canon MF4800 Series UFRII LT (CNCUPSMF4800ZS.ppd)
  MF4800 Series (BIDI: -, IPv6: -)

  Canon MF5800 Series UFRII LT (CNCUPSMF5800ZS.ppd)
  MF5800 Series (BIDI: -, IPv6: -)

  Canon MF5900 Series UFRII LT (CNCUPSMF5900ZS.ppd)
  MF5900 Series (BIDI: -, IPv6: A)

  Canon MF6100 Series UFRII LT (CNCUPSMF6100ZS.ppd)
  MF6100 Series (BIDI: -, IPv6: A)

  Canon MF6500 Series UFRII LT (CNCUPSMF6500ZS.ppd)
  MF6500 Series (BIDI: -, IPv6: -)

  Canon MF7200 Series UFRII LT (CNCUPSMF7200ZS.ppd)
  MF7200 Series (BIDI: -, IPv6: -)

  Canon MF7400 Series UFRII LT (CNCUPSMF7400ZS.ppd)
  MF7400 Series (BIDI: -, IPv6: -)

  Canon MF8000 Series UFRII LT (CNCUPSMF8000ZS.ppd)
  MF8000 Series (BIDI: A, IPv6: A)

  Canon MF8000C Series UFRII LT (CNCUPSMF8000CZS.ppd)
  MF8000C (BIDI: A, IPv6: A)

  Canon MF8200C Series UFRII LT (CNCUPSMF8200CZS.ppd)
  MF8200C (BIDI: A, IPv6: A)

  Canon MF8300 Series UFRII LT (CNCUPSMF8300ZS.ppd)
  MF8300 Series (BIDI: A, IPv6: A)

  Canon MF8300C Series UFRII LT (CNCUPSMF8300CZS.ppd)
  MF8300C (BIDI: A, IPv6: A)

  Canon MF8400 UFRII LT (CNCUPSMF8400ZS.ppd)
  MF8400 Series (BIDI: A, IPv6: -)

  Canon MF8500C Series UFRII LT (CNCUPSMF8500CZS.ppd)
  MF8500C (BIDI: A, IPv6: A)

  Canon MF9100/9300 UFRII LT (CNCUPSMF9300ZS.ppd)
  MF9100 Series (BIDI: A, IPv6: -)

  Canon MF9200 Series UFRII LT (CNCUPSMF9200ZS.ppd)
  MF9200 Series (BIDI: A, IPv6: -)

Please see the online manual about the install method and the concrete usage.


4. Cautions, Limitations, and Restrictions -------------------------------------

- If you install "cndrvcups-common" package version 2.90, make sure you install
  the same version of the "cndrvcups-ufr2" package, i.e. 2.90.

- Update install is not available when you update to the version 1.40 or later,
  as the file names are not consistent with the older versions. If you have 
  older version on your computer, you have to uninstall the older driver then 
  install the new driver.

- If more than two drivers are installed using the LIPSLX, UFR II(US), and UFR 
  II(UK) driver install packages, and only one of these drivers is updated, an 
  error will occur.
  This problem can be solved by updating all of the installed drivers together.

- When specifying multiple pages/copies for [Page Layout] in the [General] sheet
  to print a document created with StarSuite7/OpenOffice, due to a cause of 
  operation by the CUPS module, settings are not correctly assigned to the 
  multiple pages and output.

- PostScript files created with the number of copies specified in OpenOffice.org
  or StarSuite are affected not by the value specified by [Number of copies] in
  the [cngplp] dialog box (the driver UI), but by the number of copies set when
  creating the PostScript file.

- If settings are changed from the driver UI, during print processing, the 
  printed result will reflect the changed settings.

- If [Brightness and Gamma] is specified in the [General] sheet from an 
  application such as OpenOffice.org, GIMP, or Acrobat Reader v.5.0, the 
  settings will be invalid.

- You cannot print a PDF document by directly specifying it from the desktop or
  command line. When printing a PDF document, it is recommended that you print 
  it from Acrobat Reader or Adobe Reader.

- The maximum number of files that can be held in the print queue when printing
  is 500 according to CUPS specifications. Files queued after the 500th file 
  will be ignored.

- If you are using SUSE LINUX Professional 9.3, the driver UI may display 
  unintelligible characters. You can solve this problem using the following 
  method.
  1) Log in as 'root'.
  2) Execute the following command to change the GTK+ environment settings.
     # cd /etc/
     # ln -s opt/gnome/gtk ./

- If you are using SUSE LINUX Professional 9.3, a warning may occur when you 
  activate the driver UI. You can solve this problem using the following method.
  1) Open [K Menu] -> [Control Center].
  2) Select [Appearance & Themes].
  3) Select [Colors].
  4) Deselect [Apply colors to non-KDE applications].
  5) Close [Control Center].

- When printing from OpenOffice.org, some finishing functions such as [Rotate] 
  may not operate correctly if you specify multiple copies for [Number of 
  copies] in the driver UI.

- If you are using SUSE Linux 9.3 or SUSE Linux 10.0, and are printing from the
  [Print] dialog box of Mozilla or FireFox, because the multiple copies setting
  is not enabled, you can print only one copy regardless of how many copies you
  have specified. This problem can be solved by changing the following line in 
  the file "/etc/cups/mime.convs".
  [Before change]
   application/mozilla-ps application/postscript 33 pswrite
  [After change]
   application/mozilla-ps application/postscript 33 pstops

- When performing banner printing in Fedora 8/9, if you specify a setting other
  than [none] for [End] under [Banner] in the [General] sheet, the print queue 
  will stop.

- If you attempt to print from a Color imageRUNNER/LBP printer using this driver
  in a 64-bit version of Fedora 9/10/11/12/13/14/15/16/17/18/19/20 system 
  environment, printing results may not be satisfactory.
  This is because when the 64-bit packages are installed by the standard 
  installation method, the 32-bit JPEG library is not installed.
  This problem can be solved by installing the package as an additional 
  installation.
  Execute the following command.
    <Fedora 9/10> # yum install libjpeg.i386
    <Fedora 11> # yum install libjpeg.i586
    <Fedora 12/13> # yum install libjpeg.i686
    <Fedora 14/15/16/17/18> # yum install libjpeg-turbo.i686
    <Fedora 19/20> # yum install libstdc++.i686
                   # yum install libjpeg-turbo.i686

- To install the common module in the 64-bit version of Fedora 10/11/12/13/14/
  15/16/17/18/19/20, you need the 32-bit version glibc library.
  You can install the glibc library by executing the following command:
    <Fedora 10> # yum install glibc.i386
    <Fedora 11> # yum install glibc.i586
    <Fedora 12/13/14/15/16/17/18/19/20> # yum install glibc.i686
  Also, printer drivers from version 1.90 onward require the 32-bit version of 
  the xml2 library.
  You can enable printing by executing the following command:
    <Fedora 10> # yum install libxml2.i386
    <Fedora 11> # yum install libxml2.i586
    <Fedora 12/13/14/15/16/17/18/19/20> # yum install libxml2.i686

- If you are using Fedora 11 and print with the print queue stopped after 
  canceling a job, the job is suspended. In this case, click the [Maintenance] 
  button in Printers in the CUPSWeb interface and select [Resume Printer] to 
  perform the [pending since] job again.
  If you cannot find the [Maintenance] button, you can select [Resume Printer] 
  by selecting [Pause Printer].

- If you are using OpenSUSE 10.2 or SLED10SP1, which includes Ghostscript 
  version 8.15.3, you may not be able to print some documents. To solve this 
  problem, install another version of Ghostscript.

- If you are using OpenSUSE 11.0 with Ghostscript version 8.6.x, printing from 
  Evince, GIMP, or other applications may take time.

- Although Okular is the standard document viewer in the OpenSUSE 11.1 KDE 
  environment, the printer driver functions do not operate correctly with it.
  You can solve this problem by using another application such as Acrobat Reader
  etc.

- If you are using Ubuntu 7.04/7.10/8.04/8.10/9.04 or Debian 3.1/4.0/5.0, the 
  libcupsys2 library is required to install the common module.
  You can install the libcupsys2 library by executing the following command.
    # apt-get install libcupsys2

- If you are using Ubuntu 8.10/9.04/9.10/10.04/10.10/11.04/11.10/12.04/12.10/
  13.04/13.10, Fedora 19/20, the printer will print with the default paper 
  output method, regardless of whether you have specified the paper output 
  method.
  This problem can be solved by changing the output paper method setting from 
  the CUPS printer settings (Web).

- If you are using Ubuntu 8.10, specifying reverse order for printing does not 
  affect the print result.
  This problem can be solved by updating CUPS.

- If you are using Ubuntu 8.10/9.04/9.10/10.04/10.10/11.04/11.10/12.04/12.10/
  13.04/13.10, when printing PDF data or PS data, brightness and gamma 
  correction settings may not be reflected in the print result.

- If you are using Adobe Reader 7.0.x, and modify such settings as Paper Size, 
  Paper Source, Duplex Printing, etc. in the print dialog window, these options
  are automatically added to the printer command. However, these settings will 
  not work because they cannot be recognized as command options. To solve this 
  problem, use "-o" to separate each command options.
    [before] -o InputSlot=Manual,Duplex=DuplexNotumble
    [after] -o InputSlot=Manual -o Duplex=DuplexNoTumble

- When printing PDF files using Adobe Reader 8, there may be instances where 
  some image data is not printed.
  This problem may be solved by printing using Adobe Reader 7 or Adobe Reader 9,
  or setting Level 3 in the PostScript options.

- When performing 2-sided printing with Adobe Reader 8.1.2, if you specify [ON 
  (Short-edged Binding)] for [Duplex Printing] in the print properties for Adobe
  Reader 8.1.2, the document will be printed on both sides with long-edged 
  binding.
  This problem can be avoided by printing the document using the printer driver
  UI.

- If you are using Vine Linux 3.1, you may take time to print from Adobe Reader
  7.0.9 or may not be able to print some documents.

- When printing PDF files containing Japanese characters from the command line 
  in Vine Linux 4.1, there may be instances where Ghostscript terminates 
  unexpectedly, causing printing to stop.
  This problem can be avoided by printing PDF files using Adobe Reader.

- When printing PDF files from Adobe Reader 8 in Vine Linux 4.1, there may be 
  instances where Ghostscript terminates unexpectedly, causing the print queue 
  to stop.
  This is caused by Ghostscript (7.07) not being able to analyze PS files 
  created by Adobe Reader 8, and consequently terminating prematurely, thereby 
  stopping the filtering process.
  This problem can be avoided by using Adobe Reader 7.

- When printing text files in landscape orientation in Vine Linux 4.1/4.2, 
  Fedora 8/9, or Red Hat Enterprise Linux v.5, there may be instances where the
  text file is printed in portrait orientation with some of the print data not 
  being printed on the page.
  This is caused by the CUPS filter employed by the distribution you are using 
  creating a PS command that is already set to portrait. 
  Also, some of the functions provided in the CUPS standard filter "texttops" 
  may not operate correctly.
  This problem can be avoided by changing the CUPS filter name specified in the
  "text/plain" entry line in the CUPS setting file "mime.convs" to the CUPS 
  standard filter "texttops". This will result in Japanese characters being 
  misprinted, therefore when printing Japanese characters, it is necessary to 
  print a PS command created with a text editor or text/PostScript conversion 
  program such as paps.

- If you specify Paper Source settings in the print dialog of an application 
  such as Writer of OpenOffice.org, the settings made from the application are 
  overridden by the printer driver UI settings. To print from the desired Paper
  Source, specify the Paper Source from the printer driver UI beforehand, or 
  print from the command line.

- If you are using Debian GNU/Linux 4.0, a PPD file error may occur when you 
  register the printer (PPD) with the print spooler. To solve this problem, use
  "-P (full path to the ppd)" instead of "-m" when you specify the ppd using the
  command line.
    Example: /usr/sbin/lpadmin -p iR2016
              -P /usr/share/cups/model/CNCUPSIR2016ZS.ppd
              -v lpd://192.168.1.10/iR2016 -E

- In Ubuntu 10.10/11.04/11.10/12.04/12.10/13.04, Fedora 14/15/16/17/18/19/20, 
  when registering a printer, the default document size may not be the document 
  size that matches the language/region of the operating system. You can 
  overcome this problem be registering the printer according to the following 
  method.
  [Method 1]
    Specify "-P" instead of "-m" for the PPD file name option in the "lpadmin" 
    command.
    If you specify "-P" for the PPD file, specify a fully-qualified path name or
    relative path name for the specified PPD file.
    Example:
    # /usr/sbin/lpadmin -p [printer name for registration] -P [PPD file path] -v
       lpd:[device URI] -E
  [Method 2]
    1) Add "DefaultPaperSize Auto" to "/etc/cups/cupsd.conf", then restart CUPS.
    2) Register the printer.

- If you are using Debian GNU/Linux 4.0, you may take time to print from Evince
  or may not be able to print some documents. To solve this problem, print the 
  document from other application.

- If you are using Debian GNU/Linux 4.0 r6, and attempt to print a text file 
  using the printer driver UI when EUC-JP is set as the locale, printing will 
  fail.
  This problem can be solved by printing a PS command created with a text editor
  or text/Postscript conversion program such as paps.

- If you are using Debian GNU/Linux 5.0.2, the gs-esp module is required to 
  install the common module.
  You can install the gs-esp module by executing the following command.
    # apt-get install gs-esp

- Depending on the distribution you are using, when you register the USB printer
  with the print spooler specifying /dev/usb/lp* as [Device URI], printing may 
  fail with an error "Printer not Connected" displayed. To solve this problem, 
  specify the printer specific name as [Device URI] that is displayed by using 
  the following command.
    Example: When you use MF4600 Series
    1) Display the [Device URI]
      # /usr/sbin/lpinfo -v
      direct usb://Canon/MF4600%20Series%20(FAX)
      direct usb://Canon/MF4600%20Series%20(PCL5e)
      direct usb://Canon/MF4600%20Series%20(PCL6)
      direct usb://Canon/MF4600%20Series%20(UFRII%20LT)
    2) Register the printer
      #lpadmin -p MF4600_USB -m CNCUPSMF4600ZS.ppd
               -v usb://Canon/MF4600%20Series%20(UFRII%20LT) -E

- When printing PDF files from Adobe Reader in Mandriva, regardless of the 
  version being used, there may be instances where Ghostscript terminates 
  unexpectedly, causing the print queue to stop.
  This is caused by Ghostscript (8.60) not being able to analyze PS commands 
  created using PS files for which security settings have been specified, and 
  consequently terminating prematurely, thereby stopping the filtering process.
  This problem can be avoided by not printing PDF files that have security 
  settings using Adobe Reader.

- If you are using Mandriva One 2008 Spring or Mandriva 2008 PowerPack with CUPS
  version 1.3.6, unintended print results may occur even when printing with 
  standard CUPS print functions.
  This problem can be solved by updating CUPS.

- If your version of Ghostscript is 8.6.x, you may not be able to print some 
  documents.

- There may be instances where MF4270, or L90/L160/L230 printers, depending on 
  the environment and type of print data, cannot print due to a printer data 
  error at the device end.
  This is caused by a time out error occurring at the device end.
  This problem can be avoided by turning the error time out setting off at the 
  device.

- If the Finisher Q3 or Saddle Finisher Q4 is attached and you specify A4, 
  Letter, or Legal as the page size, the document is not printed correctly when
  you attempt to print with [Binding Location] set to [Short Edge (Top)] and 
  [Staple Position] set to [Top (Double)], or [Binding Location] set to 
  [Short Edge (Bottom)] and [Staple Position] set to [Bottom (Double)], in the 
  [Finishing] sheet.

- If you are using the iR C1021/C1021i, MF8400 Series, or MF9100 Series, 
  although IPv6 can be set from the control panel of the printer, only IPv4 
  supports network connections.

- If you are using CentOS 5.3, you cannot print the number of copies as you 
  specified in Evince.
  You can solve this problem by printing from other PDF viewers such as Adobe 
  Reader or using the following methods.
  1) Set the number of copies to 1 and select a PS command for the output 
     destination in Evince to output a file.
  2) Print the PS command output as a file after specifying the number of copies
     in cngplp.

- If you are using Ubuntu 9.04 and update the CUPS version to 
  "1.3.9-17ubuntu3.2", printing will fail due to improper PS data.
  You can avoid this problem by downgrading the CUPS version to 
  "1.3.9-17ubuntu3.1".
   - Execute the following command.
     # apt-get install cups=1.3.9-17ubuntu3.1

- If you are using Ubuntu 9.04/9.10/10.04/10.10/11.04/11.10/12.04/12.10/13.04/
  13.10, Fedora 11/12/13/14/15/16/17/18/19/20, and print banner pages, the 
  specified number of banner pages are printed.

- In Fedora 15/16/17/18/19/20 and Ubuntu 11.04/11.10/12.04/12.10/13.04/13.10, 
  if you print with the brightness specified between 0% and 9%, the brightness 
  setting is not applied and the document is printed the same as if the 
  brightness was specified as 100%.

- If you are using the 32 bit or 64 bit version of Fedora 13/14/15/16/17/18/19, 
  and print a TIFF or JPEG file from the driver UI or command line, the printed 
  image may be broken up. This problem can be solved by outputting the file as a
  PostScript file from an application such as GIMP, then printing from the 
  command line by typing the PostScript command used to output the file after 
  [cngplp].

- If you are printing a TIFF or JPEG image from the driver UI or command line, 
  the image may be divided and printed across multiple pages.
  This problem can be solved by outputting the image as a PostScript file from 
  an application such as GIMP, then printing the PostScript file from the driver
  UI or command line.

- If you print a TIFF image file from the [cngplp] dialog box or the command 
  line, the print result may be blacked out, depending on the image.
  [Method 1]
    You can overcome this problem by printing from an application such as GIMP 
    etc.
  [Method 2]
    You can overcome this problem by outputting the file as a PostScript file, 
    then printing the output PostScript file from the [cngplp] dialog box.

- If you are using Fedora 13/14/15/16/17/18/19/20, even if you specify the 
  brightness and gamma settings from the driver UI or the command line, these 
  settings are not applied to the printed result from the second page onward. 
  This is due to these functions not being enabled because Ghostscript does not
  correctly recognize the PostScript data created by the application.

- If you change the output method to [Print] after specifying [Secured Print] as
  the output method and clicking [Save/Print Settings] in the driver UI, the 
  name of the document you output using [Secured Print] is displayed in the job
  log of the printer. This problem can be solved by using the [Save/Print 
  Settings] button instead of the [Print] button to print when changing the 
  output method from [Secured Print] to [Print].

- After setting an entry or text view value, if you finish by clicking the [X] 
  button at the top right of the dialog box, the value is treated as a valid 
  value in the same way as when you click the [OK] button. If you want to 
  disable the set value, click the [Cancel] button.

- The following characters are treated differently in different CUPS versions, 
  therefore we recommend that you do not use them.
  "#"
  From CUPS version 1.4 onward, "#" is treated as a comment, therefore if you 
  use it in a command line, the characters following "#" are not recognized as 
  commands.
  "\"
  If you enter "\\\123", the command is recognized in the following way, 
  depending on the version of CUPS:
  CUPS V1.1.22: \123
  CUPS V1.4.3: \\123

- Depending on the version of GTK (GIMP Toolkit), some characters may be 
  unintelligible when displayed on the screen, but this does not indicate a 
  problem with the functions and values set. Redraw the corresponding text area
  to solve this problem.

- If you are using Fedora 12 or Ubuntu 9.10, when you change the default options
  from the CUPS Web interface, the default values will be saved even if there is
  a conflict between the settings for each function. Also, once the settings are
  saved with a conflict, you cannot save the settings again even if you use the
  Web interface to change them to the correct values where there is no conflict.
  If you display the [cngplp] dialog box in this situation, an invalid operation
  may occur.
  You can use the following methods to solve this problem:
  [Method 1] Fedora 12 (32-bit/64-bit) and Ubuntu 9.10
    Re-register the printer that performed the invalid operation.
  [Method 2] Fedora 12 (32-bit/64-bit)
    Execute the following command to update CUPS:
     <For Fedora 12 (32-bit)> # yum update cups.i686
     <For Fedora 12 (64-bit)> # yum update cups.x86_64

- If you are using this driver in a 64-bit environment, and update a version 
  2.00, 2.10, or 2.20 driver to version 2.30 or later, errors may occur when 
  printing.
  This problem can be solved by uninstalling (rpm -e [driver]) then 
  re-installing (rpm -i [driver]) the new driver.
  Alternatively, you can uninstall the old driver (rpm -e [driver]) instead of 
  updating it, then install the new driver (rpm -i [driver]).

- If you specify a document name that exceeds 32 bytes when printing, the 
  character string for the document name is deleted from the 33rd byte onward by
  the driver, and the document name displayed in the device will be a maximum of
  32 bytes.

- To use this printer driver, you need Ghostscript including common APIs.
  Before installing the driver, confirm that Ghostscript is installed. You can 
  do this using the following command in a terminal program such as GNOME 
  Terminal.
    % gs -h | grep opvp
  If "opvp" and "oprp" are displayed in the result, Ghostscript including common
  APIs is installed. If no result is displayed, you can obtain Ghostscript from
  the following URL:
    http://opfc.sourceforge.jp/index.html.en

- If you are using Ubuntu 12.04/12.10/13.04/13.10 32-bit and attempt to print 
  with a Color iR or Color LBP series printer using this driver, you may not be
  able to print. This is because the JPEG library used by this driver is not 
  installed when you do a standard installation in Ubuntu 12.04/12.10/13.04/
  13.10.
  You can solve this problem by performing an additional package installation.
  Execute the following command:
    # apt-get install libjpeg62

- If you are using Ubuntu 11.10/12.04/12.10/13.04, and attempt to continuously 
  print the same data, the data may not print correctly after the second time. 
  You can solve this problem by updating CUPS with the following commands.
    # apt-get install cups
    # apt-get install libcups2

- Not all of the 32-bit libraries required for printing are included in the 
  64-bit version of Ubuntu.
  Before printing, execute the following commands to install the 32-bit library
  package.
    # apt-get install ia32-libs
    # apt-get install libjpeg62:i386
  <For Ubuntu 13.10 or later>
    # apt-get install libxml2:i386
    # apt-get install libjpeg62:i386
    # apt-get install libstdc++6:i386

- If you are using Ubuntu 12.04/12.10/13.04/13.10, Fedora 18/19/20 with a USB 
  connection, and attempt to continuously print the same data, the data may not 
  print correctly after the second time. 
  You can print with added options using the following command:
    # lpadmin -p PRINTER_NAME -o usb-no-reattach-default=true

- If you install Fedora 18/19/20 with the default settings, you may not be able
  to install the driver because the pangox-compat library is missing.
  This can be resolved by installing the library with the following command:
    # yum install pangox-compat

- If you install Ubuntu 12.10/13.04/13.10 with the default settings, you may not 
  be able to install the driver because the glade2 library is missing.
  This can be resolved by installing the library with the following command:
    # apt-get install libglade2-0

- If you are using Ubuntu 12.10, and try to print a PDF image from the [cngplp] 
  dialog box or command line, the PDF image may not print correctly.

  [Method 1]
    You can resolve the problem by print from another PDF viewer application 
    such as Adobe Reader.

  [Method 2]
    You can resolve the problem by editing "/usr/share/cups/mime/
    cupsfilters.convs" as follows then restarting CUPS.

    Before editing:
      # application/pdf   application/vnd.cups-postscript 66 pdftops
      # application/postscript  application/vnd.cups-postscript 66 pstops

    After editing:
      application/pdf   application/vnd.cups-postscript 33 pdftops
      application/postscript  application/vnd.cups-postscript 33 pstops

- If you print to a device that supports the authentication data encryption 
  function, you need the beecrypt library for each distribution. Install it, 
  referring to the following examples.
    <For Fedora 19/20 (32-bit)> # yum install beecrypt beecrypt-devel
    <For Fedora 19/20 (64-bit)> # yum install beecrypt.i686 beecrypt-devel.i686
    <For Ubuntu 13.04/13.10 (32-bit)> # apt-get install libbeecrypt7 
                                        beecrypt-dev
    <For Ubuntu 13.04/13.10 (64-bit)> # apt-get install libbeecrypt7:i386 
                                        beecrypt-dev:i386

- If you are using Ubuntu 13.10, when creating a print queue with the "lpadmin" 
  command, if you use the -m option the printer is registered as a Local Raw 
  printer and not registered correctly.

  [Method 1]
    The printer can be registered correctly by specifying -P instead of -m for 
    the option specifying a PPD file when registering, as below.
      # /usr/sbin/lpadmin -P [printer name for registration] -P [PPD file path]
                          -v lpd:[device URI] -E
    * If you specifying the PPD file with -P, specify an absolute path or 
      relative path in [PPD file path].

  [Method 2]
    Execute the following command to update CUPS:
      # apt-get install cups

- If you are using Ubuntu 13.04/13.10 or Fedora 19/20, and select "classified," 
  "secret," "confidential," "topsecret," or "unclassified" in the banner page 
  print settings from the [cngplp] dialog box or the command line, the selection
  is not reflected in the printed result. The result is the same as if you 
  select "standard."

- If you are using a device that supports an authentication data encryption 
  function, set [Mode 2] for [Dept. ID Management Authentication]/[Secured Print
  Authentication], and if you are using a device that does not support the 
  function, set [Mode 1] for [Dept. ID Management Authentication]/[Secured Print
  Authentication]. If you do not set [Dept. ID Management Authentication]/
  [Secured Print Authentication] correctly, the authentication function cannot 
  work, or printing cannot be executed.

- If you are printing an image included in a PDF file, you may not be able to 
  print it correctly depending on the program pdftops uses.
  You can solve this problem by changing the program that pdftops uses with the
  following command.

  <If you are using ghostscript pdftops>
   # lpadmin -p [registered printer name] -o pdftops-renderer-default=pdftops

  <If you are using poppler pdftops>
   # lpadmin -p [registered printer name] -o pdftops-renderer-default=gs

- If you are using Fedora 20, the department ID management function may not be 
  effective even if you set the department ID management function in the 
  [cngplp] dialog box or command line (cnjatool).
  We can solve this problem by updating CUPS with the following command:
   # yum install cups


================================================================================
Support
================================================================================
This Software and Related Information are independently developed by Canon and
distributed by your Canon local company. Canon (as a manufacturer of printers
supporting this Software and Related Information) and your Canon local company 
(as a distributor), will not respond to any inquiries about this Software or 
Related Information. However, any inquiries about printer repair, consumable 
supplies, and devices should be directed to your Canon local company.
================================================================================
Copyright CANON INC. 2004
