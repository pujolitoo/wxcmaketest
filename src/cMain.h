#pragma once
#include <wx/wx.h>
#include <iostream>

class cMain : public wxFrame
{
    wxDECLARE_EVENT_TABLE();

    public:
        cMain();
        ~cMain();

    public:

        wxButton *button1 = nullptr;

        void OnButtonClicked(wxCommandEvent &evt);
};