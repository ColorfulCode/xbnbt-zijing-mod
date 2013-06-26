//
// Copyright (C) 2003-2005 Trevor Hogan
//

#ifndef UTIL_H
 #define UTIL_H

#define VERSION_METHOD_0 0
#define VERSION_METHOD_1 1
#define VERSION_METHOD_2 2
#define VERSION_METHOD_3 3
#define VERSION_METHOD_4 4
#define VERSION_METHOD_5 5
#define VERSION_METHOD_6 6
#define VERSION_METHOD_7 7
#define VERSION_METHOD_8 8
#define VERSION_METHOD_9 9
#define VERSION_METHOD_10 10
#define VERSION_METHOD_11 11
#define VERSION_METHOD_12 12

void UTIL_LogPrint( const char *format, ... )
#ifdef __GNUC__
 __attribute__ ( ( format( printf, 1, 2 ) ) )
#endif
;

void UTIL_LogFilePrint( const char *format, ... )
#ifdef __GNUC__
 __attribute__ ( ( format( printf, 1, 2 ) ) )
#endif
;

// The default ImageBarFill.png
static const unsigned int cuiImageBarFillPng[138] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x08, 0x03, 0x00, 0x00, 0x00, 0x28, 0xCB, 0x34,
	0xBB, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 0x07, 0xD4, 0x0B, 0x0C, 0x02, 0x28, 0x11,
	0x4C, 0x14, 0x20, 0x06, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x1E, 0xC1,
	0x00, 0x00, 0x1E, 0xC1, 0x01, 0xC3, 0x69, 0x54, 0x53, 0x00, 0x00, 0x00, 0x04, 0x67, 0x41, 0x4D,
	0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 0x61, 0x05, 0x00, 0x00, 0x00, 0x03, 0x50, 0x4C, 0x54,
	0x45, 0x43, 0x59, 0x6E, 0x14, 0xD5, 0xA4, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x49, 0x44, 0x41, 0x54,
	0x78, 0xDA, 0x63, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0xE5, 0x27, 0xDE, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82,
};

// The default ImageBarTrans.png
static const unsigned int cuiImageBarTransPng[138] =
{
    0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x08, 0x03, 0x00, 0x00, 0x00, 0x28, 0xCB, 0x34, 
    0xBB, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 0x07, 0xD4, 0x0B, 0x0C, 0x02, 0x28, 0x38, 
    0x0E, 0xA6, 0xB8, 0x6A, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x1E, 0xC1, 
    0x00, 0x00, 0x1E, 0xC1, 0x01, 0xC3, 0x69, 0x54, 0x53, 0x00, 0x00, 0x00, 0x04, 0x67, 0x41, 0x4D, 
    0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 0x61, 0x05, 0x00, 0x00, 0x00, 0x03, 0x50, 0x4C, 0x54, 
    0x45, 0x81, 0x99, 0xB1, 0x5B, 0x68, 0xFE, 0x24, 0x00, 0x00, 0x00, 0x0A, 0x49, 0x44, 0x41, 0x54, 
    0x78, 0xDA, 0x63, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0xE5, 0x27, 0xDE, 0xFC, 0x00, 0x00, 
    0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

// The default favicon.ico
static const unsigned int cuiFavIconIco[894] =
{
    0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x68, 0x03, 
    0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 0x00, 
    0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 
    0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x70, 0x70, 0x70, 0xA0, 0xA0, 0xA0, 
    0xB0, 0xB0, 0xB0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xB0, 0xB0, 0xB0, 0xA0, 0xA0, 0xA0, 0x60, 
    0x60, 0x60, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0xB0, 0xB0, 0xB0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0x90, 0x90, 0x90, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x20, 0x20, 0x20, 0xB0, 0xB0, 0xB0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x90, 0x90, 0x90, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xD0, 0xD0, 0xD0, 0xE0, 0xE0, 0xE0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xD0, 0xD0, 0xD0, 0xD0, 
    0x90, 0x90, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xA0, 0x40, 0x40, 0xFF, 0x40, 0x40, 
    0xF0, 0xF0, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 0x70, 0x70, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x70, 0x70, 
    0x70, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x90, 0x70, 0x70, 0xE0, 0x00, 0x00, 
    0xFF, 0x80, 0x80, 0xD0, 0xD0, 0xD0, 0xC0, 0xC0, 0xC0, 0xF0, 0xB0, 0xB0, 0xE0, 0x60, 0x60, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xB0, 0xB0, 0xB0, 0x40, 0x40, 0x40, 0x80, 0x80, 
    0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x90, 0x70, 0x70, 
    0xE0, 0x00, 0x00, 0xFF, 0xC0, 0xC0, 0xF0, 0xB0, 0xB0, 0xF0, 0x30, 0x30, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x80, 0x80, 
    0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0x90, 0x70, 0x70, 0xFF, 0x00, 0x00, 0xFF, 0x40, 0x40, 0xD0, 0xD0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x80, 0x80, 
    0x80, 0xD0, 0xD0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xA0, 0xA0, 0xA0, 
    0xE0, 0x20, 0x20, 0xFF, 0x40, 0x40, 0xE0, 0x00, 0x00, 0xFF, 0xC0, 0xC0, 0xD0, 0xD0, 0xD0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x60, 0x00, 0x00, 
    0x00, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xA0, 0x80, 0x80, 0xE0, 0x00, 0x00, 
    0xFF, 0x40, 0x40, 0xD0, 0xD0, 0xD0, 0xB0, 0x90, 0x90, 0xA0, 0x20, 0x20, 0xFF, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xD0, 0x90, 0x90, 0xE0, 0xA0, 0xA0, 
    0xD0, 0xD0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xB0, 0xB0, 0xB0, 0xD0, 0x30, 0x30, 0xE0, 
    0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xB0, 0xB0, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x40, 0x40, 0x40, 0xF0, 0xF0, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xD0, 
    0x90, 0x90, 0xC0, 0xC0, 0xC0, 0xD0, 0xD0, 0xD0, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0xF0, 0xF0, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
    0xC0, 0xC0, 0xD0, 0xD0, 0xD0, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 
    0xD0, 0xD0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xB0, 
    0xB0, 0xB0, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x3F, 
    0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 
    0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 
    0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 
};

void UTIL_AccessLogPrint( const string &cstrIP, const string &cstrUser, const string &cstrRequest, const unsigned int &cuiStatus, const unsigned int &cuiBytes );

// addition by labarks
const string UTIL_AddedToDate( const string &cstrAdded );

//
// shamelessly stolen from wget source code
//

struct bnbttv
{
#ifdef WIN32
	ULARGE_INTEGER wintime;
#else
	unsigned long sec;
	unsigned long usec;
#endif
};

const struct bnbttv UTIL_CurrentTime( );
const string UTIL_ElapsedTimeStr( const struct bnbttv &btvStart, const struct bnbttv &btvEnd );

// string conversion routines

const string UTIL_EscapedToString( const string &cstrEscape );
const string UTIL_HashToString( const string &cstrHash );
const string UTIL_BytesToString( int64 iBytes );
const string UTIL_SecondsToString( unsigned long ulSeconds );
const string UTIL_PassedToString( time_t tNow, time_t tAdded, const string &cstrAdded );
const string UTIL_StringToEscaped( const string &cstrString );
const string UTIL_StringToEscapedStrict( const string &cstrString );
const string UTIL_StringToHash( const string &cstrString );
const string UTIL_AccessToText( const unsigned char cucAccess );
const string UTIL_AccessToString( const unsigned char cucAccess );
const string UTIL_GroupToString( const unsigned char cucGroup );
const string UTIL_UserClass( const unsigned char cucAccess, const unsigned char cucGroup );

const int64 UTIL_StringTo64( const char *sz64 );

const string UTIL_InfoHash( CAtom *pTorrent );

// file routines

const bool UTIL_CheckFile( const char *szFile );
void UTIL_MakeFile( const char *szFile, const string &cstrContents );
void UTIL_DeleteFile( const char *szFile );
void UTIL_MoveFile( const char *szFile, const char *szDest );
const string UTIL_ReadFile( const char *szFile );
const unsigned long UTIL_SizeFile( const char *szFile );

// string routines

const string UTIL_ToLower( const string &cstrUpper );
const string UTIL_StripPath( const string &cstrPath );
const string UTIL_RemoveHTML( const string &cstrHTML );
const string UTIL_RemoveHTML2( const string &cstrHTML );
const string UTIL_RemoveHTML3( const string &cstrHTML );
const string UTIL_BBCode( const string &cstrHTML );
void UTIL_StripName( const string &cstrCompName, string &strReturnName1, string &strReturnName2 );
const string UTIL_RemoveBR( const string &cstrName );
const string UTIL_HTMLJoin( vector< pair< string, string > > &vecParams, const string &cstrStart, const string &cstrJoin, const string &cstrEqual );
const vector<string> UTIL_SplitToVector( const string &cstrJoined, const string &cstrSplit );
const vector<string> UTIL_SplitToVectorStrict( const string &cstrJoined, const string &cstrSplit );
const bool UTIL_MatchVector( const string &cstrText, vector<string> &vecMatch, const unsigned char cucMatchMethod );
const int UTIL_MatchVectorEqualPos( const string &cstrText, vector<string> &vecMatch );
const string UTIL_PageBarIndex( unsigned long ulCount, const string &cstrPage, const unsigned int cuiPerPage, const string &cstrRef, const string &cstrParams, const bool bPageBarTop, const bool bShowPageNum = false );
const string UTIL_PageBar( unsigned long ulCount, const string &cstrPage, const unsigned int cuiPerPage, const string &cstrRef, const string &cstrParams, const bool bPageBarTop, const bool bShowPageNum = false );
const string UTIL_PageBarAJAX( unsigned long ulCount, const string &cstrPage, const unsigned int cuiPerPage, const string &cstrRef, const string &cstrParams, const string &cstrTagName, const string &cstrID, const bool bPageBarTop, const bool bShowPageNum = false );
const string UTIL_JS_Edit_Tool_Bar( const string &cstrTextarea );
const string UTIL_Edit_Tool_Bar( );

// misc routines

const string UTIL_FailureReason( const string &cstrFailureReason );

// XBNBT
const string UTIL_Date( );
const string UTIL_PubDate( );

const bool UTIL_CheckDir( const char *szFile );

const string UTIL_StringToDisplay( const string &strString );
const string UTIL_StringStripLF( const string &strString );

const string UTIL_Xsprintf( const char *format, ... )
#ifdef __GNUC__
 __attribute__ ( ( format( printf, 1, 2 ) ) )
#endif
;

const bool UTIL_IsIPBanList( const string &cstrPeerIP, CAtomList *m_pIPBannedList );
const bool UTIL_IsClientBanList( const string &cstrPeerID, CAtomList *m_pClientBannedList, const bool &bUserAgent );

#endif
