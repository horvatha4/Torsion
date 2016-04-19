// Torsion TorqueScript IDE - Copyright (C) Sickhead Games, LLC
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

#ifndef TORSION_PCH
#define TORSION_PCH

#ifdef _DEBUG 
   #include <crtdbg.h> 
   #define DEBUG_NEW new(_NORMAL_BLOCK ,__FILE__, __LINE__) 
#else 
   #define DEBUG_NEW new 
#endif 

#define wxSUFFIX u
#define wxUSE_GUI 1

#define wxUSE_CMDLINE_PARSER 1
#define wxUSE_COMBOBOX 1
#define wxUSE_DOC_VIEW_ARCHITECTURE 1
#define wxUSE_FILE 1
#define wxUSE_FINDREPLDLG 1
#define wxUSE_HELP 1
#define wxUSE_IMAGE 1
#define wxUSE_LIBJPEG 1
#define wxUSE_LOG 1
#define wxUSE_MDI 1
#define wxUSE_MDI_ARCHITECTURE 1
#define wxUSE_MS_HTML_HELP 1
#define wxUSE_MSGDLG 1
#define wxUSE_REGKEY 1
#define wxUSE_SNGLINST_CHECKER 1
#define wxUSE_SOCKETS 1
#define wxUSE_STATBMP 1
#define wxUSE_STL 1
#define wxUSE_STD_IOSTREAM 1
#define wxUSE_TOOLBAR 1
#define wxUSE_UNICODE 1
#define wxUSE_XPM 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1
//#define wxUSE_TEXTFILE 1

#include <wx/wx.h>
#include <wx/filename.h>
#include <wx/process.h>
#include <wx/socket.h>
#include <wx/dynarray.h>
#include <wx/docview.h>

#ifdef __WXMSW__
#include <wx/msw/private.h>
   #pragma warning( disable : 4018 ) // warning C4018: '<' : signed/unsigned mismatch
   #pragma warning( disable : 4267 ) // warning C4267: 'return' : conversion from 'size_t' to 'int', possible loss of data
#endif

#else // TORSION_PCH
   #error This should only be included once!
#endif

