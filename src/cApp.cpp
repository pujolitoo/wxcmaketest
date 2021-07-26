#include "cApp.h"

wxIMPLEMENT_APP(cApp);

void splash(int milis)
{
    wxBitmap bitmap;
    wxSplashScreen* splash;
    if (bitmap.LoadFile("../res/mesi.png", wxBITMAP_TYPE_PNG))
    {
        splash = new wxSplashScreen(bitmap,
            wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT,
            milis, NULL, -1, wxDefaultPosition, wxDefaultSize,
            wxBORDER_SIMPLE|wxSTAY_ON_TOP);
    }
    wxYield();
    wxSleep(2);
}
bool cApp::OnInit()
{
    wxInitAllImageHandlers();
    frame1 = new cMain();
    frame1->Center();
    splash(2000);
    frame1->Show(true);
    return true;
}