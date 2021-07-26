#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_BUTTON(10001, cMain::OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "hola", wxPoint(30, 30), wxSize(800, 600))
{
    button1 = new wxButton(this, 10001, "click me", wxPoint(10, 10), wxSize(150, 50));
}

void cMain::OnButtonClicked(wxCommandEvent &evt)
{
    std::cout << "holaxd"<< std::endl;
    wxMessageBox("HOLAXD", "HOLAXD", wxICON_NONE);
}

cMain::~cMain()
{

}