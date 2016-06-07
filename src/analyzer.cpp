#include "analyzer.h"
#include <iostream>

IMPLEMENT_APP(AnalyzerApp)

void AnalyzerApp::OnInitCmdLine(wxCmdLineParser &parser) {
  std::cout << "hello" << std::endl;

}
