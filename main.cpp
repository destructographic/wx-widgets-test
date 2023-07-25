#include <wx/wx.h>

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
    {
        // Create a panel to hold other controls (widgets)
        wxPanel* panel = new wxPanel(this, wxID_ANY);

        // Create a label (text) control
        wxStaticText* label = new wxStaticText(panel, wxID_ANY, "Hello, wxWidgets!", wxPoint(10, 10));

        // Set the frame's size to fit its contents
        Fit();
    }
};

class MyApp : public wxApp {
public:
    virtual bool OnInit() {
        // Create and show the main window
        MyFrame* frame = new MyFrame("wxWidgets Window", wxPoint(50, 50), wxSize(400, 200));
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
