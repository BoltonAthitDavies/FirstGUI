#include "app.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(app);

bool app::OnInit() {
	MainFrame* mainFrame = new MainFrame("C++ GUI");
	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
