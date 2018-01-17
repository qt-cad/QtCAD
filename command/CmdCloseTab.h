#pragma once
#ifndef INCLUDED_CMDCLOSETAB_H
#define INCLUDED_CMDCLOSETAB_H
#include "command/Cmd.h"

class CmdCloseTab : public Cmd
{
   QWidget* view;

public:
   CmdCloseTab(QWidget* v) : view(v) {}
   ~CmdCloseTab() {}

   void execute(Data& d, MainScreen& s) override;
};

#endif