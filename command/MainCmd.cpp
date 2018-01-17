#include "MainCmd.h"
#include "data/Data.h"
#include "../app/App.h"
#include "interface/MainScreen.h"

void MainCmd::setMessageToScreen(Instruction in)
{ 
   App::getInstance().getScreen().setStatusMessage(in);
}

void MainCmd::setDrawing(bool drwOk)
{
   drawing = drwOk;
   data.getCurrentFile()->getView()->setMouseTracking(drwOk);
}

void MainCmd::setAuxDraw(bool status)
{
   auxDraw = status;
   data.getCurrentFile()->getView()->setMouseTracking(status);
}


