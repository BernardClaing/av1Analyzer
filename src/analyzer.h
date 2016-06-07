#ifndef __ANALYZER__
#define __ANALYZER__

#include <wx/wx.h>
#include <wx/cmdline.h>

class AnalyzerApp : public wxApp {
public :
  void OnInitCmdLine(wxCmdLineParser &parser);

};

DECLARE_APP(AnalyzerApp)


#endif /* defined(__NOMDUFICHIER__) */
