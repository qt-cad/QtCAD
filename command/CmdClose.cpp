#include "command/CmdClose.h"
#include "command/CmdClearAllItems.h"

void CmdClose::execute(Data& d, MainScreen& s)
{
   d.deleteAllFiles();
   exit(0);
}