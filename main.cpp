#include <wx/wx.h>

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, wxSize(200, 100), wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER) // Set initial size to 200x100 pixels
    {
        // Create a panel to hold other controls (widgets)
        wxPanel* panel = new wxPanel(this, wxID_ANY);

        // Create a label (text) control
        wxStaticText* label = new wxStaticText(panel, wxID_ANY, "Hello, wxWidgets!", wxPoint(10, 10));

        // Set the frame's content size to 50x100 pixels
        SetClientSize(50, 100);
    }
};

class MyApp : public wxApp {
public:
    virtual bool OnInit() {
        // Create and show the main window
        MyFrame* frame = new MyFrame("", wxPoint(50, 50), wxSize(50, 100));
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
