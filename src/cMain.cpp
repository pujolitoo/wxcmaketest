#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_BUTTON(10001, cMain::OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "hola", wxPoint(30, 30), wxSize(800, 600), wxMINIMIZE_BOX | wxSYSTEM_MENU | wxCAPTION | wxCLOSE_BOX | wxCLIP_CHILDREN | wxBORDER_SIMPLE)
{
    this->SetBackgroundColour(* wxWHITE);
    mainPanel = new wxPanel(this, -1);
    mainPanel->SetBackgroundColour(* wxWHITE);
    button1 = new wxButton(mainPanel, 10001, "click me", wxPoint(10, 10), wxSize(150, 50));
    wxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
    // expand contents, add 5px border on all sides:
    sizer->Add(mainPanel,1,wxEXPAND|wxALL,5);
    this->SetSizer(sizer);
}

void cMain::OnButtonClicked(wxCommandEvent &evt)
{
    std::cout << "holaxd"<< std::endl;
    wxMessageBox("HOLAXD", "HOLAXD", wxICON_NONE);
}

cMain::~cMain()
{

}