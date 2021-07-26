#include "cApp.h"

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    frame1 = new cMain();
    frame1->SetMinSize(wxSize(800,600));
    frame1->SetMaxSize(wxSize(800,600));
    frame1->Show();
    return true;
}