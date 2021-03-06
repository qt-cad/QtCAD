#include "command/CmdCloseTab.h"
#include "data/File.h"

void CmdCloseTab::execute(Data& d, MainScreen& s)
{
   File* f = d.getFileByView(dynamic_cast<View*>(view));

   if ( f )
   {
      if (!f->getSaved())
         s.closeTabDialog();

      s.tabs->removeTab(s.tabs->tabPosition());
   
      if (s.tabs->count() <= 0)
         s.tabs->setVisible(false);
   }
}
