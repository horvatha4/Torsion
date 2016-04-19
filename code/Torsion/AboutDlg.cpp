// Torsion TorqueScript IDE - Copyright (C) Sickhead Games, LLC
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

// Generated by DialogBlocks (unregistered), 08/05/05 12:13:31

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma implementation "AboutDlg.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "AboutDlg.h"
#include "BuildVersion.h"

////@begin XPM images
////@end XPM images

/*!
 * AboutDlg type definition
 */

IMPLEMENT_DYNAMIC_CLASS( AboutDlg, wxDialog )

/*!
 * AboutDlg event table definition
 */

BEGIN_EVENT_TABLE( AboutDlg, wxDialog )

////@begin AboutDlg event table entries
////@end AboutDlg event table entries

END_EVENT_TABLE()

/*!
 * AboutDlg constructors
 */

AboutDlg::AboutDlg( )
{
}

AboutDlg::AboutDlg( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * AboutDlg creator
 */

bool AboutDlg::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin AboutDlg member initialisation
   m_RegInfo = NULL;
////@end AboutDlg member initialisation

////@begin AboutDlg creation
   wxDialog::Create( parent, id, caption, pos, size, style );

   CreateControls();
   if (GetSizer())
   {
      GetSizer()->SetSizeHints(this);
   }
   Centre();
////@end AboutDlg creation
    return TRUE;
}

/*!
 * Control creation for AboutDlg
 */

void AboutDlg::CreateControls()
{    
////@begin AboutDlg content construction
   AboutDlg* itemDialog1 = this;

   wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
   itemDialog1->SetSizer(itemBoxSizer2);

   wxBitmap itemStaticBitmap3Bitmap(itemDialog1->GetBitmapResource(wxT("about.bmp")));
   wxStaticBitmap* itemStaticBitmap3 = new wxStaticBitmap( itemDialog1, wxID_ANY, itemStaticBitmap3Bitmap, wxDefaultPosition, itemDialog1->ConvertDialogToPixels(wxSize(286, 92)), wxSTATIC_BORDER );
   itemBoxSizer2->Add(itemStaticBitmap3, 0, wxALIGN_LEFT|wxALL|wxFIXED_MINSIZE, 7);

   wxStaticText* itemStaticText4 = new wxStaticText( itemDialog1, abID_VERSION, _("v0.1.1000 \"1st Alpha\""), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
   itemBoxSizer2->Add(itemStaticText4, 0, wxALIGN_RIGHT|wxLEFT|wxRIGHT, 7);//|wxADJUST_MINSIZE

   m_RegInfo = new wxStaticText( itemDialog1, wxID_ANY, _("Unregistered"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
   m_RegInfo->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxBOLD, false, _T("Tahoma")));
   itemBoxSizer2->Add(m_RegInfo, 0, wxGROW|wxTOP|wxBOTTOM, 2);//|wxADJUST_MINSIZE

   wxBoxSizer* itemBoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
   itemBoxSizer2->Add(itemBoxSizer6, 0, wxGROW, 0);

   wxStaticText* itemStaticText7 = new wxStaticText( itemDialog1, wxID_ANY, _("(c) 2008 Sickhead Games, LLC"), wxDefaultPosition, wxDefaultSize, 0 );
   itemBoxSizer6->Add(itemStaticText7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 7);//|wxADJUST_MINSIZE

   itemBoxSizer6->Add(19, 19, 1, wxGROW|wxFIXED_MINSIZE, 0);

   wxButton* itemButton9 = new wxButton( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
   itemButton9->SetDefault();
   itemBoxSizer6->Add(itemButton9, 0, wxALIGN_TOP|wxALL, 7);

////@end AboutDlg content construction

   FindWindow( abID_VERSION )->SetLabel( tsGetFullBuildString() );

   /*
   wxString info;

   wxASSERT( IgnitionWrapper::inst() );
   if ( IgnitionWrapper::inst()->getRegistrationStatus() == IGNITION_VALIDKEY )
   {
      wxString name = IgnitionWrapper::inst()->getRegistrationName();
      if ( name.IsEmpty() )
         info << "Registered";
      else
         info << "Registered to " << name;
   }
   else
   {
      const int days = IgnitionWrapper::inst()->getRemainingTrialDays();
      info = IgnitionWrapper::makeTrialInfoString( days );
   }

   m_RegInfo->SetTitle( info );
   */
}

/*!
 * Should we show tooltips?
 */

bool AboutDlg::ShowToolTips()
{
    return TRUE;
}

/*!
 * Get bitmap resources
 */

wxBitmap AboutDlg::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin AboutDlg bitmap retrieval
   wxUnusedVar(name);
   if (name == _T("about.bmp"))
   {
      wxBitmap bitmap(_T("TORSIONLOGO"), wxBITMAP_TYPE_BMP_RESOURCE);
      return bitmap;
   }
   return wxNullBitmap;
////@end AboutDlg bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon AboutDlg::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin AboutDlg icon retrieval
   wxUnusedVar(name);
   return wxNullIcon;
////@end AboutDlg icon retrieval
}
