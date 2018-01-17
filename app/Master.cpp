#include "App.h"

#ifdef _MSC_VER
    #include <crtdbg.h>
#endif

int main(int argc, char* argv[])
{
    #ifdef _MSC_VER
        _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
        _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
        _CrtMemState s1;
    #endif


	App::getInstance().start(argc, argv);


    #ifdef _MSC_VER
        _CrtMemCheckpoint(&s1);
        _CrtMemDumpStatistics(&s1);
    #endif
}
