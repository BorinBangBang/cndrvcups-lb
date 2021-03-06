/*
 *  Print Dialog for Canon LIPS/PS/LIPSLX/UFR2/CAPT Printer.
 *  Copyright CANON INC. 2004
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifndef	_CNGPLPDEF
#define	_CNGPLPDEF


enum{
	ID_PPD_OPTION = 0,
	ID_PAGESIZE,
	ID_MEDIATYPE,
	ID_INPUTSLOT,
	ID_OUTPUTBIN,
	ID_DUPLEX,
	ID_BOOKLET,
	ID_BINDEDGE,
	ID_CNOUTPUTPARTITION,
	ID_COLLATE,
	ID_STAPLELOCATION,
	ID_CNSADDLESTITCH,
	ID_CNTRIMMING,
	ID_CNZFOLDING,
	ID_CNPUNCH,
	ID_CNINSERTER,
	ID_RESOLUTION,
	ID_CNCOLORMODE,
	ID_CNHALFTONE,
	ID_CNBLACKSUBSTITUTE,
	ID_CNPUREBLACKPROCESS,
	ID_CNTONERSAVING,
	ID_CNFINISHER,
	ID_CNPUNCHER,
	ID_CNFOLDER,
	ID_CNINSERTUNIT,
	ID_CNTRIMMER,
	ID_CNDUPLEXUNIT,
	ID_CNJOBEXECMODE,
	ID_CNTONERDENSITY,
	ID_CNSUPERSMOOTH,
	ID_CNFIXINGMODE,
	ID_CNBACKPAPERPRINT,
	ID_CNOUTPUTFACE,
	ID_CNROTATEPRINT,
	ID_CNIMAGESPECIALPROCESS,
	ID_CNCOPYSETNUMBERING,
	ID_CNDRAFTMODE,
	ID_CNINTERLEAFSHEET,
	ID_CNINTERLEAFMEDIATYPE,
	ID_CNINTERLEAFPRINT,
	ID_CNSRCOPTION,
	ID_CNCOLORHALFTONE,
	ID_CNCTONERDENSITY,
	ID_CNMTONERDENSITY,
	ID_CNYTONERDENSITY,
	ID_CNKEEPGRAY,
	ID_CNSKIPBLANK,
	ID_CNDETECTPAPERSIZE,
	ID_CNPUREBLACKTEXT,
	ID_CNBLACKOVERPRINT,
	ID_CNRGBSOURCEPROFILE,
	ID_CNRGBMATCHINGMETHOD,
	ID_CNRGBPUREBLACKPROCESS,
	ID_CNCMYKSIMULATIONPROFILE,
	ID_CNUSEGRAYSCALEPROFILE,
	ID_CNOUTPUTPROFILE,
	ID_CNGRADATIONSMOOTHING,
	ID_CNIMAGEREFINEMENT,
	ID_CNLINEREFINEMENT,

	ID_CNMIRRORPRINT,
	ID_CNSPECIALPRINTINGMODE,
	ID_CNPOSTCARDPRINTING,
	ID_CNLASTPAGEPRINTMODE,
	ID_CNPAPERSELECTION,
	ID_CNINTERLEAFSLOT,
	ID_CNCONTINUEPRINTING,
	ID_CNPOSTCARDPRINTMODE,
	ID_CNGRADATION,
	ID_CNGRADATIONPRINT,
	ID_CNXCOLORADJUSTMENT,
	ID_CNYCOLORADJUSTMENT,
	ID_CNBRIGHTNESS,
	ID_CNCONTRAST,
	ID_CNIMAGEADJUSTMENT,
	ID_CNGRAPHICSADJUSTMENT,
	ID_CNTEXTADJUSTMENT,
	ID_CNMATCHINGMODE,
	ID_CNMATCHINGMETHOD,
	ID_CNIMGAGEMATCHINGMETHOD,
	ID_CNGRAPHICSMATCHINGMETHOD,
	ID_CNTEXTMATCHINGMETHOD,
	ID_CNMONITORPROFILE,
	ID_CNIMAGEMONITORPROFILE,
	ID_CNGRAPHICSMONITORPROFILE,
	ID_CNTEXTMONITORPROFILE,
	ID_CNGAMMA,
	ID_CNBWHALFTONE,

	ID_CNSPOTCOLORMATCHING,
	ID_CNOHPPRINTMODE,
	ID_CNADVANCEDSMOOTHING,
	ID_CNSET_FRONT_COVER,
	ID_CNFRONT_PRINT_SHEET,
	ID_CNFRONT_PAPER_SRC,
	ID_CNSET_BACK_COVER,
	ID_CNBACK_PRINT_SHEET,
	ID_CNBACK_PAPER_SRC,

	ID_CNTRAYCSETTING,
	ID_CNSIDEPAPERDECK,
	ID_CNHARDDISK,
	ID_CNSPECIALFINELINEPROCESS,
	ID_CNSHIFTSTARTPRINTPOSITION,
	ID_CNPROCESSCOLORMODE,
	ID_CNDUPLEXFIXMODE,
	ID_CNCALIBRATE,
	ID_CNDUPLEX,
	ID_CNCREEP,
	ID_CNSTAPLE,
	ID_CNTYPEWING,
	ID_CNIMAGECOMPRESSION,
	ID_CNDENSITYFINEADJUSTMENT,
	ID_CNDENSITYFINEADJUSTMENTNUM,
	ID_CNCADMODE,
	ID_CNGRAPHICSMODE,
	ID_CNCOMPOSITEOVERPRINT,
	ID_CNCOMBINECOLORSEPARATION,

	ID_CNCURLCORRECTION,
	ID_CNPAUSEPRINTINGMT,
	ID_CNAPPCOLORMATCHING,

	ID_CNFEEDCUSTOMHORIZONTALLY,

	ID_CNDISPLACEMENTCORRECTION,
	ID_CNPROGRESS,
	ID_CNNOTIFICATION,
	ID_CNOVERLAY,
	ID_CNSELECTBY,
	ID_CNOHPPRINT,
	ID_CNINTERLEAFINPUTSLOT,
	ID_CNPRINTOTHERSIDE,
	ID_CNINSERTSHEET,
	ID_CNSHEETFORINSERTION,
	ID_CNINSERTPRINTSIDE,
	ID_CNINSERTINPUTSLOT,
	ID_PRIORITIES,
	ID_USEPSBRIGHTNESS,
	ID_PSBRIGHTNESS,
	ID_CNCOLLATE,
	ID_CNCFOLDING,
	ID_CNPBINDCOVERSHEET,
	ID_CNPBINDFINISHING,
	ID_CNPBINDMAINPAPER,
	ID_CNADJUSTTRIM,
	ID_CNTRUSTPRINT,
	ID_CNOVERLAYFORMCOMPOSITION,
	ID_CNUSESHARPNESS,
	ID_CNSHARPNESS,
	ID_CNTONERDENSITYADJUSTMENT,
	ID_CNLINECONTROL,
	ID_CNSMALLSIZECURL,
	ID_CNAUTHENTICATE,
	ID_CNUSEJOBACCOUNT,
	ID_CNSENDTIME,
	ID_CNCOVERPAGEMODE,
	ID_CNINSLOTMANMEDIATYPE,
	ID_CNINSLOT1MEDIATYPE,
	ID_CNINSLOT2MEDIATYPE,
	ID_CNINSLOT3MEDIATYPE,
	ID_CNINSLOT4MEDIATYPE,
	ID_CNSIDEDECKMEDIATYPE,
	ID_CNUSEOUTSIDELINENUM,
	ID_CNLINESELECTION,
	ID_CNFAXNUMOFLINE,
	ID_CNSPECID,
	ID_CNTOTALMEMSIZE,
	ID_CNDUPUNIT,
	ID_CNFAXLINETYPE,
	ID_CNENABLETRUSTPRINT,
	ID_CNFINTRAY,
	ID_CNSTACKER,
	ID_CNBINDEROPTION,
	ID_CNENABLEMULTIINSERTER,
	ID_CNTONERVOLUMEADJUSTMENT,
	ID_CNCOPYTRAY,
	ID_CNCFOLDSETTING,
	ID_CNTABPRINTMODE,
	ID_CNOUTPUTCOLORSPEED,
	ID_CNINSLOT5MEDIATYPE,
	ID_CNINSLOT6MEDIATYPE,
	ID_CNINSLOT7MEDIATYPE,
	ID_CNINSLOT8MEDIATYPE,
	ID_CNOPTIONSTAPLE,

	ID_CNSPECIALPRINTADJUSTMENTA,
	ID_CNSPECIALPRINTADJUSTMENTB,
	ID_CNREVICEPOSTCARD,
	ID_CNOUTPUTADJUSTMENT,
	ID_CNSPECIALSMOOTH,
	ID_CNENABLEQUICK,
	ID_CNENABLEFINE,
	ID_CNENABLESUPERFINE,
	ID_CNFAXDIALLINE1,
	ID_CNFAXDIALLINE2,
	ID_CNFAXDIALLINE3,
	ID_CNWRINKLESCORRECTIONOUTPUT,
	ID_CNPDEUSEJOBACCOUNT,
	ID_CNPROPUNCHER,
	ID_CNMULTIPUNCH,
	ID_CNTOPBOTTOMTRIMMER,
	ID_CNFAXDIALLINE4,
	ID_CNSADDLEUNIT,
	ID_CNCLEARCOATINGAPPLICATION,
	ID_CNGLOSSYPLAINPAPERPROC,
	ID_CNVFOLDING,
	ID_CNHALFFOLDING,
	ID_CNACCORDIONZFOLDING,
	ID_CNDOUBLEPARALLELFOLDING,
	ID_CNHALFFOLDSETTING,
	ID_CNACCORDIONZFOLDSETTING,
	ID_CNDOUBLEPARALLELFOLDSETTING,
	ID_CNSADDLESETTING,
	ID_CNTRAPPING,
	ID_CNTRAPWIDTH,
	ID_CNTRAPDENSITY,
	ID_CNSIZEOVERRIDE,
	ID_CNREVERSEORDER,
	ID_CNDOTGAIN,
	ID_CNGRAYCONVERSION,
	ID_CNPBINDCOVERSELECTBY,
	ID_CNPBINDCOVERPAPERSOURCE,
	ID_CNPBINDCOVERMEDIATYPE,
	ID_CNPBINDSPECIFYFINISHINGBY,
	ID_CNSPECIFYNUMOFCOPIESSTACK,
	ID_CNRGBMATCHINGMODE,
	ID_CNRGBINPUTLIGHTCLRSPACE,
	ID_CNCMYKMATCHINGMODE,
	ID_CNCMYKINPUTLIGHTCLRSPACE,
	ID_CNINSLOT9MEDIATYPE,
	ID_CNINSLOT10MEDIATYPE,
	ID_CNINNERTRIMMER,
	ID_CNUSERSEPARATEMODE,
	ID_CNSORTERFINISH,
	ID_CNSTACKERFINISH,
	ID_CNBINNAMEMODE,
	ID_CNUSESUBSTITUTEFONT,
	ID_CNPRINTERFONT,
	ID_CNSUBSTITUTEEUROFONT,
	ID_CNENABLESUBSTITUTEFONT,
	ID_CNPDEDISPAYALLWARNING,
	ID_CNPLAINPAPERCURLCORRECT,
	ID_CNWRINKLEESCAPEMODE,
	ID_CNCURLPAPERMODEB,
	ID_CNSPECIALPRINTADJUSTMENTC,
	ID_CNUSECOLORANTDENSITY,
	ID_CNCOLORANTDENSITY,
	ID_CNSPECIALPRINTINGMODEA,
	ID_CNSPECIALPRINTINGMODEB,
	ID_CNBARCODE,
	ID_CNWHITEGAP,
	ID_CNNUMBEROFCOLORS,
	ID_CNCOLORTOUSEWITHBLACK,
	ID_CNSADDLEPRESS,
	ID_CNPRINTIMAGEADJUSTMENT,
	ID_CNDEVICETYPE,
	ID_CNFOLDSETTING,
	ID_CNPRINTSTYLE,
	ID_CNFOLDDETAIL,
	ID_CNUSESECUREDPRINT,
	ID_CNFEEDAFIVEVERTICALLY,
	ID_CNFINEADJUSTDENSITYHIGH,
	ID_CNFINEADJUSTDENSITYMEDIUM,
	ID_CNFINEADJUSTDENSITYLOW,
	ID_CNCFINEADJUSTDENSITYHIGH,
	ID_CNCFINEADJUSTDENSITYMEDIUM,
	ID_CNCFINEADJUSTDENSITYLOW,
	ID_CNMFINEADJUSTDENSITYHIGH,
	ID_CNMFINEADJUSTDENSITYMEDIUM,
	ID_CNMFINEADJUSTDENSITYLOW,
	ID_CNYFINEADJUSTDENSITYHIGH,
	ID_CNYFINEADJUSTDENSITYMEDIUM,
	ID_CNYFINEADJUSTDENSITYLOW,
	ID_CNVFOLDINGTRIMMING,
	ID_CNBARCODEMODE,
	ID_CNCOVERPAGESTYLE,
	ID_CNENABLECMSSETTINGS,
	ID_CNUSECPCASECURITYUSER,
	ID_CNUSECPCASECURITYJOBPASSWORD,
	ID_CNUSECPCASECURITYFCODE,
	ID_CNDENSITYFINEADJUSTMENTREOS2,
	ID_CNFEEDAFIVEHORIZONTALLY,
	ID_CNFEEDSTATEMENTHORIZONTALLY,
	ID_CNSPECIALSETTINGSONE,
	ID_CNDRAFTMODETWO,
	ID_CNHYPERSHARPNESS,
	ID_CNFAXIPFAXINTRA,
	ID_CNFAXIPFAXVOIP,
	ID_CNFAXIPFAXNGN,
	ID_CNFAXIPFAXMYNUMBERNGN,

	ID_CNSPECIALPRINTADJUSTMENT,
	ID_CNBOOKLETOFFSET,

	ID_PPD_OPTION_BOTTOM,
};

enum{
	ID_DEVICE_INFO = 1000,
	ID_SIDED1PRINT,
	ID_SELECTBY,
	ID_BOOKLET_DLG,
	ID_DATANAME,
	ID_ENTERNAME,
	ID_BOXIDNUM,
	ID_GUTTER,
	ID_SECURED_DOCNAME,
	ID_SECURED_USRNAME,
	ID_SECURED_PASSWD,
	ID_JOBACCOUNT,
	ID_JOBACCOUNT_ID,
	ID_JOBACCOUNT_PASSWD,
	ID_PRINTERTYPE,
	ID_COLOR_MODE,
	ID_SPECIAL_FUNC,
	ID_MAX_COPIES,
	ID_MAX_BOXIDNUM,
	ID_MAX_GUTTER,
	ID_DOC_LENGTH,
	ID_STARTNUM,
	ID_LIST_MEDIATYPE,
	ID_USERID,
	ID_BACKPAPERPRINT_LABEL,
	ID_DISABLE_JOBACCOUNT_BW,
	ID_SHOW_DISABLE_JOBACCOUNT_BW,
	ID_DETECTPAPER_LABEL,
	ID_CNDPICONPICTID,
	ID_CNENABLEFINISHFLAG,
	ID_CNENABLEINPUTFLAG,
	ID_CNENABLEQUALITYTYPE,

	ID_USTYPE,
	ID_INPUTSLOT_TYPE,

	ID_CNSHIFTTYPE,
	ID_CNSHIFTUPWARDS,
	ID_CNSHIFTRIGHT,
	ID_CNSHIFTFRLONGEDGE,
	ID_CNSHIFTFRSHORTEDGE,
	ID_CNSHIFTBKLONGEDGE,
	ID_CNSHIFTBKSHORTEDGE,
	ID_CNJOBNOTE,
	ID_CNJOBDETAILS,
	ID_CNOFFSETNUM,

	ID_CNINPUTSELECT,
	ID_CNGUTTERSHIFTNUM,
	ID_MAX_GUTTER_SHIFT_NUM,
	ID_CNTABSHIFT,
	ID_DRIVERROOTPATH,
	ID_CNMEDIABRANDLIST,
	ID_CNMEDIABRAND,
	ID_CNMEDIALIBRARYID,
	ID_CNMEDIASHAPE,
	ID_CNINSERTMEDIABRANDLIST,
	ID_CNINSERTMEDIABRAND,
	ID_CNINSERTMEDIALIBRARYID,
	ID_CNINTERLEAFMEDIABRANDLIST,
	ID_CNINTERLEAFMEDIABRAND,
	ID_CNINTERLEAFMEDIALIBRARYID,
	ID_CNMONITORPROFILELIST,
	ID_CNRGBSOURCEPROFILELIST,
	ID_CNCMYKSIMULATIONPROFILELIST,
	ID_CNOUTPUTPROFILELIST,
	ID_CNINSERTTABSHIFT,
	ID_CNINSERTPOS,
	ID_CNTABINSERTPOS,
	ID_CNOVERLAYFILENAME,
	ID_CNFORMHANDLE,
	ID_CNMAXBOXNUM,
	ID_CNADJUSTTRIMNUM,
	ID_CNMAXINSERTCOUNT,
	ID_CNSHIFTSTARTPRINTPOSTYPE,
	ID_CNSENDTIMENUM,
	ID_CNOUTSIDELINENUMBER,
	ID_CNSENDER,
	ID_HOLD_NAME,
	ID_HOLDQUEUE_DATANAME,
	ID_MIN_GUTTER_SHIFT_NUM,
	ID_DEFAULT_GUTTER_SHIFT_NUM,
  	ID_LIST_PAGESIZE,
	ID_CNSHIFTPOSITIONMAX,
	ID_CNSHIFTPOSITIONMIN,
	ID_CNFINDETAILS,
	ID_CNUITRIMVALMAX,
	ID_CNUITRIMVALMIN,
	ID_CNUIADJUSTTRIMNUMDEFAULT,
	ID_ENABLECNOFFSETNUM,
	ID_CNUIOFFSETMAX,
	ID_CNADJUSTFORETRIMNUM,
	ID_CNADJUSTTOPBOTTOMTRIMNUM,
	ID_CNFEEDPAPERNAME,
	ID_CNPBINDCOVERMEDIABRANDLIST,
	ID_CNPBINDCOVERMEDIABRAND,
	ID_CNPBINDCOVERMEDIALIBRARYID,
	ID_CNPBINDFINISHFORETRIMNUM,
	ID_CNPBINDFINISHTOPBOTTOMTRIMNUM,
	ID_CNSTACKCOPIESNUM,
	ID_CNRGBDEVICELINKPROFILELIST,
	ID_CNCMYKDEVICELINKPROFILELIST,
	ID_CNINSERTPOSPAPERSOURCE,
	ID_CNINSERTPOSPRINTON,
	ID_CNTABINSERTPOSPAPERSOURCE,
	ID_CNTABINSERTPOSPRINTON,
	ID_CNBINNAME,
	ID_CNBINNAME_ARRAY,
	ID_CNSADDLEPRESSADJUSTMENT,
	ID_CNLISTIDSPECIALPRINTMODE,
	ID_CNUIPAPERSOURCETYPE,
	ID_PCFILENAME,
	ID_MANUFACTURER,
	ID_NICKNAME,
	ID_CNPDLTYPE,
	ID_APPRINTERICONPATH,
	ID_CNTABINSERTMULTIPAPERNUMBER,
	ID_CNTABINSERTMULTIPAPERSOURCE,
	ID_CNTABINSERTMULTIPAPERTYPE,

	ID_SHOW_JOBACCOUNT,

	ID_DEVICE_INFO_BOTTOM,
};

enum{
	ID_COMMON_OPTION = 2000,
	ID_CNCOPIES,
	ID_PAGE_SET,
	ID_PAGE_RANGES,
	ID_OUTPUTORDER,
	ID_NUMBER_UP,
	ID_ORIENTATION_REQUESTED,
	ID_BRIGHTNESS,
	ID_GAMMA,
	ID_JOB_SHEETS_START,
	ID_JOB_SHEETS_END,
	ID_PRINTERNAME,
	ID_FILTER,
	ID_MEDIA,
	ID_CNQUEUEDESCRIPTION,
	ID_CNHOSTADDRESIPV4,
	ID_CNHOSTADDRESIPV6,
	ID_COMMON_OPTION_BOTTOM,
};

enum{
	ID_IMAGE_OPTION = 2100,
	ID_HUE,
	ID_SATURATION,
	ID_PPI,
	ID_SCALING,
	ID_NATURAL_SCALING,
	ID_POSITION,
	ID_RESO_SCALE,

	ID_IMAGE_OPTION_BOTTOM,
};

enum{
	ID_TEXT_OPTION = 2200,
	ID_CPI,
	ID_LPI,
	ID_COLUMNS,
	ID_PAGE_LEFT,
	ID_PAGE_RIGHT,
	ID_PAGE_TOP,
	ID_PAGE_BOTTOM,
	ID_PRETTYPRINT,
	ID_MARGIN,

	ID_TEXT_OPTION_BOTTOM,
};

enum{
	ID_HPGL_OPTION = 2300,
	ID_BLACKPLOT,
	ID_FITPLOT,
	ID_PENWIDTH,

	ID_HPGL_OPTION_BOTTOM,
};

enum{
	ID_BOTTON_EVENT = 2500,
	ID_SETDEFAULT,
	ID_EXECLPR,
	ID_SHOWDLG,
	ID_OK,
	ID_CANCEL,
	ID_PRINTERINFO,
	ID_RESTOREDEFAULT,

	ID_BOTTON_EVENT_BOTTOM,
};

enum{
	ID_KEY_VALUE = 3000,
};

#define	PPD_OPTION_NUM (ID_PPD_OPTION_BOTTOM - ID_PPD_OPTION - 1)
#define	DEVICE_INFO_NUM (ID_DEVICE_INFO_BOTTOM - ID_DEVICE_INFO - 1)
#define	COMMON_OPTION_NUM (ID_COMMON_OPTION_BOTTOM - ID_COMMON_OPTION - 1)
#define	IMAGE_OPTION_NUM (ID_IMAGE_OPTION_BOTTOM - ID_IMAGE_OPTION - 1)
#define	TEXT_OPTION_NUM (ID_TEXT_OPTION_BOTTOM - ID_TEXT_OPTION - 1)
#define	HPGL_OPTION_NUM (ID_HPGL_OPTION_BOTTOM - ID_HPGL_OPTION - 1)

#endif
