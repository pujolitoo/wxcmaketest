#pragma once
#include <wx/wx.h>
#include "cMain.h"

class cApp : public wxApp
{
    public:
        virtual bool OnInit();

    private:
        cMain* frame1 = nullptr;
};